
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vdd_gfx_dependency_on_sclk; int * ppm_parameter_table; int * cac_dtp_table; int * acp_clock_voltage_dependency_table; int * samu_clock_voltage_dependency_table; int * uvd_clock_voltage_dependency_table; int * vce_clock_voltage_dependency_table; int * vddc_phase_shed_limits_table; int * cac_leakage_table; int * valid_sclk_values; int * valid_mclk_values; int * mvdd_dependency_on_mclk; int * vddc_dependency_on_mclk; int * vddci_dependency_on_mclk; int * vddc_dependency_on_sclk; } ;
struct pp_hwmgr {scalar_t__ chip_id; TYPE_1__ dyn_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 if (VAR_1->chip_id == VAR_0)
  return 0;

 FUNC_0(VAR_1->dyn_state.vddc_dependency_on_sclk);
 VAR_1->dyn_state.vddc_dependency_on_sclk = ((void*)0);

 FUNC_0(VAR_1->dyn_state.vddci_dependency_on_mclk);
 VAR_1->dyn_state.vddci_dependency_on_mclk = ((void*)0);

 FUNC_0(VAR_1->dyn_state.vddc_dependency_on_mclk);
 VAR_1->dyn_state.vddc_dependency_on_mclk = ((void*)0);

 FUNC_0(VAR_1->dyn_state.mvdd_dependency_on_mclk);
 VAR_1->dyn_state.mvdd_dependency_on_mclk = ((void*)0);

 FUNC_0(VAR_1->dyn_state.valid_mclk_values);
 VAR_1->dyn_state.valid_mclk_values = ((void*)0);

 FUNC_0(VAR_1->dyn_state.valid_sclk_values);
 VAR_1->dyn_state.valid_sclk_values = ((void*)0);

 FUNC_0(VAR_1->dyn_state.cac_leakage_table);
 VAR_1->dyn_state.cac_leakage_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.vddc_phase_shed_limits_table);
 VAR_1->dyn_state.vddc_phase_shed_limits_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.vce_clock_voltage_dependency_table);
 VAR_1->dyn_state.vce_clock_voltage_dependency_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.uvd_clock_voltage_dependency_table);
 VAR_1->dyn_state.uvd_clock_voltage_dependency_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.samu_clock_voltage_dependency_table);
 VAR_1->dyn_state.samu_clock_voltage_dependency_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.acp_clock_voltage_dependency_table);
 VAR_1->dyn_state.acp_clock_voltage_dependency_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.cac_dtp_table);
 VAR_1->dyn_state.cac_dtp_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.ppm_parameter_table);
 VAR_1->dyn_state.ppm_parameter_table = ((void*)0);

 FUNC_0(VAR_1->dyn_state.vdd_gfx_dependency_on_sclk);
 VAR_1->dyn_state.vdd_gfx_dependency_on_sclk = ((void*)0);

 return 0;
}
