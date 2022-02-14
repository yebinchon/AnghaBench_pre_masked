
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mvdd_dependency_on_mclk; int vddci_dependency_on_mclk; int vddc_dependency_on_mclk; } ;
struct TYPE_8__ {TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_10__ {scalar_t__ count; } ;
struct ci_power_info {scalar_t__ voltage_control; scalar_t__ vddci_control; scalar_t__ mvdd_control; TYPE_4__ mvdd_voltage_table; TYPE_4__ vddci_voltage_table; TYPE_4__ vddc_voltage_table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int *,TYPE_4__*) ;
 int FUNC_2 (struct radeon_device*,int ,int ,TYPE_4__*) ;
 int FUNC_3 (struct radeon_device*,scalar_t__,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_9)
{
 struct ci_power_info *VAR_10 = FUNC_0(VAR_9);
 int VAR_11;

 if (VAR_10->voltage_control == VAR_0) {
  VAR_11 = FUNC_2(VAR_9, VAR_7,
          VAR_5,
          &VAR_10->vddc_voltage_table);
  if (VAR_11)
   return VAR_11;
 } else if (VAR_10->voltage_control == VAR_1) {
  VAR_11 = FUNC_1(VAR_9,
      &VAR_9->pm.dpm.dyn_state.vddc_dependency_on_mclk,
      &VAR_10->vddc_voltage_table);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_10->vddc_voltage_table.count > VAR_3)
  FUNC_3(VAR_9, VAR_3,
        &VAR_10->vddc_voltage_table);

 if (VAR_10->vddci_control == VAR_0) {
  VAR_11 = FUNC_2(VAR_9, VAR_8,
          VAR_5,
          &VAR_10->vddci_voltage_table);
  if (VAR_11)
   return VAR_11;
 } else if (VAR_10->vddci_control == VAR_1) {
  VAR_11 = FUNC_1(VAR_9,
      &VAR_9->pm.dpm.dyn_state.vddci_dependency_on_mclk,
      &VAR_10->vddci_voltage_table);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_10->vddci_voltage_table.count > VAR_4)
  FUNC_3(VAR_9, VAR_4,
        &VAR_10->vddci_voltage_table);

 if (VAR_10->mvdd_control == VAR_0) {
  VAR_11 = FUNC_2(VAR_9, VAR_6,
          VAR_5,
          &VAR_10->mvdd_voltage_table);
  if (VAR_11)
   return VAR_11;
 } else if (VAR_10->mvdd_control == VAR_1) {
  VAR_11 = FUNC_1(VAR_9,
      &VAR_9->pm.dpm.dyn_state.mvdd_dependency_on_mclk,
      &VAR_10->mvdd_voltage_table);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_10->mvdd_voltage_table.count > VAR_2)
  FUNC_3(VAR_9, VAR_2,
        &VAR_10->mvdd_voltage_table);

 return 0;
}
