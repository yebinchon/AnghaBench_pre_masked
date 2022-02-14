
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {int need_update_smu7_dpm_table; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_7)
{
 struct ci_power_info *VAR_8 = FUNC_0(VAR_7);
 PPSMC_Result VAR_9;

 if (!VAR_8->need_update_smu7_dpm_table)
  return 0;

 if ((!VAR_8->sclk_dpm_key_disabled) &&
     (VAR_8->need_update_smu7_dpm_table & (VAR_1 | VAR_2))) {
  VAR_9 = FUNC_1(VAR_7, VAR_5);
  if (VAR_9 != VAR_6)
   return -VAR_3;
 }

 if ((!VAR_8->mclk_dpm_key_disabled) &&
     (VAR_8->need_update_smu7_dpm_table & VAR_0)) {
  VAR_9 = FUNC_1(VAR_7, VAR_4);
  if (VAR_9 != VAR_6)
   return -VAR_3;
 }

 VAR_8->need_update_smu7_dpm_table = 0;
 return 0;
}
