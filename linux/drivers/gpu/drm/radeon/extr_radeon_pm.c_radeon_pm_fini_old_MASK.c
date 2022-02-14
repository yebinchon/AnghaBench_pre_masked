
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_power_states; scalar_t__ pm_method; int power_state; int dynpm_idle_work; int mutex; int dynpm_planned_action; int dynpm_state; int profile; } ;
struct radeon_device {TYPE_1__ pm; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_7)
{
 if (VAR_7->pm.num_power_states > 1) {
  FUNC_3(&VAR_7->pm.mutex);
  if (VAR_7->pm.pm_method == VAR_3) {
   VAR_7->pm.profile = VAR_4;
   FUNC_7(VAR_7);
   FUNC_6(VAR_7);
  } else if (VAR_7->pm.pm_method == VAR_2) {

   VAR_7->pm.dynpm_state = VAR_1;
   VAR_7->pm.dynpm_planned_action = VAR_0;
   FUNC_6(VAR_7);
  }
  FUNC_4(&VAR_7->pm.mutex);

  FUNC_0(&VAR_7->pm.dynpm_idle_work);

  FUNC_1(VAR_7->dev, &VAR_6);
  FUNC_1(VAR_7->dev, &VAR_5);
 }

 FUNC_5(VAR_7);
 FUNC_2(VAR_7->pm.power_state);
}
