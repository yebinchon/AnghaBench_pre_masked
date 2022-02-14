
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_dpm_context {scalar_t__ dpm_level; } ;
struct smu_context {int workload_mask; int* workload_prority; long* workload_setting; int mutex; int pm_enabled; struct smu_dpm_context smu_dpm; } ;
typedef enum PP_SMC_POWER_PROFILE { ____Placeholder_PP_SMC_POWER_PROFILE } PP_SMC_POWER_PROFILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smu_context*,long*,int ) ;

int FUNC_4(struct smu_context *VAR_4,
        enum PP_SMC_POWER_PROFILE VAR_5,
        bool VAR_6)
{
 struct smu_dpm_context *VAR_7 = &(VAR_4->smu_dpm);
 long VAR_8;
 uint32_t VAR_9;

 if (!VAR_4->pm_enabled)
  return -VAR_1;

 if (!(VAR_5 < VAR_2))
  return -VAR_1;

 FUNC_1(&VAR_4->mutex);

 if (!VAR_6) {
  VAR_4->workload_mask &= ~(1 << VAR_4->workload_prority[VAR_5]);
  VAR_9 = FUNC_0(VAR_4->workload_mask);
  VAR_9 = VAR_9 > 0 && VAR_9 <= VAR_3 ? VAR_9 - 1 : 0;
  VAR_8 = VAR_4->workload_setting[VAR_9];
 } else {
  VAR_4->workload_mask |= (1 << VAR_4->workload_prority[VAR_5]);
  VAR_9 = FUNC_0(VAR_4->workload_mask);
  VAR_9 = VAR_9 <= VAR_3 ? VAR_9 - 1 : 0;
  VAR_8 = VAR_4->workload_setting[VAR_9];
 }

 if (VAR_7->dpm_level != VAR_0)
  FUNC_3(VAR_4, &VAR_8, 0);

 FUNC_2(&VAR_4->mutex);

 return 0;
}
