
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sd; scalar_t__ hd; int uvd_active; int state; } ;
struct TYPE_8__ {int mutex; TYPE_3__ dpm; } ;
struct radeon_device {TYPE_4__ pm; TYPE_2__* asic; } ;
typedef enum radeon_pm_state_type { ____Placeholder_radeon_pm_state_type } radeon_pm_state_type ;
struct TYPE_5__ {scalar_t__ powergate_uvd; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_4, bool VAR_5)
{
 enum radeon_pm_state_type VAR_6;

 if (VAR_4->asic->dpm.powergate_uvd) {
  FUNC_0(&VAR_4->pm.mutex);


  VAR_5 |= VAR_4->pm.dpm.sd > 0;
  VAR_5 |= VAR_4->pm.dpm.hd > 0;

  FUNC_2(VAR_4, !VAR_5);
  FUNC_1(&VAR_4->pm.mutex);
 } else {
  if (VAR_5) {
   FUNC_0(&VAR_4->pm.mutex);
   VAR_4->pm.dpm.uvd_active = 1;
    VAR_6 = VAR_0;
   VAR_4->pm.dpm.state = VAR_6;
   FUNC_1(&VAR_4->pm.mutex);
  } else {
   FUNC_0(&VAR_4->pm.mutex);
   VAR_4->pm.dpm.uvd_active = 0;
   FUNC_1(&VAR_4->pm.mutex);
  }

  FUNC_3(VAR_4);
 }
}
