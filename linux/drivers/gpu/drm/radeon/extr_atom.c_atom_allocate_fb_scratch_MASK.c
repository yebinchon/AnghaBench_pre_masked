
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct atom_context {int scratch_size_bytes; int scratch; scalar_t__ bios; } ;
struct _ATOM_VRAM_USAGE_BY_FIRMWARE {TYPE_1__* asFirmwareVramReserveInfo; } ;
struct TYPE_2__ {int usFirmwareUseInKb; int ulStartAddrUsedByFirmware; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct atom_context*,int,int *,int *,int *,scalar_t__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct atom_context *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_0, VAR_3);
 uint16_t VAR_6;
 int VAR_7 = 0;
 struct _ATOM_VRAM_USAGE_BY_FIRMWARE *VAR_8;

 if (FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0), &VAR_6)) {
  VAR_8 = (struct _ATOM_VRAM_USAGE_BY_FIRMWARE *)(VAR_4->bios + VAR_6);

  FUNC_0("atom firmware requested %08x %dkb\n",
     FUNC_5(VAR_8->asFirmwareVramReserveInfo[0].ulStartAddrUsedByFirmware),
     FUNC_4(VAR_8->asFirmwareVramReserveInfo[0].usFirmwareUseInKb));

  VAR_7 = FUNC_4(VAR_8->asFirmwareVramReserveInfo[0].usFirmwareUseInKb) * 1024;
 }
 VAR_4->scratch_size_bytes = 0;
 if (VAR_7 == 0)
  VAR_7 = 20 * 1024;

 VAR_4->scratch = FUNC_3(VAR_7, VAR_2);
 if (!VAR_4->scratch)
  return -VAR_1;
 VAR_4->scratch_size_bytes = VAR_7;
 return 0;
}
