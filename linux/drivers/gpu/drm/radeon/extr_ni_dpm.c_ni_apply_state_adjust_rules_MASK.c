
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct radeon_ps {int dummy; } ;
struct radeon_clock_and_voltage_limits {scalar_t__ mclk; scalar_t__ sclk; scalar_t__ vddc; scalar_t__ vddci; } ;
struct TYPE_7__ {scalar_t__ min_vddc_for_pcie_gen2; struct radeon_clock_and_voltage_limits max_clock_voltage_on_dc; int vddc_dependency_on_dispclk; int vddc_dependency_on_mclk; int vddci_dependency_on_mclk; int vddc_dependency_on_sclk; struct radeon_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct TYPE_8__ {int new_active_crtc_count; int ac_power; TYPE_2__ dyn_state; } ;
struct TYPE_9__ {TYPE_3__ dpm; } ;
struct TYPE_6__ {scalar_t__ current_dispclk; } ;
struct radeon_device {TYPE_4__ pm; TYPE_1__ clock; } ;
struct ni_ps {int performance_level_count; int dc_compatible; TYPE_5__* performance_levels; } ;
struct TYPE_10__ {scalar_t__ mclk; scalar_t__ sclk; scalar_t__ vddc; scalar_t__ vddci; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,struct radeon_clock_and_voltage_limits*,TYPE_5__*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct radeon_device*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 struct ni_ps* FUNC_5 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_1,
     struct radeon_ps *VAR_2)
{
 struct ni_ps *VAR_3 = FUNC_5(VAR_2);
 struct radeon_clock_and_voltage_limits *VAR_4;
 bool VAR_5;
 u32 VAR_6;
 u16 VAR_7;
 int VAR_8;

 if ((VAR_1->pm.dpm.new_active_crtc_count > 1) ||
     FUNC_4(VAR_1))
  VAR_5 = 1;
 else
  VAR_5 = 0;

 if (VAR_1->pm.dpm.ac_power)
  VAR_4 = &VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_ac;
 else
  VAR_4 = &VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_dc;

 if (VAR_1->pm.dpm.ac_power == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
   if (VAR_3->performance_levels[VAR_8].mclk > VAR_4->mclk)
    VAR_3->performance_levels[VAR_8].mclk = VAR_4->mclk;
   if (VAR_3->performance_levels[VAR_8].sclk > VAR_4->sclk)
    VAR_3->performance_levels[VAR_8].sclk = VAR_4->sclk;
   if (VAR_3->performance_levels[VAR_8].vddc > VAR_4->vddc)
    VAR_3->performance_levels[VAR_8].vddc = VAR_4->vddc;
   if (VAR_3->performance_levels[VAR_8].vddci > VAR_4->vddci)
    VAR_3->performance_levels[VAR_8].vddci = VAR_4->vddci;
  }
 }




 if (VAR_5) {
  VAR_3->performance_levels[0].mclk =
   VAR_3->performance_levels[VAR_3->performance_level_count - 1].mclk;
  VAR_3->performance_levels[0].vddci =
   VAR_3->performance_levels[VAR_3->performance_level_count - 1].vddci;
 }

 FUNC_3(VAR_1, VAR_4->sclk, VAR_4->mclk,
      &VAR_3->performance_levels[0].sclk,
      &VAR_3->performance_levels[0].mclk);

 for (VAR_8 = 1; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
  if (VAR_3->performance_levels[VAR_8].sclk < VAR_3->performance_levels[VAR_8 - 1].sclk)
   VAR_3->performance_levels[VAR_8].sclk = VAR_3->performance_levels[VAR_8 - 1].sclk;
  if (VAR_3->performance_levels[VAR_8].vddc < VAR_3->performance_levels[VAR_8 - 1].vddc)
   VAR_3->performance_levels[VAR_8].vddc = VAR_3->performance_levels[VAR_8 - 1].vddc;
 }


 if (VAR_5) {
  VAR_6 = VAR_3->performance_levels[0].mclk;
  VAR_7 = VAR_3->performance_levels[0].vddci;
  for (VAR_8 = 1; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
   if (VAR_6 < VAR_3->performance_levels[VAR_8].mclk)
    VAR_6 = VAR_3->performance_levels[VAR_8].mclk;
   if (VAR_7 < VAR_3->performance_levels[VAR_8].vddci)
    VAR_7 = VAR_3->performance_levels[VAR_8].vddci;
  }
  for (VAR_8 = 0; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
   VAR_3->performance_levels[VAR_8].mclk = VAR_6;
   VAR_3->performance_levels[VAR_8].vddci = VAR_7;
  }
 } else {
  for (VAR_8 = 1; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
   if (VAR_3->performance_levels[VAR_8].mclk < VAR_3->performance_levels[VAR_8 - 1].mclk)
    VAR_3->performance_levels[VAR_8].mclk = VAR_3->performance_levels[VAR_8 - 1].mclk;
   if (VAR_3->performance_levels[VAR_8].vddci < VAR_3->performance_levels[VAR_8 - 1].vddci)
    VAR_3->performance_levels[VAR_8].vddci = VAR_3->performance_levels[VAR_8 - 1].vddci;
  }
 }

 for (VAR_8 = 1; VAR_8 < VAR_3->performance_level_count; VAR_8++)
  FUNC_3(VAR_1, VAR_4->sclk, VAR_4->mclk,
       &VAR_3->performance_levels[VAR_8].sclk,
       &VAR_3->performance_levels[VAR_8].mclk);

 for (VAR_8 = 0; VAR_8 < VAR_3->performance_level_count; VAR_8++)
  FUNC_0(VAR_1, VAR_4,
           &VAR_3->performance_levels[VAR_8]);

 for (VAR_8 = 0; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
  FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk,
         VAR_3->performance_levels[VAR_8].sclk,
         VAR_4->vddc, &VAR_3->performance_levels[VAR_8].vddc);
  FUNC_2(&VAR_1->pm.dpm.dyn_state.vddci_dependency_on_mclk,
         VAR_3->performance_levels[VAR_8].mclk,
         VAR_4->vddci, &VAR_3->performance_levels[VAR_8].vddci);
  FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_mclk,
         VAR_3->performance_levels[VAR_8].mclk,
         VAR_4->vddc, &VAR_3->performance_levels[VAR_8].vddc);
  FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_dispclk,
         VAR_1->clock.current_dispclk,
         VAR_4->vddc, &VAR_3->performance_levels[VAR_8].vddc);
 }

 for (VAR_8 = 0; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
  FUNC_1(VAR_1,
           VAR_4->vddc, VAR_4->vddci,
           &VAR_3->performance_levels[VAR_8].vddc,
           &VAR_3->performance_levels[VAR_8].vddci);
 }

 VAR_3->dc_compatible = 1;
 for (VAR_8 = 0; VAR_8 < VAR_3->performance_level_count; VAR_8++) {
  if (VAR_3->performance_levels[VAR_8].vddc > VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddc)
   VAR_3->dc_compatible = 0;

  if (VAR_3->performance_levels[VAR_8].vddc < VAR_1->pm.dpm.dyn_state.min_vddc_for_pcie_gen2)
   VAR_3->performance_levels[VAR_8].flags &= ~VAR_0;
 }
}
