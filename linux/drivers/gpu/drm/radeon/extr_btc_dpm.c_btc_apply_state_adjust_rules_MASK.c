
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
typedef void* u16 ;
struct TYPE_10__ {scalar_t__ mclk; scalar_t__ sclk; scalar_t__ vddc; scalar_t__ vddci; int flags; } ;
struct rv7xx_ps {int dc_compatible; TYPE_5__ high; TYPE_5__ medium; TYPE_5__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_clock_and_voltage_limits {scalar_t__ mclk; scalar_t__ sclk; scalar_t__ vddc; scalar_t__ vddci; } ;
struct TYPE_7__ {scalar_t__ min_vddc_for_pcie_gen2; struct radeon_clock_and_voltage_limits max_clock_voltage_on_dc; int vddc_dependency_on_dispclk; int vddc_dependency_on_mclk; int vddci_dependency_on_mclk; int vddc_dependency_on_sclk; struct radeon_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct TYPE_8__ {int new_active_crtc_count; int ac_power; TYPE_2__ dyn_state; } ;
struct TYPE_9__ {TYPE_3__ dpm; } ;
struct TYPE_6__ {scalar_t__ current_dispclk; } ;
struct radeon_device {TYPE_4__ pm; TYPE_1__ clock; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,struct radeon_clock_and_voltage_limits*,TYPE_5__*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 struct rv7xx_ps* FUNC_5 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_1,
      struct radeon_ps *VAR_2)
{
 struct rv7xx_ps *VAR_3 = FUNC_5(VAR_2);
 struct radeon_clock_and_voltage_limits *VAR_4;
 bool VAR_5;
 u32 VAR_6, VAR_7;
 u16 VAR_8, VAR_9;

 if ((VAR_1->pm.dpm.new_active_crtc_count > 1) ||
     FUNC_3(VAR_1))
  VAR_5 = 1;
 else
  VAR_5 = 0;

 if (VAR_1->pm.dpm.ac_power)
  VAR_4 = &VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_ac;
 else
  VAR_4 = &VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_dc;

 if (VAR_1->pm.dpm.ac_power == 0) {
  if (VAR_3->high.mclk > VAR_4->mclk)
   VAR_3->high.mclk = VAR_4->mclk;
  if (VAR_3->high.sclk > VAR_4->sclk)
   VAR_3->high.sclk = VAR_4->sclk;
  if (VAR_3->high.vddc > VAR_4->vddc)
   VAR_3->high.vddc = VAR_4->vddc;
  if (VAR_3->high.vddci > VAR_4->vddci)
   VAR_3->high.vddci = VAR_4->vddci;

  if (VAR_3->medium.mclk > VAR_4->mclk)
   VAR_3->medium.mclk = VAR_4->mclk;
  if (VAR_3->medium.sclk > VAR_4->sclk)
   VAR_3->medium.sclk = VAR_4->sclk;
  if (VAR_3->medium.vddc > VAR_4->vddc)
   VAR_3->medium.vddc = VAR_4->vddc;
  if (VAR_3->medium.vddci > VAR_4->vddci)
   VAR_3->medium.vddci = VAR_4->vddci;

  if (VAR_3->low.mclk > VAR_4->mclk)
   VAR_3->low.mclk = VAR_4->mclk;
  if (VAR_3->low.sclk > VAR_4->sclk)
   VAR_3->low.sclk = VAR_4->sclk;
  if (VAR_3->low.vddc > VAR_4->vddc)
   VAR_3->low.vddc = VAR_4->vddc;
  if (VAR_3->low.vddci > VAR_4->vddci)
   VAR_3->low.vddci = VAR_4->vddci;
 }



 if (VAR_5) {
  VAR_7 = VAR_3->low.sclk;
  VAR_6 = VAR_3->high.mclk;
  VAR_8 = VAR_3->low.vddc;
  VAR_9 = VAR_3->high.vddci;
 } else {
  VAR_7 = VAR_3->low.sclk;
  VAR_6 = VAR_3->low.mclk;
  VAR_8 = VAR_3->low.vddc;
  VAR_9 = VAR_3->low.vddci;
 }


 VAR_3->low.sclk = VAR_7;
 VAR_3->low.mclk = VAR_6;
 VAR_3->low.vddc = VAR_8;
 VAR_3->low.vddci = VAR_9;

 FUNC_4(VAR_1, VAR_4->sclk, VAR_4->mclk,
      &VAR_3->low.sclk, &VAR_3->low.mclk);


 if (VAR_3->medium.sclk < VAR_3->low.sclk)
  VAR_3->medium.sclk = VAR_3->low.sclk;
 if (VAR_3->medium.vddc < VAR_3->low.vddc)
  VAR_3->medium.vddc = VAR_3->low.vddc;
 if (VAR_3->high.sclk < VAR_3->medium.sclk)
  VAR_3->high.sclk = VAR_3->medium.sclk;
 if (VAR_3->high.vddc < VAR_3->medium.vddc)
  VAR_3->high.vddc = VAR_3->medium.vddc;

