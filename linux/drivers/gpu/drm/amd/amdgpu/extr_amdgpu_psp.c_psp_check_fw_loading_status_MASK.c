
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_firmware_info {int ucode_size; int fw; } ;
struct TYPE_2__ {struct amdgpu_firmware_info* ucode; int fw_size; } ;
struct amdgpu_device {int psp; TYPE_1__ firmware; } ;
typedef enum AMDGPU_UCODE_ID { ____Placeholder_AMDGPU_UCODE_ID } AMDGPU_UCODE_ID ;


 int FUNC_0 (int *,struct amdgpu_firmware_info*,int) ;

__attribute__((used)) static bool FUNC_1(struct amdgpu_device *VAR_0,
     enum AMDGPU_UCODE_ID VAR_1)
{
 struct amdgpu_firmware_info *VAR_2 = ((void*)0);

 if (!VAR_0->firmware.fw_size)
  return 0;

 VAR_2 = &VAR_0->firmware.ucode[VAR_1];
 if (!VAR_2->fw || !VAR_2->ucode_size)
  return 0;

 return FUNC_0(&VAR_0->psp, VAR_2, VAR_1);
}
