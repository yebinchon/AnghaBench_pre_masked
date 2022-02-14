
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int smu_lock; int pm_en; } ;
typedef enum amd_pp_task { ____Placeholder_amd_pp_task } amd_pp_task ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, enum amd_pp_task VAR_2,
  enum amd_pm_state_type *VAR_3)
{
 int VAR_4 = 0;
 struct pp_hwmgr *VAR_5 = VAR_1;

 if (!VAR_5 || !VAR_5->pm_en)
  return -VAR_0;

 FUNC_1(&VAR_5->smu_lock);
 VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_3);
 FUNC_2(&VAR_5->smu_lock);

 return VAR_4;
}
