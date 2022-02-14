
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpm_enabled; int mutex; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (!VAR_0)
  return 0;

 FUNC_3(&VAR_3->pm.mutex);
 FUNC_2(VAR_3);
 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2)
  VAR_3->pm.dpm_enabled = 0;
 else
  VAR_3->pm.dpm_enabled = 1;
 FUNC_4(&VAR_3->pm.mutex);
 FUNC_0(VAR_3);
 return VAR_2;
}
