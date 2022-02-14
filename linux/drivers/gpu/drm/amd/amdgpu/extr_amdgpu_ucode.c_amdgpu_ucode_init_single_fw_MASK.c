
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct gfx_firmware_header_v1_0 {int jt_offset; int jt_size; } ;
struct dmcu_firmware_header_v1_0 {int intv_offset_bytes; int intv_size_bytes; } ;
struct common_firmware_header {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct amdgpu_firmware_info {scalar_t__ ucode_id; int ucode_size; void* kaddr; TYPE_2__* fw; int mc_addr; } ;
struct TYPE_7__ {int save_restore_list_cntl_size_bytes; void* save_restore_list_cntl; int save_restore_list_gpm_size_bytes; void* save_restore_list_gpm; int save_restore_list_srm_size_bytes; void* save_restore_list_srm; } ;
struct TYPE_8__ {TYPE_3__ rlc; } ;
struct TYPE_5__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_4__ gfx; TYPE_1__ firmware; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_11,
           struct amdgpu_firmware_info *VAR_12,
           uint64_t VAR_13, void *VAR_14)
{
 const struct common_firmware_header *VAR_15 = ((void*)0);
 const struct gfx_firmware_header_v1_0 *VAR_16 = ((void*)0);
 const struct dmcu_firmware_header_v1_0 *VAR_17 = ((void*)0);

 if (((void*)0) == VAR_12->fw)
  return 0;

 VAR_12->mc_addr = VAR_13;
 VAR_12->kaddr = VAR_14;

 if (VAR_12->ucode_id == VAR_10)
  return 0;

 VAR_15 = (const struct common_firmware_header *)VAR_12->fw->data;
 VAR_16 = (const struct gfx_firmware_header_v1_0 *)VAR_12->fw->data;
 VAR_17 = (const struct dmcu_firmware_header_v1_0 *)VAR_12->fw->data;

 if (VAR_11->firmware.load_type != VAR_0 ||
     (VAR_12->ucode_id != VAR_1 &&
      VAR_12->ucode_id != VAR_3 &&
      VAR_12->ucode_id != VAR_2 &&
      VAR_12->ucode_id != VAR_4 &&
      VAR_12->ucode_id != VAR_7 &&
      VAR_12->ucode_id != VAR_8 &&
      VAR_12->ucode_id != VAR_9 &&
   VAR_12->ucode_id != VAR_5 &&
   VAR_12->ucode_id != VAR_6)) {
  VAR_12->ucode_size = FUNC_0(VAR_15->ucode_size_bytes);

  FUNC_1(VAR_12->kaddr, (void *)((uint8_t *)VAR_12->fw->data +
           FUNC_0(VAR_15->ucode_array_offset_bytes)),
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_1 ||
     VAR_12->ucode_id == VAR_3) {
  VAR_12->ucode_size = FUNC_0(VAR_15->ucode_size_bytes) -
   FUNC_0(VAR_16->jt_size) * 4;

  FUNC_1(VAR_12->kaddr, (void *)((uint8_t *)VAR_12->fw->data +
           FUNC_0(VAR_15->ucode_array_offset_bytes)),
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_2 ||
     VAR_12->ucode_id == VAR_4) {
  VAR_12->ucode_size = FUNC_0(VAR_16->jt_size) * 4;

  FUNC_1(VAR_12->kaddr, (void *)((uint8_t *)VAR_12->fw->data +
           FUNC_0(VAR_15->ucode_array_offset_bytes) +
           FUNC_0(VAR_16->jt_offset) * 4),
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_5) {
  VAR_12->ucode_size = FUNC_0(VAR_15->ucode_size_bytes) -
    FUNC_0(VAR_17->intv_size_bytes);

  FUNC_1(VAR_12->kaddr, (void *)((uint8_t *)VAR_12->fw->data +
           FUNC_0(VAR_15->ucode_array_offset_bytes)),
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_6) {
  VAR_12->ucode_size = FUNC_0(VAR_17->intv_size_bytes);

  FUNC_1(VAR_12->kaddr, (void *)((uint8_t *)VAR_12->fw->data +
           FUNC_0(VAR_15->ucode_array_offset_bytes) +
           FUNC_0(VAR_17->intv_offset_bytes)),
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_7) {
  VAR_12->ucode_size = VAR_11->gfx.rlc.save_restore_list_cntl_size_bytes;
  FUNC_1(VAR_12->kaddr, VAR_11->gfx.rlc.save_restore_list_cntl,
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_8) {
  VAR_12->ucode_size = VAR_11->gfx.rlc.save_restore_list_gpm_size_bytes;
  FUNC_1(VAR_12->kaddr, VAR_11->gfx.rlc.save_restore_list_gpm,
         VAR_12->ucode_size);
 } else if (VAR_12->ucode_id == VAR_9) {
  VAR_12->ucode_size = VAR_11->gfx.rlc.save_restore_list_srm_size_bytes;
  FUNC_1(VAR_12->kaddr, VAR_11->gfx.rlc.save_restore_list_srm,
         VAR_12->ucode_size);
 }

 return 0;
}
