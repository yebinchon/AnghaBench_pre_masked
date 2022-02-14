
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int smu_lock; int pm_en; } ;
struct pp_clock_levels_with_voltage {int dummy; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*,int,struct pp_clock_levels_with_voltage*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1,
  enum amd_pp_clock_type VAR_2,
  struct pp_clock_levels_with_voltage *VAR_3)
{
 struct pp_hwmgr *VAR_4 = VAR_1;
 int VAR_5 = 0;

 if (!VAR_4 || !VAR_4->pm_en ||!VAR_3)
  return -VAR_0;

 FUNC_0(&VAR_4->smu_lock);

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);

 FUNC_1(&VAR_4->smu_lock);
 return VAR_5;
}
