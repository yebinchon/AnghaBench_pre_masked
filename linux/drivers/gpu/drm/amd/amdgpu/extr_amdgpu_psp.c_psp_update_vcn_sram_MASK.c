
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdgpu_firmware_info {int ucode_size; int mc_addr; int ucode_id; int member_0; } ;
struct amdgpu_device {int psp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct amdgpu_firmware_info*) ;

int FUNC_1(struct amdgpu_device *VAR_2, int VAR_3,
   uint64_t VAR_4, int VAR_5)
{
 struct amdgpu_firmware_info VAR_6 = {0};

 VAR_6.ucode_id = VAR_3 ? VAR_1 :
  VAR_0;
 VAR_6.mc_addr = VAR_4;
 VAR_6.ucode_size = VAR_5;

 return FUNC_0(&VAR_2->psp, &VAR_6);
}
