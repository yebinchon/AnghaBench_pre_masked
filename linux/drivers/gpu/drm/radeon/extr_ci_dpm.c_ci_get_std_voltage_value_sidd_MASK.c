
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_11__ {scalar_t__ count; TYPE_3__* entries; } ;
struct TYPE_9__ {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_12__ {TYPE_4__ cac_leakage_table; TYPE_2__ vddc_dependency_on_sclk; } ;
struct TYPE_13__ {TYPE_5__ dyn_state; } ;
struct TYPE_14__ {TYPE_6__ dpm; } ;
struct radeon_device {TYPE_7__ pm; } ;
struct atom_voltage_table_entry {size_t value; } ;
struct TYPE_10__ {size_t vddc; size_t leakage; } ;
struct TYPE_8__ {scalar_t__ v; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct radeon_device *VAR_2,
      struct atom_voltage_table_entry *VAR_3,
      u16 *VAR_4, u16 *VAR_5)
{
 u16 VAR_6, VAR_7;
 bool VAR_8 = 0;
 *VAR_4 = VAR_3->value * VAR_1;
 *VAR_5 = VAR_3->value * VAR_1;

 if (VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries == ((void*)0))
  return -VAR_0;

 if (VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries) {
  for (VAR_6 = 0; (u32)VAR_6 < VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; VAR_6++) {
   if (VAR_3->value ==
       VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_6].v) {
    VAR_8 = 1;
    if ((u32)VAR_6 < VAR_2->pm.dpm.dyn_state.cac_leakage_table.count)
     VAR_7 = VAR_6;
    else
     VAR_7 = VAR_2->pm.dpm.dyn_state.cac_leakage_table.count - 1;
    *VAR_5 =
     VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].vddc * VAR_1;
    *VAR_4 =
     VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].leakage * VAR_1;
    break;
   }
  }

  if (!VAR_8) {
   for (VAR_6 = 0; (u32)VAR_6 < VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; VAR_6++) {
    if (VAR_3->value <=
        VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_6].v) {
     VAR_8 = 1;
     if ((u32)VAR_6 < VAR_2->pm.dpm.dyn_state.cac_leakage_table.count)
      VAR_7 = VAR_6;
     else
      VAR_7 = VAR_2->pm.dpm.dyn_state.cac_leakage_table.count - 1;
     *VAR_5 =
      VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].vddc * VAR_1;
     *VAR_4 =
      VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].leakage * VAR_1;
     break;
    }
   }
  }
 }

 return 0;
}
