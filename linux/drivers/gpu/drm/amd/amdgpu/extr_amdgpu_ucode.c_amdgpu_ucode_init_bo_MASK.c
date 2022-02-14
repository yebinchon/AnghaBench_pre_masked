
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct gfx_firmware_header_v1_0 {int jt_size; } ;
struct amdgpu_firmware_info {int ucode_size; TYPE_1__* fw; } ;
struct TYPE_4__ {scalar_t__ load_type; int max_ucodes; scalar_t__ fw_buf_ptr; scalar_t__ fw_buf_mc; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {TYPE_2__ firmware; scalar_t__ in_suspend; scalar_t__ in_gpu_reset; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_firmware_info*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct amdgpu_firmware_info*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_4)
{
 uint64_t VAR_5 = 0;
 int VAR_6;
 struct amdgpu_firmware_info *VAR_7 = ((void*)0);


 if (!FUNC_1(VAR_4) && (VAR_4->in_gpu_reset || VAR_4->in_suspend))
  return 0;




 if (VAR_4->firmware.load_type != VAR_0) {
  if (FUNC_1(VAR_4))
   VAR_4->firmware.max_ucodes = VAR_2 - 3;
  else
   VAR_4->firmware.max_ucodes = VAR_2 - 4;
 } else {
  VAR_4->firmware.max_ucodes = VAR_2;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->firmware.max_ucodes; VAR_6++) {
  VAR_7 = &VAR_4->firmware.ucode[VAR_6];
  if (VAR_7->fw) {
   FUNC_2(VAR_4, VAR_7, VAR_4->firmware.fw_buf_mc + VAR_5,
          VAR_4->firmware.fw_buf_ptr + VAR_5);
   if (VAR_6 == VAR_1 &&
       VAR_4->firmware.load_type != VAR_0) {
    const struct gfx_firmware_header_v1_0 *VAR_8;
    VAR_8 = (const struct gfx_firmware_header_v1_0 *)VAR_7->fw->data;
    FUNC_3(VAR_7, VAR_4->firmware.fw_buf_mc + VAR_5,
          VAR_4->firmware.fw_buf_ptr + VAR_5);
    VAR_5 += FUNC_0(FUNC_4(VAR_8->jt_size) << 2, VAR_3);
   }
   VAR_5 += FUNC_0(VAR_7->ucode_size, VAR_3);
  }
 }
 return 0;
}
