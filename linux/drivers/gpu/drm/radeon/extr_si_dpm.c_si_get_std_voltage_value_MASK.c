
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_13__ {scalar_t__ count; TYPE_3__* entries; } ;
struct TYPE_11__ {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_14__ {TYPE_4__ cac_leakage_table; TYPE_2__ vddc_dependency_on_sclk; } ;
struct TYPE_15__ {int platform_caps; TYPE_5__ dyn_state; } ;
struct TYPE_16__ {TYPE_6__ dpm; } ;
struct radeon_device {TYPE_7__ pm; } ;
struct TYPE_17__ {size_t index; int value; } ;
struct TYPE_12__ {size_t vddc; } ;
struct TYPE_10__ {scalar_t__ v; } ;
typedef TYPE_8__ SISLANDS_SMC_VOLTAGE_VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_2,
        SISLANDS_SMC_VOLTAGE_VALUE *VAR_3,
        u16 *VAR_4)
{
 u16 VAR_5;
 bool VAR_6 = 0;
 *VAR_4 = FUNC_0(VAR_3->value);

 if (VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries) {
  if (VAR_2->pm.dpm.platform_caps & VAR_0) {
   if (VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries == ((void*)0))
    return -VAR_1;

   for (VAR_5 = 0; (u32)VAR_5 < VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; VAR_5++) {
    if (FUNC_0(VAR_3->value) ==
        (u16)VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_5].v) {
     VAR_6 = 1;
     if ((u32)VAR_5 < VAR_2->pm.dpm.dyn_state.cac_leakage_table.count)
      *VAR_4 =
       VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_5].vddc;
     else
      *VAR_4 =
       VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_2->pm.dpm.dyn_state.cac_leakage_table.count-1].vddc;
     break;
    }
   }

   if (!VAR_6) {
    for (VAR_5 = 0; (u32)VAR_5 < VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; VAR_5++) {
     if (FUNC_0(VAR_3->value) <=
         (u16)VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_5].v) {
      VAR_6 = 1;
      if ((u32)VAR_5 < VAR_2->pm.dpm.dyn_state.cac_leakage_table.count)
       *VAR_4 =
        VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_5].vddc;
      else
       *VAR_4 =
        VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_2->pm.dpm.dyn_state.cac_leakage_table.count-1].vddc;
      break;
     }
    }
   }
  } else {
   if ((u32)VAR_3->index < VAR_2->pm.dpm.dyn_state.cac_leakage_table.count)
    *VAR_4 = VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_3->index].vddc;
  }
 }

 return 0;
}
