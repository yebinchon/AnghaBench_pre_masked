
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;

bool FUNC_2(struct amdgpu_device *VAR_0)
{
 if (FUNC_1(VAR_0))
  return 0;

 return FUNC_0(VAR_0->asic_type);
}
