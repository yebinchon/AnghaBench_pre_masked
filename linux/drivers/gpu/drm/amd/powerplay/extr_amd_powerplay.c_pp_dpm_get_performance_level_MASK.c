
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dpm_level; int smu_lock; int pm_en; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum amd_dpm_forced_level FUNC_2(
        void *VAR_1)
{
 struct pp_hwmgr *VAR_2 = VAR_1;
 enum amd_dpm_forced_level VAR_3;

 if (!VAR_2 || !VAR_2->pm_en)
  return -VAR_0;

 FUNC_0(&VAR_2->smu_lock);
 VAR_3 = VAR_2->dpm_level;
 FUNC_1(&VAR_2->smu_lock);
 return VAR_3;
}
