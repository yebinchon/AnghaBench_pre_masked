
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

bool FUNC_0(struct amdgpu_device *VAR_3)
{
 if (VAR_3->asic_type == VAR_1)
  return (VAR_2 == 2) ? 1 : 0;
 else if (VAR_3->asic_type >= VAR_0)
  return 1;
 else
  return 0;
}
