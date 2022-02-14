
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int smu_lock; int pm_en; } ;
struct amd_pp_display_configuration {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*,struct amd_pp_display_configuration const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1,
 const struct amd_pp_display_configuration *VAR_2)
{
 struct pp_hwmgr *VAR_3 = VAR_1;

 if (!VAR_3 || !VAR_3->pm_en)
  return -VAR_0;

 FUNC_0(&VAR_3->smu_lock);
 FUNC_2(VAR_3, VAR_2);
 FUNC_1(&VAR_3->smu_lock);
 return 0;
}
