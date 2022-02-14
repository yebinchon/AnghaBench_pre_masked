
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boot_ps; int requested_ps; int current_ps; } ;
struct TYPE_4__ {int mutex; TYPE_1__ dpm; scalar_t__ dpm_enabled; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (VAR_1->pm.dpm_enabled) {
  FUNC_0(&VAR_1->pm.mutex);

  FUNC_2(VAR_1);

  VAR_1->pm.dpm.current_ps = VAR_1->pm.dpm.requested_ps = VAR_1->pm.dpm.boot_ps;
  FUNC_1(&VAR_1->pm.mutex);
 }
 return 0;
}
