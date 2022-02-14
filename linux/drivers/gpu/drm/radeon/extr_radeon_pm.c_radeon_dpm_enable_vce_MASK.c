
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vce_active; int vce_level; } ;
struct TYPE_3__ {int mutex; TYPE_2__ dpm; } ;
struct radeon_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*) ;

void FUNC_3(struct radeon_device *VAR_1, bool VAR_2)
{
 if (VAR_2) {
  FUNC_0(&VAR_1->pm.mutex);
  VAR_1->pm.dpm.vce_active = 1;

  VAR_1->pm.dpm.vce_level = VAR_0;
  FUNC_1(&VAR_1->pm.mutex);
 } else {
  FUNC_0(&VAR_1->pm.mutex);
  VAR_1->pm.dpm.vce_active = 0;
  FUNC_1(&VAR_1->pm.mutex);
 }

 FUNC_2(VAR_1);
}
