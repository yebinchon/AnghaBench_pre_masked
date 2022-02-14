
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


typedef int u32 ;
typedef scalar_t__ u16 ;
struct si_ps {int performance_level_count; int dc_compatible; TYPE_7__* performance_levels; } ;
struct amdgpu_ps {scalar_t__ vce_active; scalar_t__ dclk; scalar_t__ vclk; scalar_t__ ecclk; scalar_t__ evclk; } ;
struct amdgpu_clock_and_voltage_limits {int mclk; int sclk; scalar_t__ vddc; scalar_t__ vddci; } ;
struct TYPE_11__ {struct amdgpu_clock_and_voltage_limits max_clock_voltage_on_dc; int vddc_dependency_on_dispclk; int vddc_dependency_on_mclk; int vddci_dependency_on_mclk; int vddc_dependency_on_sclk; struct amdgpu_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct TYPE_12__ {size_t vce_level; int new_active_crtc_count; TYPE_4__ dyn_state; TYPE_2__* vce_states; } ;
struct TYPE_13__ {int ac_power; TYPE_5__ dpm; } ;
struct TYPE_10__ {int current_dispclk; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_6__ pm; TYPE_3__ clock; TYPE_1__* pdev; } ;
struct TYPE_14__ {scalar_t__ vddc; int mclk; int sclk; scalar_t__ vddci; } ;
struct TYPE_9__ {int sclk; int mclk; scalar_t__ ecclk; scalar_t__ evclk; } ;
struct TYPE_8__ {int revision; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_clock_and_voltage_limits*,TYPE_7__*) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__*) ;
 int FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 struct si_ps* FUNC_5 (struct amdgpu_ps*) ;
 int FUNC_6 (struct amdgpu_device*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_2,
     struct amdgpu_ps *VAR_3)
{
 struct si_ps *VAR_4 = FUNC_5(VAR_3);
 struct amdgpu_clock_and_voltage_limits *VAR_5;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 u32 VAR_8, VAR_9;
 u16 VAR_10, VAR_11, VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15;
 u32 VAR_16 = 0, VAR_17 = 0;
 int VAR_18;

 if (VAR_2->asic_type == VAR_0) {
  if ((VAR_2->pdev->revision == 0x81) ||
      (VAR_2->pdev->revision == 0x83) ||
      (VAR_2->pdev->revision == 0xC3) ||
      (VAR_2->pdev->device == 0x6664) ||
      (VAR_2->pdev->device == 0x6665) ||
      (VAR_2->pdev->device == 0x6667)) {
   VAR_16 = 75000;
  }
  if ((VAR_2->pdev->revision == 0xC3) ||
      (VAR_2->pdev->device == 0x6665)) {
   VAR_16 = 60000;
   VAR_17 = 80000;
  }
 } else if (VAR_2->asic_type == VAR_1) {
  if ((VAR_2->pdev->revision == 0xC7) ||
      (VAR_2->pdev->revision == 0x80) ||
      (VAR_2->pdev->revision == 0x81) ||
      (VAR_2->pdev->revision == 0x83) ||
      (VAR_2->pdev->revision == 0x87) ||
      (VAR_2->pdev->device == 0x6604) ||
      (VAR_2->pdev->device == 0x6605)) {
   VAR_16 = 75000;
  }
 }

