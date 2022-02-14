
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u64 ;
struct atom_context {int scratch_size_bytes; int scratch; scalar_t__ bios; } ;
struct TYPE_5__ {int start_offset; int size; } ;
struct TYPE_4__ {struct atom_context* atom_context; } ;
struct amdgpu_device {TYPE_2__ fw_vram_usage; TYPE_1__ mode_info; } ;
struct _ATOM_VRAM_USAGE_BY_FIRMWARE {TYPE_3__* asFirmwareVramReserveInfo; } ;
struct TYPE_6__ {int ulStartAddrUsedByFirmware; int usFirmwareUseInKb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct atom_context*,int,int *,int *,int *,scalar_t__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_7)
{
 struct atom_context *VAR_8 = VAR_7->mode_info.atom_context;
 int VAR_9 = FUNC_1(VAR_3, VAR_6);
 uint16_t VAR_10;
 int VAR_11 = 0;
 struct _ATOM_VRAM_USAGE_BY_FIRMWARE *VAR_12;
 u64 VAR_13;
 u64 VAR_14;

 if (FUNC_2(VAR_8, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_10)) {
  VAR_12 = (struct _ATOM_VRAM_USAGE_BY_FIRMWARE *)(VAR_8->bios + VAR_10);

  FUNC_0("atom firmware requested %08x %dkb\n",
     FUNC_5(VAR_12->asFirmwareVramReserveInfo[0].ulStartAddrUsedByFirmware),
     FUNC_4(VAR_12->asFirmwareVramReserveInfo[0].usFirmwareUseInKb));

  VAR_13 = VAR_12->asFirmwareVramReserveInfo[0].ulStartAddrUsedByFirmware;
  VAR_14 = VAR_12->asFirmwareVramReserveInfo[0].usFirmwareUseInKb;

  if ((uint32_t)(VAR_13 & VAR_1) ==
   (uint32_t)(VAR_0 <<
   VAR_2)) {

   VAR_7->fw_vram_usage.start_offset = (VAR_13 &
    (~VAR_1)) << 10;
   VAR_7->fw_vram_usage.size = VAR_14 << 10;

   VAR_11 = 0;
  } else {
   VAR_11 = FUNC_4(VAR_12->asFirmwareVramReserveInfo[0].usFirmwareUseInKb) * 1024;
  }
 }
 VAR_8->scratch_size_bytes = 0;
 if (VAR_11 == 0)
  VAR_11 = 20 * 1024;

 VAR_8->scratch = FUNC_3(VAR_11, VAR_5);
 if (!VAR_8->scratch)
  return -VAR_4;
 VAR_8->scratch_size_bytes = VAR_11;
 return 0;
}
