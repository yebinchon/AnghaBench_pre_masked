
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_power_state {int dummy; } ;
struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct TYPE_2__ {int (* apply_state_adjust_rules ) (struct pp_hwmgr*,struct pp_power_state*,struct pp_power_state const*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_power_state*,struct pp_power_state const*) ;

int FUNC_2(struct pp_hwmgr *VAR_0,
       struct pp_power_state *VAR_1,
        const struct pp_power_state *VAR_2)
{
 FUNC_0(VAR_0);

 if (VAR_0->hwmgr_func->apply_state_adjust_rules != ((void*)0))
  return VAR_0->hwmgr_func->apply_state_adjust_rules(
         VAR_0,
         VAR_1,
         VAR_2);
 return 0;
}
