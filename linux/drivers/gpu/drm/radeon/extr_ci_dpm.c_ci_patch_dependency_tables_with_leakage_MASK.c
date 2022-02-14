
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cac_leakage_table; int max_clock_voltage_on_dc; int max_clock_voltage_on_ac; int phase_shedding_limits_table; int acp_clock_voltage_dependency_table; int samu_clock_voltage_dependency_table; int uvd_clock_voltage_dependency_table; int vce_clock_voltage_dependency_table; int vddci_dependency_on_mclk; int vddc_dependency_on_dispclk; int vddc_dependency_on_mclk; int vddc_dependency_on_sclk; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;


 int FUNC_0 (struct radeon_device*,int *) ;
 int FUNC_1 (struct radeon_device*,int *) ;
 int FUNC_2 (struct radeon_device*,int *) ;
 int FUNC_3 (struct radeon_device*,int *) ;
 int FUNC_4 (struct radeon_device*,int *) ;
 int FUNC_5 (struct radeon_device*,int *) ;
 int FUNC_6 (struct radeon_device*,int *) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_0)
{

 FUNC_1(VAR_0,
          &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk);
 FUNC_1(VAR_0,
          &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_mclk);
 FUNC_1(VAR_0,
          &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_dispclk);
 FUNC_2(VAR_0,
           &VAR_0->pm.dpm.dyn_state.vddci_dependency_on_mclk);
 FUNC_5(VAR_0,
              &VAR_0->pm.dpm.dyn_state.vce_clock_voltage_dependency_table);
 FUNC_4(VAR_0,
              &VAR_0->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table);
 FUNC_1(VAR_0,
          &VAR_0->pm.dpm.dyn_state.samu_clock_voltage_dependency_table);
 FUNC_1(VAR_0,
          &VAR_0->pm.dpm.dyn_state.acp_clock_voltage_dependency_table);
 FUNC_6(VAR_0,
              &VAR_0->pm.dpm.dyn_state.phase_shedding_limits_table);
 FUNC_3(VAR_0,
       &VAR_0->pm.dpm.dyn_state.max_clock_voltage_on_ac);
 FUNC_3(VAR_0,
       &VAR_0->pm.dpm.dyn_state.max_clock_voltage_on_dc);
 FUNC_0(VAR_0,
           &VAR_0->pm.dpm.dyn_state.cac_leakage_table);

}
