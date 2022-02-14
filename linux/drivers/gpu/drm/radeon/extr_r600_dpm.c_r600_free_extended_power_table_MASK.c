
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int entries; } ;
struct TYPE_14__ {int entries; } ;
struct TYPE_13__ {int entries; } ;
struct TYPE_24__ {int entries; } ;
struct TYPE_23__ {int entries; } ;
struct TYPE_22__ {int entries; } ;
struct TYPE_21__ {int entries; } ;
struct TYPE_20__ {int entries; } ;
struct TYPE_19__ {int entries; } ;
struct TYPE_18__ {int entries; } ;
struct radeon_dpm_dynamic_state {TYPE_12__ acp_clock_voltage_dependency_table; TYPE_11__ samu_clock_voltage_dependency_table; TYPE_10__ uvd_clock_voltage_dependency_table; TYPE_9__ vce_clock_voltage_dependency_table; int cac_tdp_table; int ppm_table; TYPE_8__ phase_shedding_limits_table; TYPE_7__ cac_leakage_table; TYPE_6__ mvdd_dependency_on_mclk; TYPE_5__ vddc_dependency_on_mclk; TYPE_4__ vddci_dependency_on_mclk; TYPE_3__ vddc_dependency_on_sclk; } ;
struct TYPE_16__ {struct radeon_dpm_dynamic_state dyn_state; } ;
struct TYPE_17__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct radeon_device *VAR_0)
{
 struct radeon_dpm_dynamic_state *VAR_1 = &VAR_0->pm.dpm.dyn_state;

 FUNC_0(VAR_1->vddc_dependency_on_sclk.entries);
 FUNC_0(VAR_1->vddci_dependency_on_mclk.entries);
 FUNC_0(VAR_1->vddc_dependency_on_mclk.entries);
 FUNC_0(VAR_1->mvdd_dependency_on_mclk.entries);
 FUNC_0(VAR_1->cac_leakage_table.entries);
 FUNC_0(VAR_1->phase_shedding_limits_table.entries);
 FUNC_0(VAR_1->ppm_table);
 FUNC_0(VAR_1->cac_tdp_table);
 FUNC_0(VAR_1->vce_clock_voltage_dependency_table.entries);
 FUNC_0(VAR_1->uvd_clock_voltage_dependency_table.entries);
 FUNC_0(VAR_1->samu_clock_voltage_dependency_table.entries);
 FUNC_0(VAR_1->acp_clock_voltage_dependency_table.entries);
}
