
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int soft_pp_table_size; int smu_lock; scalar_t__ soft_pp_table; int pm_en; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, char **VAR_2)
{
 struct pp_hwmgr *VAR_3 = VAR_1;
 int VAR_4 = 0;

 if (!VAR_3 || !VAR_3->pm_en ||!VAR_3->soft_pp_table)
  return -VAR_0;

 FUNC_0(&VAR_3->smu_lock);
 *VAR_2 = (char *)VAR_3->soft_pp_table;
 VAR_4 = VAR_3->soft_pp_table_size;
 FUNC_1(&VAR_3->smu_lock);
 return VAR_4;
}
