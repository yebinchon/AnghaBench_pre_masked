
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_19__ {size_t count; scalar_t__ phase_delay; int mask_low; TYPE_1__* entries; } ;
struct si_power_info {int svc_gpio_id; int svd_gpio_id; int vddc_phase_shed_control; TYPE_8__ vddc_phase_shed_table; TYPE_8__ mvdd_voltage_table; scalar_t__ voltage_control_svi2; } ;
struct rv7xx_power_info {scalar_t__ max_vddc_in_table; } ;
struct TYPE_14__ {int phase_shedding_limits_table; } ;
struct TYPE_15__ {TYPE_3__ dyn_state; } ;
struct TYPE_16__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct evergreen_power_info {TYPE_8__ vddci_voltage_table; TYPE_8__ vddc_voltage_table; } ;
struct TYPE_17__ {void** lowMask; } ;
struct TYPE_13__ {void** lowMask; } ;
struct TYPE_18__ {size_t maxVDDCIndexInPPTable; TYPE_6__ phaseMaskTable; TYPE_2__ voltageMaskTable; } ;
struct TYPE_12__ {scalar_t__ value; } ;
typedef TYPE_7__ SISLANDS_SMC_STATETABLE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 struct si_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_5 (struct radeon_device*,TYPE_8__*,int *) ;
 int FUNC_6 (struct radeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_8,
       SISLANDS_SMC_STATETABLE *VAR_9)
{
 struct rv7xx_power_info *VAR_10 = FUNC_2(VAR_8);
 struct evergreen_power_info *VAR_11 = FUNC_1(VAR_8);
 struct si_power_info *VAR_12 = FUNC_3(VAR_8);
 u8 VAR_13;

 if (VAR_12->voltage_control_svi2) {
  FUNC_6(VAR_8, VAR_5,
   VAR_12->svc_gpio_id);
  FUNC_6(VAR_8, VAR_6,
   VAR_12->svd_gpio_id);
  FUNC_6(VAR_8, VAR_7,
        2);
 } else {
  if (VAR_11->vddc_voltage_table.count) {
   FUNC_4(VAR_8, &VAR_11->vddc_voltage_table, VAR_9);
   VAR_9->voltageMaskTable.lowMask[VAR_1] =
    FUNC_0(VAR_11->vddc_voltage_table.mask_low);

   for (VAR_13 = 0; VAR_13 < VAR_11->vddc_voltage_table.count; VAR_13++) {
    if (VAR_10->max_vddc_in_table <= VAR_11->vddc_voltage_table.entries[VAR_13].value) {
     VAR_9->maxVDDCIndexInPPTable = VAR_13;
     break;
    }
   }
  }

  if (VAR_11->vddci_voltage_table.count) {
   FUNC_4(VAR_8, &VAR_11->vddci_voltage_table, VAR_9);

   VAR_9->voltageMaskTable.lowMask[VAR_2] =
    FUNC_0(VAR_11->vddci_voltage_table.mask_low);
  }


  if (VAR_12->mvdd_voltage_table.count) {
   FUNC_4(VAR_8, &VAR_12->mvdd_voltage_table, VAR_9);

   VAR_9->voltageMaskTable.lowMask[VAR_0] =
    FUNC_0(VAR_12->mvdd_voltage_table.mask_low);
  }

  if (VAR_12->vddc_phase_shed_control) {
   if (FUNC_5(VAR_8, &VAR_12->vddc_phase_shed_table,
             &VAR_8->pm.dpm.dyn_state.phase_shedding_limits_table)) {
    FUNC_4(VAR_8, &VAR_12->vddc_phase_shed_table, VAR_9);

    VAR_9->phaseMaskTable.lowMask[VAR_3] =
     FUNC_0(VAR_12->vddc_phase_shed_table.mask_low);

    FUNC_6(VAR_8, VAR_4,
          (u32)VAR_12->vddc_phase_shed_table.phase_delay);
   } else {
    VAR_12->vddc_phase_shed_control = 0;
   }
  }
 }

 return 0;
}
