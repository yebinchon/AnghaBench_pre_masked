
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vmap_entry {int link; void** arg; void* max; void* min; void* mode; } ;


 int FUNC_0 (struct nvbios_vmap_entry*,int,int) ;
 void* FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 void* FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,int,int*,int*) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, int VAR_1, u8 *VAR_2, u8 *VAR_3,
   struct nvbios_vmap_entry *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 switch (!!VAR_5 * *VAR_2) {
 case 0x10:
  VAR_4->link = 0xff;
  VAR_4->min = FUNC_2(VAR_0, VAR_5 + 0x00);
  VAR_4->max = FUNC_2(VAR_0, VAR_5 + 0x04);
  VAR_4->arg[0] = FUNC_2(VAR_0, VAR_5 + 0x08);
  VAR_4->arg[1] = FUNC_2(VAR_0, VAR_5 + 0x0c);
  VAR_4->arg[2] = FUNC_2(VAR_0, VAR_5 + 0x10);
  break;
 case 0x20:
  VAR_4->mode = FUNC_1(VAR_0, VAR_5 + 0x00);
  VAR_4->link = FUNC_1(VAR_0, VAR_5 + 0x01);
  VAR_4->min = FUNC_2(VAR_0, VAR_5 + 0x02);
  VAR_4->max = FUNC_2(VAR_0, VAR_5 + 0x06);
  VAR_4->arg[0] = FUNC_2(VAR_0, VAR_5 + 0x0a);
  VAR_4->arg[1] = FUNC_2(VAR_0, VAR_5 + 0x0e);
  VAR_4->arg[2] = FUNC_2(VAR_0, VAR_5 + 0x12);
  VAR_4->arg[3] = FUNC_2(VAR_0, VAR_5 + 0x16);
  VAR_4->arg[4] = FUNC_2(VAR_0, VAR_5 + 0x1a);
  VAR_4->arg[5] = FUNC_2(VAR_0, VAR_5 + 0x1e);
  break;
 }
 return VAR_5;
}
