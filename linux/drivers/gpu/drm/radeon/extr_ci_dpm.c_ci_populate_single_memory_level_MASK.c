
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_12__ {scalar_t__ entries; } ;
struct TYPE_8__ {int phase_shedding_limits_table; TYPE_6__ mvdd_dependency_on_mclk; TYPE_6__ vddci_dependency_on_mclk; TYPE_6__ vddc_dependency_on_mclk; } ;
struct TYPE_9__ {int new_active_crtc_count; TYPE_1__ dyn_state; } ;
struct TYPE_10__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct ci_power_info {scalar_t__ mclk_stutter_mode_threshold; int uvd_enabled; scalar_t__ mclk_strobe_mode_threshold; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mclk_edc_wr_enable_threshold; int dll_default_on; scalar_t__ mem_gddr5; scalar_t__ mclk_activity_target; scalar_t__ vddc_phase_shed_control; } ;
struct TYPE_11__ {int MinVddc; int MinVddci; int MinMvdd; int MinVddcPhases; int EnabledForThrottle; int DownH; int StutterEnable; int StrobeEnable; int EdcReadEnable; int EdcWriteEnable; int RttEnable; int StrobeRatio; int MclkFrequency; int MpllFuncCntl; int MpllFuncCntl_1; int MpllFuncCntl_2; int MpllAdFuncCntl; int MpllDqFuncCntl; int MclkPwrmgtCntl; int DllCntl; int MpllSs1; int MpllSs2; scalar_t__ ActivityLevel; int DisplayWatermark; scalar_t__ VoltageDownH; scalar_t__ UpH; } ;
typedef TYPE_4__ SMU7_Discrete_MemoryLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct radeon_device*,scalar_t__,TYPE_4__*,int,int) ;
 int FUNC_2 (struct radeon_device*,TYPE_6__*,scalar_t__,int*) ;
 struct ci_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int *,scalar_t__,int*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_7,
        u32 VAR_8,
        SMU7_Discrete_MemoryLevel *VAR_9)
{
 struct ci_power_info *VAR_10 = FUNC_3(VAR_7);
 int VAR_11;
 bool VAR_12;

 if (VAR_7->pm.dpm.dyn_state.vddc_dependency_on_mclk.entries) {
  VAR_11 = FUNC_2(VAR_7,
          &VAR_7->pm.dpm.dyn_state.vddc_dependency_on_mclk,
          VAR_8, &VAR_9->MinVddc);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_7->pm.dpm.dyn_state.vddci_dependency_on_mclk.entries) {
  VAR_11 = FUNC_2(VAR_7,
          &VAR_7->pm.dpm.dyn_state.vddci_dependency_on_mclk,
          VAR_8, &VAR_9->MinVddci);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_7->pm.dpm.dyn_state.mvdd_dependency_on_mclk.entries) {
  VAR_11 = FUNC_2(VAR_7,
          &VAR_7->pm.dpm.dyn_state.mvdd_dependency_on_mclk,
          VAR_8, &VAR_9->MinMvdd);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9->MinVddcPhases = 1;

 if (VAR_10->vddc_phase_shed_control)
  FUNC_4(VAR_7,
            &VAR_7->pm.dpm.dyn_state.phase_shedding_limits_table,
            VAR_8,
            &VAR_9->MinVddcPhases);

 VAR_9->EnabledForThrottle = 1;
 VAR_9->UpH = 0;
 VAR_9->DownH = 100;
 VAR_9->VoltageDownH = 0;
 VAR_9->ActivityLevel = (u16)VAR_10->mclk_activity_target;

 VAR_9->StutterEnable = 0;
 VAR_9->StrobeEnable = 0;
 VAR_9->EdcReadEnable = 0;
 VAR_9->EdcWriteEnable = 0;
 VAR_9->RttEnable = 0;

 VAR_9->DisplayWatermark = VAR_4;

 if (VAR_10->mclk_stutter_mode_threshold &&
     (VAR_8 <= VAR_10->mclk_stutter_mode_threshold) &&
     (VAR_10->uvd_enabled == 0) &&
     (FUNC_0(VAR_0) & VAR_5) &&
     (VAR_7->pm.dpm.new_active_crtc_count <= 2))
  VAR_9->StutterEnable = 1;

 if (VAR_10->mclk_strobe_mode_threshold &&
     (VAR_8 <= VAR_10->mclk_strobe_mode_threshold))
  VAR_9->StrobeEnable = 1;

 if (VAR_10->mem_gddr5) {
  VAR_9->StrobeRatio =
   FUNC_8(VAR_8, VAR_9->StrobeEnable);
  if (VAR_10->mclk_edc_enable_threshold &&
      (VAR_8 > VAR_10->mclk_edc_enable_threshold))
   VAR_9->EdcReadEnable = 1;

  if (VAR_10->mclk_edc_wr_enable_threshold &&
      (VAR_8 > VAR_10->mclk_edc_wr_enable_threshold))
   VAR_9->EdcWriteEnable = 1;

  if (VAR_9->StrobeEnable) {
   if (FUNC_8(VAR_8, 1) >=
       ((FUNC_0(VAR_3) >> 16) & 0xf))
    VAR_12 = ((FUNC_0(VAR_1) >> 1) & 0x1) ? 1 : 0;
   else
    VAR_12 = ((FUNC_0(VAR_2) >> 1) & 0x1) ? 1 : 0;
  } else {
   VAR_12 = VAR_10->dll_default_on;
  }
 } else {
  VAR_9->StrobeRatio = FUNC_7(VAR_8);
  VAR_12 = ((FUNC_0(VAR_1) >> 1) & 0x1) ? 1 : 0;
 }

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_9->StrobeEnable, VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_9->MinVddc = FUNC_6(VAR_9->MinVddc * VAR_6);
 VAR_9->MinVddcPhases = FUNC_6(VAR_9->MinVddcPhases);
 VAR_9->MinVddci = FUNC_6(VAR_9->MinVddci * VAR_6);
 VAR_9->MinMvdd = FUNC_6(VAR_9->MinMvdd * VAR_6);

 VAR_9->MclkFrequency = FUNC_6(VAR_9->MclkFrequency);
 VAR_9->ActivityLevel = FUNC_5(VAR_9->ActivityLevel);
 VAR_9->MpllFuncCntl = FUNC_6(VAR_9->MpllFuncCntl);
 VAR_9->MpllFuncCntl_1 = FUNC_6(VAR_9->MpllFuncCntl_1);
 VAR_9->MpllFuncCntl_2 = FUNC_6(VAR_9->MpllFuncCntl_2);
 VAR_9->MpllAdFuncCntl = FUNC_6(VAR_9->MpllAdFuncCntl);
 VAR_9->MpllDqFuncCntl = FUNC_6(VAR_9->MpllDqFuncCntl);
 VAR_9->MclkPwrmgtCntl = FUNC_6(VAR_9->MclkPwrmgtCntl);
 VAR_9->DllCntl = FUNC_6(VAR_9->DllCntl);
 VAR_9->MpllSs1 = FUNC_6(VAR_9->MpllSs1);
 VAR_9->MpllSs2 = FUNC_6(VAR_9->MpllSs2);

 return 0;
}
