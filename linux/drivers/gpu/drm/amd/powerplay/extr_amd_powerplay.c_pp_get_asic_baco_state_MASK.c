
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int smu_lock; TYPE_1__* hwmgr_func; int pm_en; } ;
typedef enum BACO_STATE { ____Placeholder_BACO_STATE } BACO_STATE ;
struct TYPE_2__ {int (* get_asic_baco_state ) (struct pp_hwmgr*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*,int*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int *VAR_2)
{
 struct pp_hwmgr *VAR_3 = VAR_1;

 if (!VAR_3)
  return -VAR_0;

 if (!VAR_3->pm_en || !VAR_3->hwmgr_func->get_asic_baco_state)
  return 0;

 FUNC_0(&VAR_3->smu_lock);
 VAR_3->hwmgr_func->get_asic_baco_state(VAR_3, (enum BACO_STATE *)VAR_2);
 FUNC_1(&VAR_3->smu_lock);

 return 0;
}
