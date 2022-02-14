
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpm_enabled; int mutex; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 if (VAR_2->pm.dpm_enabled) {

  FUNC_1(&VAR_2->pm.mutex);
  FUNC_4(VAR_2);
  VAR_1 = FUNC_3(VAR_2);
  if (VAR_1)
   VAR_2->pm.dpm_enabled = 0;
  else
   VAR_2->pm.dpm_enabled = 1;
  FUNC_2(&VAR_2->pm.mutex);
  if (VAR_2->pm.dpm_enabled)
   FUNC_0(VAR_2);
 }
 return 0;
}
