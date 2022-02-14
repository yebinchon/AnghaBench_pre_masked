
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sumo_ps {int num_levels; } ;
struct radeon_ps {int dummy; } ;
struct sumo_power_info {scalar_t__ enable_boost; struct radeon_ps current_rps; } ;
struct TYPE_3__ {int forced_level; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,struct radeon_ps*,int) ;
 struct sumo_power_info* FUNC_1 (struct radeon_device*) ;
 struct sumo_ps* FUNC_2 (struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*,int,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_2,
         enum radeon_dpm_forced_level VAR_3)
{
 struct sumo_power_info *VAR_4 = FUNC_1(VAR_2);
 struct radeon_ps *VAR_5 = &VAR_4->current_rps;
 struct sumo_ps *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_6->num_levels <= 1)
  return 0;

 if (VAR_3 == VAR_0) {
  if (VAR_4->enable_boost)
   FUNC_0(VAR_2, VAR_5, 0);
  FUNC_3(VAR_2, VAR_6->num_levels - 1, 1);
  FUNC_4(VAR_2, VAR_6->num_levels - 1);
  FUNC_6(VAR_2);
  for (VAR_7 = 0; VAR_7 < VAR_6->num_levels - 1; VAR_7++) {
   FUNC_3(VAR_2, VAR_7, 0);
  }
  FUNC_5(VAR_2, 0);
  FUNC_6(VAR_2);
  FUNC_5(VAR_2, 0);
 } else if (VAR_3 == VAR_1) {
  if (VAR_4->enable_boost)
   FUNC_0(VAR_2, VAR_5, 0);
  FUNC_3(VAR_2, 0, 1);
  FUNC_4(VAR_2, 0);
  FUNC_6(VAR_2);
  for (VAR_7 = 1; VAR_7 < VAR_6->num_levels; VAR_7++) {
   FUNC_3(VAR_2, VAR_7, 0);
  }
  FUNC_5(VAR_2, 0);
  FUNC_6(VAR_2);
  FUNC_5(VAR_2, 0);
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_6->num_levels; VAR_7++) {
   FUNC_3(VAR_2, VAR_7, 1);
  }
  if (VAR_4->enable_boost)
   FUNC_0(VAR_2, VAR_5, 1);
 }

 VAR_2->pm.dpm.forced_level = VAR_3;

 return 0;
}
