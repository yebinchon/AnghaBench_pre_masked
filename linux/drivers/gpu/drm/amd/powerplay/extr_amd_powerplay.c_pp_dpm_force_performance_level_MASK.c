
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dpm_level; int request_dpm_level; int smu_lock; int pm_en; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pp_hwmgr*,int*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2,
     enum amd_dpm_forced_level VAR_3)
{
 struct pp_hwmgr *VAR_4 = VAR_2;

 if (!VAR_4 || !VAR_4->pm_en)
  return -VAR_1;

 if (VAR_3 == VAR_4->dpm_level)
  return 0;

 FUNC_1(&VAR_4->smu_lock);
 FUNC_3(VAR_4, &VAR_3);
 VAR_4->request_dpm_level = VAR_3;
 FUNC_0(VAR_4, VAR_0, ((void*)0));
 FUNC_2(&VAR_4->smu_lock);

 return 0;
}