 if (VAR_3->vce_active) {
  VAR_3->evclk = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].evclk;
  VAR_3->ecclk = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].ecclk;
  FUNC_6(VAR_2, VAR_3->evclk, VAR_3->ecclk,
      &VAR_12);
 } else {
  VAR_3->evclk = 0;
  VAR_3->ecclk = 0;
 }

 if ((VAR_2->pm.dpm.new_active_crtc_count > 1) ||
     FUNC_4(VAR_2))
  VAR_6 = 1;

 if (VAR_3->vclk || VAR_3->dclk) {
  VAR_6 = 1;
  VAR_7 = 1;
 }

 if (VAR_2->pm.ac_power)
  VAR_5 = &VAR_2->pm.dpm.dyn_state.max_clock_voltage_on_ac;
 else
  VAR_5 = &VAR_2->pm.dpm.dyn_state.max_clock_voltage_on_dc;

 for (VAR_18 = VAR_4->performance_level_count - 2; VAR_18 >= 0; VAR_18--) {
  if (VAR_4->performance_levels[VAR_18].vddc > VAR_4->performance_levels[VAR_18+1].vddc)
   VAR_4->performance_levels[VAR_18].vddc = VAR_4->performance_levels[VAR_18+1].vddc;
 }
 if (VAR_2->pm.ac_power == 0) {
  for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   if (VAR_4->performance_levels[VAR_18].mclk > VAR_5->mclk)
    VAR_4->performance_levels[VAR_18].mclk = VAR_5->mclk;
   if (VAR_4->performance_levels[VAR_18].sclk > VAR_5->sclk)
    VAR_4->performance_levels[VAR_18].sclk = VAR_5->sclk;
   if (VAR_4->performance_levels[VAR_18].vddc > VAR_5->vddc)
    VAR_4->performance_levels[VAR_18].vddc = VAR_5->vddc;
   if (VAR_4->performance_levels[VAR_18].vddci > VAR_5->vddci)
    VAR_4->performance_levels[VAR_18].vddci = VAR_5->vddci;
  }
 }


 FUNC_3(&VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk,
       &VAR_13);
 FUNC_3(&VAR_2->pm.dpm.dyn_state.vddci_dependency_on_mclk,
       &VAR_14);
 FUNC_3(&VAR_2->pm.dpm.dyn_state.vddc_dependency_on_mclk,
       &VAR_15);

 for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
  if (VAR_13) {
   if (VAR_4->performance_levels[VAR_18].sclk > VAR_13)
    VAR_4->performance_levels[VAR_18].sclk = VAR_13;
  }
  if (VAR_14) {
   if (VAR_4->performance_levels[VAR_18].mclk > VAR_14)
    VAR_4->performance_levels[VAR_18].mclk = VAR_14;
  }
  if (VAR_15) {
   if (VAR_4->performance_levels[VAR_18].mclk > VAR_15)
    VAR_4->performance_levels[VAR_18].mclk = VAR_15;
  }
  if (VAR_17) {
   if (VAR_4->performance_levels[VAR_18].mclk > VAR_17)
    VAR_4->performance_levels[VAR_18].mclk = VAR_17;
  }
  if (VAR_16) {
   if (VAR_4->performance_levels[VAR_18].sclk > VAR_16)
    VAR_4->performance_levels[VAR_18].sclk = VAR_16;
  }
 }



 if (VAR_6) {
  VAR_8 = VAR_4->performance_levels[VAR_4->performance_level_count - 1].mclk;
  VAR_11 = VAR_4->performance_levels[VAR_4->performance_level_count - 1].vddci;
 } else {
  VAR_8 = VAR_4->performance_levels[0].mclk;
  VAR_11 = VAR_4->performance_levels[0].vddci;
 }

 if (VAR_7) {
  VAR_9 = VAR_4->performance_levels[VAR_4->performance_level_count - 1].sclk;
  VAR_10 = VAR_4->performance_levels[VAR_4->performance_level_count - 1].vddc;
 } else {
  VAR_9 = VAR_4->performance_levels[0].sclk;
  VAR_10 = VAR_4->performance_levels[0].vddc;
 }

 if (VAR_3->vce_active) {
  if (VAR_9 < VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].sclk)
   VAR_9 = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].sclk;
  if (VAR_8 < VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].mclk)
   VAR_8 = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].mclk;
 }


 VAR_4->performance_levels[0].sclk = VAR_9;
 VAR_4->performance_levels[0].mclk = VAR_8;
 VAR_4->performance_levels[0].vddc = VAR_10;
 VAR_4->performance_levels[0].vddci = VAR_11;

 if (VAR_7) {
  VAR_9 = VAR_4->performance_levels[0].sclk;
  for (VAR_18 = 1; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   if (VAR_9 < VAR_4->performance_levels[VAR_18].sclk)
    VAR_9 = VAR_4->performance_levels[VAR_18].sclk;
  }
  for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   VAR_4->performance_levels[VAR_18].sclk = VAR_9;
   VAR_4->performance_levels[VAR_18].vddc = VAR_10;
  }
 } else {
  for (VAR_18 = 1; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   if (VAR_4->performance_levels[VAR_18].sclk < VAR_4->performance_levels[VAR_18 - 1].sclk)
    VAR_4->performance_levels[VAR_18].sclk = VAR_4->performance_levels[VAR_18 - 1].sclk;
   if (VAR_4->performance_levels[VAR_18].vddc < VAR_4->performance_levels[VAR_18 - 1].vddc)
    VAR_4->performance_levels[VAR_18].vddc = VAR_4->performance_levels[VAR_18 - 1].vddc;
  }
 }

 if (VAR_6) {
  VAR_8 = VAR_4->performance_levels[0].mclk;
  for (VAR_18 = 1; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   if (VAR_8 < VAR_4->performance_levels[VAR_18].mclk)
    VAR_8 = VAR_4->performance_levels[VAR_18].mclk;
  }
  for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   VAR_4->performance_levels[VAR_18].mclk = VAR_8;
   VAR_4->performance_levels[VAR_18].vddci = VAR_11;
  }
 } else {
  for (VAR_18 = 1; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
   if (VAR_4->performance_levels[VAR_18].mclk < VAR_4->performance_levels[VAR_18 - 1].mclk)
    VAR_4->performance_levels[VAR_18].mclk = VAR_4->performance_levels[VAR_18 - 1].mclk;
   if (VAR_4->performance_levels[VAR_18].vddci < VAR_4->performance_levels[VAR_18 - 1].vddci)
    VAR_4->performance_levels[VAR_18].vddci = VAR_4->performance_levels[VAR_18 - 1].vddci;
  }
 }

 for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++)
  FUNC_0(VAR_2, VAR_5,
           &VAR_4->performance_levels[VAR_18]);

 for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
  if (VAR_4->performance_levels[VAR_18].vddc < VAR_12)
   VAR_4->performance_levels[VAR_18].vddc = VAR_12;
  FUNC_2(&VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk,
         VAR_4->performance_levels[VAR_18].sclk,
         VAR_5->vddc, &VAR_4->performance_levels[VAR_18].vddc);
  FUNC_2(&VAR_2->pm.dpm.dyn_state.vddci_dependency_on_mclk,
         VAR_4->performance_levels[VAR_18].mclk,
         VAR_5->vddci, &VAR_4->performance_levels[VAR_18].vddci);
  FUNC_2(&VAR_2->pm.dpm.dyn_state.vddc_dependency_on_mclk,
         VAR_4->performance_levels[VAR_18].mclk,
         VAR_5->vddc, &VAR_4->performance_levels[VAR_18].vddc);
  FUNC_2(&VAR_2->pm.dpm.dyn_state.vddc_dependency_on_dispclk,
         VAR_2->clock.current_dispclk,
         VAR_5->vddc, &VAR_4->performance_levels[VAR_18].vddc);
 }

 for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
  FUNC_1(VAR_2,
           VAR_5->vddc, VAR_5->vddci,
           &VAR_4->performance_levels[VAR_18].vddc,
           &VAR_4->performance_levels[VAR_18].vddci);
 }

 VAR_4->dc_compatible = 1;
 for (VAR_18 = 0; VAR_18 < VAR_4->performance_level_count; VAR_18++) {
  if (VAR_4->performance_levels[VAR_18].vddc > VAR_2->pm.dpm.dyn_state.max_clock_voltage_on_dc.vddc)
   VAR_4->dc_compatible = 0;
 }
}
