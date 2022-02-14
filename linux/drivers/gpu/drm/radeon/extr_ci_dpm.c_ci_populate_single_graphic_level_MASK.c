
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int phase_shedding_limits_table; int vddc_dependency_on_sclk; } ;
struct TYPE_8__ {TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct ci_power_info {scalar_t__ caps_sclk_ds; scalar_t__ vddc_phase_shed_control; } ;
struct TYPE_10__ {int MinVddc; int SclkFrequency; int Flags; int MinVddcPhases; int CcPwrDynRm; int CcPwrDynRm1; int EnabledForThrottle; int CgSpllFuncCntl3; int CgSpllFuncCntl4; int SpllSpreadSpectrum; int SpllSpreadSpectrum2; int ActivityLevel; int DisplayWatermark; int DeepSleepDivId; scalar_t__ PowerThrottle; scalar_t__ VoltageDownH; scalar_t__ DownH; scalar_t__ UpH; } ;
typedef TYPE_4__ SMU7_Discrete_GraphicsLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int,TYPE_4__*) ;
 int FUNC_1 (struct radeon_device*,int *,int,int*) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int,int ) ;
 int FUNC_4 (struct radeon_device*,int *,int,int*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_3,
         u32 VAR_4,
         u16 VAR_5,
         SMU7_Discrete_GraphicsLevel *VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_3,
         &VAR_3->pm.dpm.dyn_state.vddc_dependency_on_sclk,
         VAR_4, &VAR_6->MinVddc);
 if (VAR_8)
  return VAR_8;

 VAR_6->SclkFrequency = VAR_4;

 VAR_6->Flags = 0;
 VAR_6->MinVddcPhases = 1;

 if (VAR_7->vddc_phase_shed_control)
  FUNC_4(VAR_3,
            &VAR_3->pm.dpm.dyn_state.phase_shedding_limits_table,
            VAR_4,
            &VAR_6->MinVddcPhases);

 VAR_6->ActivityLevel = VAR_5;

 VAR_6->CcPwrDynRm = 0;
 VAR_6->CcPwrDynRm1 = 0;
 VAR_6->EnabledForThrottle = 1;
 VAR_6->UpH = 0;
 VAR_6->DownH = 0;
 VAR_6->VoltageDownH = 0;
 VAR_6->PowerThrottle = 0;

 if (VAR_7->caps_sclk_ds)
  VAR_6->DeepSleepDivId = FUNC_3(VAR_3,
             VAR_4,
             VAR_0);

 VAR_6->DisplayWatermark = VAR_1;

 VAR_6->Flags = FUNC_6(VAR_6->Flags);
 VAR_6->MinVddc = FUNC_6(VAR_6->MinVddc * VAR_2);
 VAR_6->MinVddcPhases = FUNC_6(VAR_6->MinVddcPhases);
 VAR_6->SclkFrequency = FUNC_6(VAR_6->SclkFrequency);
 VAR_6->ActivityLevel = FUNC_5(VAR_6->ActivityLevel);
 VAR_6->CgSpllFuncCntl3 = FUNC_6(VAR_6->CgSpllFuncCntl3);
 VAR_6->CgSpllFuncCntl4 = FUNC_6(VAR_6->CgSpllFuncCntl4);
 VAR_6->SpllSpreadSpectrum = FUNC_6(VAR_6->SpllSpreadSpectrum);
 VAR_6->SpllSpreadSpectrum2 = FUNC_6(VAR_6->SpllSpreadSpectrum2);
 VAR_6->CcPwrDynRm = FUNC_6(VAR_6->CcPwrDynRm);
 VAR_6->CcPwrDynRm1 = FUNC_6(VAR_6->CcPwrDynRm1);

 return 0;
}
