
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cac_leakage_table; int max_clock_voltage_on_dc; int max_clock_voltage_on_ac; int vddc_phase_shed_limits_table; int acp_clock_voltage_dependency_table; int samu_clock_voltage_dependency_table; int uvd_clock_voltage_dependency_table; int vce_clock_voltage_dependency_table; int vddci_dependency_on_mclk; int vddc_dep_on_dal_pwrl; int vddc_dependency_on_mclk; int vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int *) ;
 int FUNC_3 (struct pp_hwmgr*,int ) ;
 int FUNC_4 (struct pp_hwmgr*,int ) ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;
 int FUNC_6 (struct pp_hwmgr*,int ) ;
 int FUNC_7 (struct pp_hwmgr*,int ) ;
 int FUNC_8 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_9(struct pp_hwmgr *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_6(VAR_1, VAR_1->dyn_state.vddc_dependency_on_sclk);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_6(VAR_1, VAR_1->dyn_state.vddc_dependency_on_mclk);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_6(VAR_1, VAR_1->dyn_state.vddc_dep_on_dal_pwrl);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_8(VAR_1, VAR_1->dyn_state.vddci_dependency_on_mclk);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_5(VAR_1, VAR_1->dyn_state.vce_clock_voltage_dependency_table);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_4(VAR_1, VAR_1->dyn_state.uvd_clock_voltage_dependency_table);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_3(VAR_1, VAR_1->dyn_state.samu_clock_voltage_dependency_table);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1, VAR_1->dyn_state.acp_clock_voltage_dependency_table);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_7(VAR_1, VAR_1->dyn_state.vddc_phase_shed_limits_table);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_2(VAR_1, &VAR_1->dyn_state.max_clock_voltage_on_ac);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_2(VAR_1, &VAR_1->dyn_state.max_clock_voltage_on_dc);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1, VAR_1->dyn_state.cac_leakage_table);
 if (VAR_2)
  return -VAR_0;

 return 0;
}
