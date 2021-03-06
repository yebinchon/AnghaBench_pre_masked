
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct card_info {int dummy; } ;
struct atom_context {int cmd_table; int data_table; int vbios_version; int iio; void* bios; struct card_info* card; } ;


 int ATOM_ATI_MAGIC ;
 int ATOM_ATI_MAGIC_PTR ;
 int ATOM_BIOS_MAGIC ;
 scalar_t__ ATOM_DATA_IIO_PTR ;
 scalar_t__ ATOM_ROM_CMD_PTR ;
 scalar_t__ ATOM_ROM_DATA_PTR ;
 int ATOM_ROM_MAGIC ;
 int ATOM_ROM_MAGIC_PTR ;
 scalar_t__ ATOM_ROM_PART_NUMBER_PTR ;
 scalar_t__ ATOM_ROM_TABLE_PTR ;
 char* CSTR (int) ;
 int CU16 (scalar_t__) ;
 int GFP_KERNEL ;
 int amdgpu_atom_destroy (struct atom_context*) ;
 int atom_index_iio (struct atom_context*,int) ;
 int kfree (struct atom_context*) ;
 struct atom_context* kzalloc (int,int ) ;
 int pr_info (char*,...) ;
 int strlcpy (int ,char*,int) ;
 int strlen (int ) ;
 scalar_t__ strncmp (char*,int ,int ) ;

struct atom_context *amdgpu_atom_parse(struct card_info *card, void *bios)
{
 int base;
 struct atom_context *ctx =
     kzalloc(sizeof(struct atom_context), GFP_KERNEL);
 char *str;
 u16 idx;

 if (!ctx)
  return ((void*)0);

 ctx->card = card;
 ctx->bios = bios;

 if (CU16(0) != ATOM_BIOS_MAGIC) {
  pr_info("Invalid BIOS magic\n");
  kfree(ctx);
  return ((void*)0);
 }
 if (strncmp
     (CSTR(ATOM_ATI_MAGIC_PTR), ATOM_ATI_MAGIC,
      strlen(ATOM_ATI_MAGIC))) {
  pr_info("Invalid ATI magic\n");
  kfree(ctx);
  return ((void*)0);
 }

 base = CU16(ATOM_ROM_TABLE_PTR);
 if (strncmp
     (CSTR(base + ATOM_ROM_MAGIC_PTR), ATOM_ROM_MAGIC,
      strlen(ATOM_ROM_MAGIC))) {
  pr_info("Invalid ATOM magic\n");
  kfree(ctx);
  return ((void*)0);
 }

 ctx->cmd_table = CU16(base + ATOM_ROM_CMD_PTR);
 ctx->data_table = CU16(base + ATOM_ROM_DATA_PTR);
 atom_index_iio(ctx, CU16(ctx->data_table + ATOM_DATA_IIO_PTR) + 4);
 if (!ctx->iio) {
  amdgpu_atom_destroy(ctx);
  return ((void*)0);
 }

 idx = CU16(ATOM_ROM_PART_NUMBER_PTR);
 if (idx == 0)
  idx = 0x80;

 str = CSTR(idx);
 if (*str != '\0') {
  pr_info("ATOM BIOS: %s\n", str);
  strlcpy(ctx->vbios_version, str, sizeof(ctx->vbios_version));
 }


 return ctx;
}
