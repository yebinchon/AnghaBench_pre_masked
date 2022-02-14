
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vddci; int vddc; int mclk; int sclk; } ;
struct radeon_clock_voltage_dependency_table {int count; TYPE_5__* entries; } ;
struct TYPE_7__ {TYPE_1__ max_clock_voltage_on_ac; struct radeon_clock_voltage_dependency_table vddci_dependency_on_mclk; struct radeon_clock_voltage_dependency_table vddc_dependency_on_mclk; struct radeon_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_8__ {TYPE_2__ dyn_state; } ;
struct TYPE_9__ {TYPE_3__ dpm; } ;
struct radeon_device {TYPE_4__ pm; } ;
struct ci_power_info {int max_vddci_in_pp_table; int min_vddci_in_pp_table; int max_vddc_in_pp_table; int min_vddc_in_pp_table; } ;
struct TYPE_10__ {int v; int clk; } ;


 int VAR_0 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_0(VAR_1);
 struct radeon_clock_voltage_dependency_table *VAR_3 =
  &VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk;
 struct radeon_clock_voltage_dependency_table *VAR_4 =
  &VAR_1->pm.dpm.dyn_state.vddc_dependency_on_mclk;
 struct radeon_clock_voltage_dependency_table *VAR_5 =
  &VAR_1->pm.dpm.dyn_state.vddci_dependency_on_mclk;

 if (VAR_3 == ((void*)0))
  return -VAR_0;
 if (VAR_3->count < 1)
  return -VAR_0;
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 if (VAR_4->count < 1)
  return -VAR_0;
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 if (VAR_5->count < 1)
  return -VAR_0;

 VAR_2->min_vddc_in_pp_table = VAR_3->entries[0].v;
 VAR_2->max_vddc_in_pp_table =
  VAR_3->entries[VAR_3->count - 1].v;

 VAR_2->min_vddci_in_pp_table = VAR_5->entries[0].v;
 VAR_2->max_vddci_in_pp_table =
  VAR_5->entries[VAR_5->count - 1].v;

 VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_ac.sclk =
  VAR_3->entries[VAR_3->count - 1].clk;
 VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_ac.mclk =
  VAR_4->entries[VAR_3->count - 1].clk;
 VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddc =
  VAR_3->entries[VAR_3->count - 1].v;
 VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_ac.vddci =
  VAR_5->entries[VAR_5->count - 1].v;

 return 0;
}
