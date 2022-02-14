
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ thermal_sclk_dpm_enabled; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_4,
         bool VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_0(VAR_4);
 PPSMC_Result VAR_7 = VAR_3;

 if (VAR_6->thermal_sclk_dpm_enabled) {
  if (VAR_5)
   VAR_7 = FUNC_1(VAR_4, VAR_2);
  else
   VAR_7 = FUNC_1(VAR_4, VAR_1);
 }

 if (VAR_7 == VAR_3)
  return 0;
 else
  return -VAR_0;
}
