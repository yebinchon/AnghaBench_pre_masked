
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct amdgpu_device *VAR_2)
{
 if (VAR_1 != 1)
  return 0;

 if (VAR_2->asic_type == VAR_0)
  return 1;

 return 0;
}
