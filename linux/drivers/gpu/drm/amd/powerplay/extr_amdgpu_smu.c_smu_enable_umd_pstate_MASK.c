
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_dpm_context {int dpm_level; int saved_dpm_level; int enable_umd_pstate; int dpm_context; } ;
struct smu_context {int adev; int pm_enabled; struct smu_dpm_context smu_dpm; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_11,
        enum amd_dpm_forced_level *VAR_12)
{
 uint32_t VAR_13 = VAR_6 |
     VAR_4 |
     VAR_3 |
     VAR_5;

 struct smu_context *VAR_14 = (struct smu_context*)(VAR_11);
 struct smu_dpm_context *VAR_15 = &(VAR_14->smu_dpm);
 if (!VAR_14->pm_enabled || !VAR_15->dpm_context)
  return -VAR_10;

 if (!(VAR_15->dpm_level & VAR_13)) {

  if (*VAR_12 & VAR_13) {
   VAR_15->saved_dpm_level = VAR_15->dpm_level;
   VAR_15->enable_umd_pstate = 1;
   FUNC_0(VAR_14->adev,
              VAR_7,
              VAR_1);
   FUNC_1(VAR_14->adev,
              VAR_7,
              VAR_9);
  }
 } else {

  if (!(*VAR_12 & VAR_13)) {
   if (*VAR_12 == VAR_2)
    *VAR_12 = VAR_15->saved_dpm_level;
   VAR_15->enable_umd_pstate = 0;
   FUNC_0(VAR_14->adev,
              VAR_7,
              VAR_0);
   FUNC_1(VAR_14->adev,
              VAR_7,
              VAR_8);
  }
 }

 return 0;
}
