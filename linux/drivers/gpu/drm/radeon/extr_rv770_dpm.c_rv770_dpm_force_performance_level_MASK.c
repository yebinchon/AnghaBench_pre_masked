
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int forced_level; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;
typedef scalar_t__ PPSMC_Msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct radeon_device*,scalar_t__) ;

int FUNC_1(struct radeon_device *VAR_8,
          enum radeon_dpm_forced_level VAR_9)
{
 PPSMC_Msg VAR_10;

 if (VAR_9 == VAR_6) {
  if (FUNC_0(VAR_8, VAR_4) != VAR_5)
   return -VAR_0;
  VAR_10 = VAR_1;
 } else if (VAR_9 == VAR_7) {
  if (FUNC_0(VAR_8, VAR_2) != VAR_5)
   return -VAR_0;
  VAR_10 = (PPSMC_Msg)(VAR_3);
 } else {
  if (FUNC_0(VAR_8, VAR_2) != VAR_5)
   return -VAR_0;
  VAR_10 = (PPSMC_Msg)(VAR_4);
 }

 if (FUNC_0(VAR_8, VAR_10) != VAR_5)
  return -VAR_0;

 VAR_8->pm.dpm.forced_level = VAR_9;

 return 0;
}
