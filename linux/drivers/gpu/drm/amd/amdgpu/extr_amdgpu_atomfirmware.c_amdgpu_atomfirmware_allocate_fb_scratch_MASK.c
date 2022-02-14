
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vram_usagebyfirmware_v2_1 {int used_by_driver_in_kb; int used_by_firmware_in_kb; int start_address_in_kb; } ;
struct atom_context {int scratch_size_bytes; int scratch; scalar_t__ bios; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ start_offset; } ;
struct TYPE_3__ {struct atom_context* atom_context; } ;
struct amdgpu_device {TYPE_2__ fw_vram_usage; TYPE_1__ mode_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct atom_context*,int,int *,int *,int *,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;

int FUNC_6(struct amdgpu_device *VAR_7)
{
 struct atom_context *VAR_8 = VAR_7->mode_info.atom_context;
 int VAR_9 = FUNC_2(VAR_5,
      VAR_6);
 struct vram_usagebyfirmware_v2_1 * VAR_10;
 uint32_t VAR_11, VAR_12;
 uint16_t VAR_13;
 int VAR_14 = 0;

 if (FUNC_1(VAR_8, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13)) {
  VAR_10 = (struct vram_usagebyfirmware_v2_1 *)(VAR_8->bios + VAR_13);
  FUNC_0("atom firmware requested %08x %dkb fw %dkb drv\n",
     FUNC_5(VAR_10->start_address_in_kb),
     FUNC_4(VAR_10->used_by_firmware_in_kb),
     FUNC_4(VAR_10->used_by_driver_in_kb));

  VAR_11 = FUNC_5(VAR_10->start_address_in_kb);
  VAR_12 = FUNC_4(VAR_10->used_by_firmware_in_kb);

  if ((uint32_t)(VAR_11 & VAR_1) ==
   (uint32_t)(VAR_0 <<
   VAR_2)) {

   VAR_7->fw_vram_usage.start_offset = (VAR_11 &
    (~VAR_1)) << 10;
   VAR_7->fw_vram_usage.size = VAR_12 << 10;

   VAR_14 = 0;
  } else {
   VAR_14 = FUNC_4(VAR_10->used_by_driver_in_kb) << 10;
  }
 }
 VAR_8->scratch_size_bytes = 0;
 if (VAR_14 == 0)
  VAR_14 = 20 * 1024;

 VAR_8->scratch = FUNC_3(VAR_14, VAR_4);
 if (!VAR_8->scratch)
  return -VAR_3;
 VAR_8->scratch_size_bytes = VAR_14;
 return 0;
}
