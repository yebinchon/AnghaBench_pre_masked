
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_clock_voltage_dependency_table {int count; TYPE_5__* entries; } ;
struct radeon_cac_leakage_table {TYPE_1__* entries; } ;
struct TYPE_10__ {struct radeon_clock_voltage_dependency_table mvdd_dependency_on_mclk; struct radeon_clock_voltage_dependency_table vddci_dependency_on_mclk; struct radeon_cac_leakage_table cac_leakage_table; struct radeon_clock_voltage_dependency_table vddc_dependency_on_mclk; struct radeon_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_11__ {TYPE_2__ dyn_state; } ;
struct TYPE_12__ {TYPE_3__ dpm; } ;
struct radeon_device {TYPE_4__ pm; } ;
struct TYPE_16__ {size_t count; TYPE_6__* dpm_levels; } ;
struct TYPE_15__ {TYPE_8__ mvdd_table; TYPE_8__ vddci_table; TYPE_8__ vddc_table; TYPE_8__ mclk_table; TYPE_8__ sclk_table; } ;
struct ci_power_info {TYPE_7__ dpm_table; } ;
struct ci_dpm_table {int dummy; } ;
struct TYPE_14__ {scalar_t__ value; int enabled; int param1; } ;
struct TYPE_13__ {scalar_t__ clk; scalar_t__ v; } ;
struct TYPE_9__ {int leakage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,TYPE_8__*,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (TYPE_7__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_0(VAR_6);
 struct radeon_clock_voltage_dependency_table *VAR_8 =
  &VAR_6->pm.dpm.dyn_state.vddc_dependency_on_sclk;
 struct radeon_clock_voltage_dependency_table *VAR_9 =
  &VAR_6->pm.dpm.dyn_state.vddc_dependency_on_mclk;
 struct radeon_cac_leakage_table *VAR_10 =
  &VAR_6->pm.dpm.dyn_state.cac_leakage_table;
 u32 VAR_11;

 if (VAR_8 == ((void*)0))
  return -VAR_0;
 if (VAR_8->count < 1)
  return -VAR_0;
 if (VAR_9 == ((void*)0))
  return -VAR_0;
 if (VAR_9->count < 1)
  return -VAR_0;

 FUNC_3(&VAR_7->dpm_table, 0, sizeof(struct ci_dpm_table));

 FUNC_1(VAR_6,
      &VAR_7->dpm_table.sclk_table,
      VAR_1);
 FUNC_1(VAR_6,
      &VAR_7->dpm_table.mclk_table,
      VAR_2);
 FUNC_1(VAR_6,
      &VAR_7->dpm_table.vddc_table,
      VAR_4);
 FUNC_1(VAR_6,
      &VAR_7->dpm_table.vddci_table,
      VAR_5);
 FUNC_1(VAR_6,
      &VAR_7->dpm_table.mvdd_table,
      VAR_3);

 VAR_7->dpm_table.sclk_table.count = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->count; VAR_11++) {
  if ((VAR_11 == 0) ||
      (VAR_7->dpm_table.sclk_table.dpm_levels[VAR_7->dpm_table.sclk_table.count-1].value !=
       VAR_8->entries[VAR_11].clk)) {
   VAR_7->dpm_table.sclk_table.dpm_levels[VAR_7->dpm_table.sclk_table.count].value =
    VAR_8->entries[VAR_11].clk;
   VAR_7->dpm_table.sclk_table.dpm_levels[VAR_7->dpm_table.sclk_table.count].enabled =
    (VAR_11 == 0) ? 1 : 0;
   VAR_7->dpm_table.sclk_table.count++;
  }
 }

 VAR_7->dpm_table.mclk_table.count = 0;
 for (VAR_11 = 0; VAR_11 < VAR_9->count; VAR_11++) {
  if ((VAR_11 == 0) ||
      (VAR_7->dpm_table.mclk_table.dpm_levels[VAR_7->dpm_table.mclk_table.count-1].value !=
       VAR_9->entries[VAR_11].clk)) {
   VAR_7->dpm_table.mclk_table.dpm_levels[VAR_7->dpm_table.mclk_table.count].value =
    VAR_9->entries[VAR_11].clk;
   VAR_7->dpm_table.mclk_table.dpm_levels[VAR_7->dpm_table.mclk_table.count].enabled =
    (VAR_11 == 0) ? 1 : 0;
   VAR_7->dpm_table.mclk_table.count++;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->count; VAR_11++) {
  VAR_7->dpm_table.vddc_table.dpm_levels[VAR_11].value =
   VAR_8->entries[VAR_11].v;
  VAR_7->dpm_table.vddc_table.dpm_levels[VAR_11].param1 =
   VAR_10->entries[VAR_11].leakage;
  VAR_7->dpm_table.vddc_table.dpm_levels[VAR_11].enabled = 1;
 }
 VAR_7->dpm_table.vddc_table.count = VAR_8->count;

 VAR_9 = &VAR_6->pm.dpm.dyn_state.vddci_dependency_on_mclk;
 if (VAR_9) {
  for (VAR_11 = 0; VAR_11 < VAR_9->count; VAR_11++) {
   VAR_7->dpm_table.vddci_table.dpm_levels[VAR_11].value =
    VAR_9->entries[VAR_11].v;
   VAR_7->dpm_table.vddci_table.dpm_levels[VAR_11].enabled = 1;
  }
  VAR_7->dpm_table.vddci_table.count = VAR_9->count;
 }

 VAR_9 = &VAR_6->pm.dpm.dyn_state.mvdd_dependency_on_mclk;
 if (VAR_9) {
  for (VAR_11 = 0; VAR_11 < VAR_9->count; VAR_11++) {
   VAR_7->dpm_table.mvdd_table.dpm_levels[VAR_11].value =
    VAR_9->entries[VAR_11].v;
   VAR_7->dpm_table.mvdd_table.dpm_levels[VAR_11].enabled = 1;
  }
  VAR_7->dpm_table.mvdd_table.count = VAR_9->count;
 }

 FUNC_2(VAR_6);

 return 0;
}
