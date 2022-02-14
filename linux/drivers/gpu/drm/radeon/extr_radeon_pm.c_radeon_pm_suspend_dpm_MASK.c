
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boot_ps; int requested_ps; int current_ps; } ;
struct TYPE_4__ {int dpm_enabled; int mutex; TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0)
{
 FUNC_0(&VAR_0->pm.mutex);

 FUNC_2(VAR_0);

 VAR_0->pm.dpm.current_ps = VAR_0->pm.dpm.requested_ps = VAR_0->pm.dpm.boot_ps;
 VAR_0->pm.dpm_enabled = 0;
 FUNC_1(&VAR_0->pm.mutex);
}
