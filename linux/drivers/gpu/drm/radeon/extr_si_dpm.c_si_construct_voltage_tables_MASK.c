
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ count; } ;
struct si_power_info {int vddc_phase_shed_control; TYPE_4__ vddc_phase_shed_table; TYPE_4__ mvdd_voltage_table; scalar_t__ vddci_control_svi2; scalar_t__ voltage_control_svi2; } ;
struct rv7xx_power_info {int mvdd_control; scalar_t__ voltage_control; } ;
struct TYPE_7__ {int vddci_dependency_on_mclk; int vddc_dependency_on_mclk; } ;
struct TYPE_8__ {TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct evergreen_power_info {TYPE_4__ vddci_voltage_table; scalar_t__ vddci_control; TYPE_4__ vddc_voltage_table; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ,int ,TYPE_4__*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 struct si_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int *,TYPE_4__*) ;
 int FUNC_5 (struct radeon_device*,scalar_t__,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_7)
{
 struct rv7xx_power_info *VAR_8 = FUNC_2(VAR_7);
 struct evergreen_power_info *VAR_9 = FUNC_0(VAR_7);
 struct si_power_info *VAR_10 = FUNC_3(VAR_7);
 int VAR_11;

 if (VAR_8->voltage_control) {
  VAR_11 = FUNC_1(VAR_7, VAR_5,
          VAR_2, &VAR_9->vddc_voltage_table);
  if (VAR_11)
   return VAR_11;

  if (VAR_9->vddc_voltage_table.count > VAR_1)
   FUNC_5(VAR_7,
         VAR_1,
         &VAR_9->vddc_voltage_table);
 } else if (VAR_10->voltage_control_svi2) {
  VAR_11 = FUNC_4(VAR_7,
      &VAR_7->pm.dpm.dyn_state.vddc_dependency_on_mclk,
      &VAR_9->vddc_voltage_table);
  if (VAR_11)
   return VAR_11;
 } else {
  return -VAR_0;
 }

 if (VAR_9->vddci_control) {
  VAR_11 = FUNC_1(VAR_7, VAR_6,
          VAR_2, &VAR_9->vddci_voltage_table);
  if (VAR_11)
   return VAR_11;

  if (VAR_9->vddci_voltage_table.count > VAR_1)
   FUNC_5(VAR_7,
         VAR_1,
         &VAR_9->vddci_voltage_table);
 }
 if (VAR_10->vddci_control_svi2) {
  VAR_11 = FUNC_4(VAR_7,
      &VAR_7->pm.dpm.dyn_state.vddci_dependency_on_mclk,
      &VAR_9->vddci_voltage_table);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_8->mvdd_control) {
  VAR_11 = FUNC_1(VAR_7, VAR_4,
          VAR_2, &VAR_10->mvdd_voltage_table);

  if (VAR_11) {
   VAR_8->mvdd_control = 0;
   return VAR_11;
  }

  if (VAR_10->mvdd_voltage_table.count == 0) {
   VAR_8->mvdd_control = 0;
   return -VAR_0;
  }

  if (VAR_10->mvdd_voltage_table.count > VAR_1)
   FUNC_5(VAR_7,
         VAR_1,
         &VAR_10->mvdd_voltage_table);
 }

 if (VAR_10->vddc_phase_shed_control) {
  VAR_11 = FUNC_1(VAR_7, VAR_5,
          VAR_3, &VAR_10->vddc_phase_shed_table);
  if (VAR_11)
   VAR_10->vddc_phase_shed_control = 0;

  if ((VAR_10->vddc_phase_shed_table.count == 0) ||
      (VAR_10->vddc_phase_shed_table.count > VAR_1))
   VAR_10->vddc_phase_shed_control = 0;
 }

 return 0;
}
