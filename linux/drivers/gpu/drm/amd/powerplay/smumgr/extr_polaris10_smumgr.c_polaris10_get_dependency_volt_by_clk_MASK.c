
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {size_t vddci_bootup_value; size_t mvdd_bootup_value; } ;
struct smu7_hwmgr {scalar_t__ vddci_control; scalar_t__ mvdd_control; TYPE_1__ vbios_boot_state; int vddci_voltage_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {scalar_t__ count; TYPE_2__* entries; } ;
struct TYPE_4__ {size_t clk; size_t vddc; int vddci; scalar_t__ mvdd; } ;
typedef size_t SMU_VoltageLevel ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_7,
  struct phm_ppt_v1_clock_voltage_dependency_table *VAR_8,
  uint32_t VAR_9, SMU_VoltageLevel *VAR_10, uint32_t *VAR_11)
{
 uint32_t VAR_12;
 uint16_t VAR_13;
 struct smu7_hwmgr *VAR_14 = (struct smu7_hwmgr *)(VAR_7->backend);

 *VAR_10 = *VAR_11 = 0;


 if (VAR_8->count == 0)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_8->count; VAR_12++) {

  if (VAR_8->entries[VAR_12].clk >= VAR_9) {
   *VAR_10 |= (VAR_8->entries[VAR_12].vddc *
     VAR_6) << VAR_4;
   if (VAR_2 == VAR_14->vddci_control)
    *VAR_10 |= (VAR_14->vbios_boot_state.vddci_bootup_value *
      VAR_6) << VAR_3;
   else if (VAR_8->entries[VAR_12].vddci)
    *VAR_10 |= (VAR_8->entries[VAR_12].vddci *
      VAR_6) << VAR_3;
   else {
    VAR_13 = FUNC_0(&(VAR_14->vddci_voltage_table),
      (VAR_8->entries[VAR_12].vddc -
        (uint16_t)VAR_5));
    *VAR_10 |= (VAR_13 * VAR_6) << VAR_3;
   }

   if (VAR_2 == VAR_14->mvdd_control)
    *VAR_11 = VAR_14->vbios_boot_state.mvdd_bootup_value *
     VAR_6;
   else if (VAR_8->entries[VAR_12].mvdd)
    *VAR_11 = (uint32_t) VAR_8->entries[VAR_12].mvdd *
     VAR_6;

   *VAR_10 |= 1 << VAR_1;
   return 0;
  }
 }


 *VAR_10 |= (VAR_8->entries[VAR_12 - 1].vddc * VAR_6) << VAR_4;

 if (VAR_2 == VAR_14->vddci_control)
  *VAR_10 |= (VAR_14->vbios_boot_state.vddci_bootup_value *
    VAR_6) << VAR_3;
 else if (VAR_8->entries[VAR_12-1].vddci) {
  VAR_13 = FUNC_0(&(VAR_14->vddci_voltage_table),
    (VAR_8->entries[VAR_12].vddc -
      (uint16_t)VAR_5));
  *VAR_10 |= (VAR_13 * VAR_6) << VAR_3;
 }

 if (VAR_2 == VAR_14->mvdd_control)
  *VAR_11 = VAR_14->vbios_boot_state.mvdd_bootup_value * VAR_6;
 else if (VAR_8->entries[VAR_12].mvdd)
  *VAR_11 = (uint32_t) VAR_8->entries[VAR_12 - 1].mvdd * VAR_6;

 return 0;
}
