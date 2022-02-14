
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct profile_mode_setting {long bupdate_sclk; long bupdate_mclk; long sclk_up_hyst; long sclk_down_hyst; long sclk_activity; long mclk_up_hyst; long mclk_down_hyst; long mclk_activity; } ;
struct smu7_hwmgr {struct profile_mode_setting current_profile_setting; } ;
struct pp_hwmgr {int power_profile_mode; scalar_t__ backend; } ;
typedef enum PP_SMC_POWER_PROFILE { ____Placeholder_PP_SMC_POWER_PROFILE } PP_SMC_POWER_PROFILE ;


 int VAR_0 ;






 int FUNC_0 (struct profile_mode_setting*,struct profile_mode_setting*,int) ;
 int FUNC_1 (struct pp_hwmgr*,int) ;
 struct profile_mode_setting* VAR_1 ;
 int FUNC_2 (struct pp_hwmgr*,struct profile_mode_setting*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2, long *VAR_3, uint32_t VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_2->backend);
 struct profile_mode_setting VAR_6;
 enum PP_SMC_POWER_PROFILE VAR_7;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_7 = VAR_3[VAR_4];
 switch (VAR_7) {
 case 132:
  if (VAR_4 < 8 && VAR_4 != 0)
   return -VAR_0;




  VAR_6 = VAR_1[132];
  if (VAR_4 == 0) {
   if (VAR_6.bupdate_sclk == 0 && VAR_6.bupdate_mclk == 0)
    return -VAR_0;
  } else {
   VAR_6.bupdate_sclk = VAR_3[0];
   VAR_6.sclk_up_hyst = VAR_3[1];
   VAR_6.sclk_down_hyst = VAR_3[2];
   VAR_6.sclk_activity = VAR_3[3];
   VAR_6.bupdate_mclk = VAR_3[4];
   VAR_6.mclk_up_hyst = VAR_3[5];
   VAR_6.mclk_down_hyst = VAR_3[6];
   VAR_6.mclk_activity = VAR_3[7];
   VAR_1[132] = VAR_6;
  }
  if (!FUNC_2(VAR_2, &VAR_6)) {
   FUNC_0(&VAR_5->current_profile_setting, &VAR_6, sizeof(struct profile_mode_setting));
   VAR_2->power_profile_mode = VAR_7;
  }
  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 133:
  if (VAR_7 == VAR_2->power_profile_mode)
   return 0;

  FUNC_0(&VAR_6, &VAR_1[VAR_7], sizeof(struct profile_mode_setting));
  if (!FUNC_2(VAR_2, &VAR_6)) {
   if (VAR_6.bupdate_sclk) {
    VAR_5->current_profile_setting.bupdate_sclk = VAR_6.bupdate_sclk;
    VAR_5->current_profile_setting.sclk_up_hyst = VAR_6.sclk_up_hyst;
    VAR_5->current_profile_setting.sclk_down_hyst = VAR_6.sclk_down_hyst;
    VAR_5->current_profile_setting.sclk_activity = VAR_6.sclk_activity;
   }
   if (VAR_6.bupdate_mclk) {
    VAR_5->current_profile_setting.bupdate_mclk = VAR_6.bupdate_mclk;
    VAR_5->current_profile_setting.mclk_up_hyst = VAR_6.mclk_up_hyst;
    VAR_5->current_profile_setting.mclk_down_hyst = VAR_6.mclk_down_hyst;
    VAR_5->current_profile_setting.mclk_activity = VAR_6.mclk_activity;
   }
   FUNC_1(VAR_2, VAR_7);
   VAR_2->power_profile_mode = VAR_7;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
