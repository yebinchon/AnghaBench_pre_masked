
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int in_suspend; } ;




 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_0)
{
 switch (FUNC_3(VAR_0)) {
  case 129:
   if (!VAR_0->in_suspend)
    FUNC_0(VAR_0);
   return FUNC_1(VAR_0);
  case 128:
   return FUNC_4(VAR_0);
  default:
   if (!VAR_0->in_suspend)
    FUNC_0(VAR_0);
   return FUNC_2(VAR_0);
 }
}
