
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ bios_scratch_reg_offset; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(struct amdgpu_device *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->bios_scratch_reg_offset + 7);

 if (VAR_2 & VAR_0)
  return 0;
 else
  return 1;
}
