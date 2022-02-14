
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_dpm_context {int dpm_level; } ;
struct smu_context {long* workload_setting; long power_profile_mode; int workload_mask; int pm_enabled; struct smu_dpm_context smu_dpm; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*,int) ;
 int FUNC_4 (struct smu_context*,int) ;
 int FUNC_5 (struct smu_context*) ;
 int FUNC_6 (struct smu_context*) ;
 int FUNC_7 (struct smu_context*,long*,int ) ;

int FUNC_8(struct smu_context *VAR_3,
       enum amd_dpm_forced_level VAR_4,
       bool VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 long VAR_8;
 struct smu_dpm_context *VAR_9 = &(VAR_3->smu_dpm);

 if (!VAR_3->pm_enabled)
  return -VAR_1;

 if (!VAR_5) {
  VAR_6 = FUNC_5(VAR_3);
  if (VAR_6) {
   FUNC_1("Failed to change display config!");
   return VAR_6;
  }
 }

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6) {
  FUNC_1("Failed to apply clocks adjust rules!");
  return VAR_6;
 }

 if (!VAR_5) {
  VAR_6 = FUNC_6(VAR_3);
  if (VAR_6) {
   FUNC_1("Failed to notify smc display config!");
   return VAR_6;
  }
 }

 if (VAR_9->dpm_level != VAR_4) {
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  if (VAR_6) {
   VAR_6 = FUNC_4(VAR_3, VAR_4);
   if (VAR_6) {
    FUNC_1("Failed to set performance level!");
    return VAR_6;
   }
  }


  VAR_9->dpm_level = VAR_4;
 }

 if (VAR_9->dpm_level != VAR_0) {
  VAR_7 = FUNC_0(VAR_3->workload_mask);
  VAR_7 = VAR_7 > 0 && VAR_7 <= VAR_2 ? VAR_7 - 1 : 0;
  VAR_8 = VAR_3->workload_setting[VAR_7];

  if (VAR_3->power_profile_mode != VAR_8)
   FUNC_7(VAR_3, &VAR_8, 0);
 }

 return VAR_6;
}
