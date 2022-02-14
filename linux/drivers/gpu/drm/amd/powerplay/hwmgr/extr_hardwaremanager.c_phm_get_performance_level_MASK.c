
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct pp_hw_power_state {int dummy; } ;
struct TYPE_2__ {int (* get_performance_level ) (struct pp_hwmgr*,struct pp_hw_power_state const*,int ,int ,int *) ;} ;
typedef int PHM_PerformanceLevelDesignation ;
typedef int PHM_PerformanceLevel ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_hw_power_state const*,int ,int ,int *) ;

int FUNC_2(struct pp_hwmgr *VAR_1, const struct pp_hw_power_state *VAR_2,
    PHM_PerformanceLevelDesignation VAR_3, uint32_t VAR_4,
    PHM_PerformanceLevel *VAR_5)
{
 FUNC_0(VAR_1);
 if (VAR_1->hwmgr_func->get_performance_level == ((void*)0))
  return -VAR_0;

 return VAR_1->hwmgr_func->get_performance_level(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);


}