 if (VAR_5) {
  VAR_6 = VAR_3->low.mclk;
  if (VAR_6 < VAR_3->medium.mclk)
   VAR_6 = VAR_3->medium.mclk;
  if (VAR_6 < VAR_3->high.mclk)
   VAR_6 = VAR_3->high.mclk;
  VAR_3->low.mclk = VAR_6;
  VAR_3->low.vddci = VAR_9;
  VAR_3->medium.mclk = VAR_6;
  VAR_3->medium.vddci = VAR_9;
  VAR_3->high.mclk = VAR_6;
  VAR_3->high.vddci = VAR_9;
 } else {
  if (VAR_3->medium.mclk < VAR_3->low.mclk)
   VAR_3->medium.mclk = VAR_3->low.mclk;
  if (VAR_3->medium.vddci < VAR_3->low.vddci)
   VAR_3->medium.vddci = VAR_3->low.vddci;
  if (VAR_3->high.mclk < VAR_3->medium.mclk)
   VAR_3->high.mclk = VAR_3->medium.mclk;
  if (VAR_3->high.vddci < VAR_3->medium.vddci)
   VAR_3->high.vddci = VAR_3->medium.vddci;
 }

 FUNC_4(VAR_1, VAR_4->sclk, VAR_4->mclk,
      &VAR_3->medium.sclk, &VAR_3->medium.mclk);
 FUNC_4(VAR_1, VAR_4->sclk, VAR_4->mclk,
      &VAR_3->high.sclk, &VAR_3->high.mclk);

 FUNC_0(VAR_1, VAR_4, &VAR_3->low);
 FUNC_0(VAR_1, VAR_4, &VAR_3->medium);
 FUNC_0(VAR_1, VAR_4, &VAR_3->high);

 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk,
        VAR_3->low.sclk, VAR_4->vddc, &VAR_3->low.vddc);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddci_dependency_on_mclk,
        VAR_3->low.mclk, VAR_4->vddci, &VAR_3->low.vddci);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_mclk,
        VAR_3->low.mclk, VAR_4->vddc, &VAR_3->low.vddc);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_dispclk,
        VAR_1->clock.current_dispclk, VAR_4->vddc, &VAR_3->low.vddc);

 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk,
        VAR_3->medium.sclk, VAR_4->vddc, &VAR_3->medium.vddc);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddci_dependency_on_mclk,
        VAR_3->medium.mclk, VAR_4->vddci, &VAR_3->medium.vddci);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_mclk,
        VAR_3->medium.mclk, VAR_4->vddc, &VAR_3->medium.vddc);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_dispclk,
        VAR_1->clock.current_dispclk, VAR_4->vddc, &VAR_3->medium.vddc);

 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk,
        VAR_3->high.sclk, VAR_4->vddc, &VAR_3->high.vddc);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddci_dependency_on_mclk,
        VAR_3->high.mclk, VAR_4->vddci, &VAR_3->high.vddci);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_mclk,
        VAR_3->high.mclk, VAR_4->vddc, &VAR_3->high.vddc);
 FUNC_2(&VAR_1->pm.dpm.dyn_state.vddc_dependency_on_dispclk,
        VAR_1->clock.current_dispclk, VAR_4->vddc, &VAR_3->high.vddc);

 FUNC_1(VAR_1, VAR_4->vddc, VAR_4->vddci,
          &VAR_3->low.vddc, &VAR_3->low.vddci);
 FUNC_1(VAR_1, VAR_4->vddc, VAR_4->vddci,
          &VAR_3->medium.vddc, &VAR_3->medium.vddci);
 FUNC_1(VAR_1, VAR_4->vddc, VAR_4->vddci,
          &VAR_3->high.vddc, &VAR_3->high.vddci);

 if ((VAR_3->high.vddc <= VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddc) &&
     (VAR_3->medium.vddc <= VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddc) &&
     (VAR_3->low.vddc <= VAR_1->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddc))
  VAR_3->dc_compatible = 1;
 else
  VAR_3->dc_compatible = 0;

 if (VAR_3->low.vddc < VAR_1->pm.dpm.dyn_state.min_vddc_for_pcie_gen2)
  VAR_3->low.flags &= ~VAR_0;
 if (VAR_3->medium.vddc < VAR_1->pm.dpm.dyn_state.min_vddc_for_pcie_gen2)
  VAR_3->medium.flags &= ~VAR_0;
 if (VAR_3->high.vddc < VAR_1->pm.dpm.dyn_state.min_vddc_for_pcie_gen2)
  VAR_3->high.flags &= ~VAR_0;
}
