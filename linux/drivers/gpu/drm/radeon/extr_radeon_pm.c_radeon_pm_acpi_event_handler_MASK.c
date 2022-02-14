
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ac_power; } ;
struct TYPE_8__ {scalar_t__ pm_method; scalar_t__ profile; int mutex; TYPE_3__ dpm; scalar_t__ dpm_enabled; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ pm; TYPE_2__* asic; } ;
struct TYPE_5__ {scalar_t__ enable_bapm; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

void FUNC_6(struct radeon_device *VAR_4)
{
 if ((VAR_4->pm.pm_method == VAR_1) && VAR_4->pm.dpm_enabled) {
  FUNC_0(&VAR_4->pm.mutex);
  if (FUNC_2() > 0)
   VAR_4->pm.dpm.ac_power = 1;
  else
   VAR_4->pm.dpm.ac_power = 0;
  if (VAR_4->family == VAR_0) {
   if (VAR_4->asic->dpm.enable_bapm)
    FUNC_3(VAR_4, VAR_4->pm.dpm.ac_power);
  }
  FUNC_1(&VAR_4->pm.mutex);
 } else if (VAR_4->pm.pm_method == VAR_2) {
  if (VAR_4->pm.profile == VAR_3) {
   FUNC_0(&VAR_4->pm.mutex);
   FUNC_5(VAR_4);
   FUNC_4(VAR_4);
   FUNC_1(&VAR_4->pm.mutex);
  }
 }
}
