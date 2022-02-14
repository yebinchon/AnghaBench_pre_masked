
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu8_power_state {scalar_t__ action; } ;
struct TYPE_4__ {scalar_t__ nb_pstate_switch_disable; } ;
struct TYPE_3__ {scalar_t__ nb_dpm_enable; } ;
struct smu8_hwmgr {TYPE_2__ cc6_settings; TYPE_1__ sys_info; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;
struct phm_set_power_state_input {int pnew_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smu8_power_state* FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2, const void *VAR_3)
{
 bool VAR_4;
 bool VAR_5;
 struct smu8_hwmgr *VAR_6 = VAR_2->backend;
 const struct phm_set_power_state_input *VAR_7 = (struct phm_set_power_state_input *)VAR_3;
 const struct smu8_power_state *VAR_8 = FUNC_0(VAR_7->pnew_state);

 if (VAR_6->sys_info.nb_dpm_enable) {
  VAR_4 = VAR_6->cc6_settings.nb_pstate_switch_disable ? 1 : 0;
  VAR_5 = VAR_6->cc6_settings.nb_pstate_switch_disable ? 0 : 1;

  if (VAR_8->action == VAR_1)
   FUNC_1(VAR_2, 0, VAR_4);
  else if (VAR_8->action == VAR_0)
   FUNC_1(VAR_2, 1, VAR_4);
  else
   FUNC_1(VAR_2, VAR_5, VAR_4);
 }
 return 0;
}
