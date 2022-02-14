
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; scalar_t__ dpm_enabled; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (VAR_1->pm.dpm_enabled) {
  FUNC_1(&VAR_1->pm.mutex);
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->pm.mutex);
 }

 return 0;
}
