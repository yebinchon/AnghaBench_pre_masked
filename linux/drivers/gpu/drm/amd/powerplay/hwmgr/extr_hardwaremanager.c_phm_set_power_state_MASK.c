
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct pp_hw_power_state {int dummy; } ;
struct phm_set_power_state_input {struct pp_hw_power_state const* pnew_state; struct pp_hw_power_state const* pcurrent_state; } ;
struct TYPE_2__ {int (* power_state_set ) (struct pp_hwmgr*,struct phm_set_power_state_input*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,struct phm_set_power_state_input*) ;

int FUNC_2(struct pp_hwmgr *VAR_0,
      const struct pp_hw_power_state *VAR_1,
      const struct pp_hw_power_state *VAR_2)
{
 struct phm_set_power_state_input VAR_3;

 FUNC_0(VAR_0);

 VAR_3.pcurrent_state = VAR_1;
 VAR_3.pnew_state = VAR_2;

 if (((void*)0) != VAR_0->hwmgr_func->power_state_set)
  return VAR_0->hwmgr_func->power_state_set(VAR_0, &VAR_3);

 return 0;
}
