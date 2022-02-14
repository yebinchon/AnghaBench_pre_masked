
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srbm_soft_reset; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (!VAR_1->vce.srbm_soft_reset)
  return 0;

 FUNC_0(5);

 return FUNC_1(VAR_1);
}
