
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int smu_lock; TYPE_1__* hwmgr_func; int pm_en; } ;
struct TYPE_2__ {int (* enable_mgpu_fan_boost ) (struct pp_hwmgr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct pp_hwmgr *VAR_2 = VAR_1;

 if (!VAR_2)
  return -VAR_0;

 if (!VAR_2->pm_en ||
      VAR_2->hwmgr_func->enable_mgpu_fan_boost == ((void*)0))
  return 0;

 FUNC_0(&VAR_2->smu_lock);
 VAR_2->hwmgr_func->enable_mgpu_fan_boost(VAR_2);
 FUNC_1(&VAR_2->smu_lock);

 return 0;
}
