
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trinity_ps {int num_levels; } ;
struct radeon_ps {int dummy; } ;
struct trinity_power_info {struct radeon_ps current_rps; } ;
struct TYPE_3__ {int forced_level; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;
 struct trinity_ps* FUNC_2 (struct radeon_ps*) ;

int FUNC_3(struct radeon_device *VAR_3,
     enum radeon_dpm_forced_level VAR_4)
{
 struct trinity_power_info *VAR_5 = FUNC_1(VAR_3);
 struct radeon_ps *VAR_6 = &VAR_5->current_rps;
 struct trinity_ps *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;

 if (VAR_7->num_levels <= 1)
  return 0;

 if (VAR_4 == VAR_1) {

  return -VAR_0;
 } else if (VAR_4 == VAR_2) {
  VAR_9 = FUNC_0(VAR_3, VAR_7->num_levels - 1);
  if (VAR_9)
   return VAR_9;
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_7->num_levels; VAR_8++) {
   VAR_9 = FUNC_0(VAR_3, 0);
   if (VAR_9)
    return VAR_9;
  }
 }

 VAR_3->pm.dpm.forced_level = VAR_4;

 return 0;
}
