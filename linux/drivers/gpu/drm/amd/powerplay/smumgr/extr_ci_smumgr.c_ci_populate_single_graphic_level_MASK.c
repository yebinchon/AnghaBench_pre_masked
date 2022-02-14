
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int sclk_down_hyst; int sclk_up_hyst; int sclk_activity; } ;
struct smu7_hwmgr {TYPE_2__ current_profile_setting; scalar_t__ vddc_phase_shed_control; } ;
struct TYPE_6__ {int platformCaps; } ;
struct TYPE_4__ {int vddc_phase_shed_limits_table; int vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; TYPE_1__ dyn_state; scalar_t__ backend; } ;
struct SMU7_Discrete_GraphicsLevel {int MinVddc; int SclkFrequency; int MinVddcPhases; int CcPwrDynRm; int CcPwrDynRm1; int EnabledForThrottle; int CgSpllFuncCntl3; int CgSpllFuncCntl4; int SpllSpreadSpectrum; int SpllSpreadSpectrum2; int ActivityLevel; int DisplayWatermark; int DeepSleepDivId; scalar_t__ PowerThrottle; scalar_t__ VoltageDownH; int DownH; int UpH; scalar_t__ EnabledForActivity; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct pp_hwmgr*,int,struct SMU7_Discrete_GraphicsLevel*) ;
 int FUNC_4 (struct pp_hwmgr*,int ,int,int*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct pp_hwmgr*,int ,int,int*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct pp_hwmgr *VAR_4,
  uint32_t VAR_5, struct SMU7_Discrete_GraphicsLevel *VAR_6)
{
 int VAR_7;
 struct smu7_hwmgr *VAR_8 = (struct smu7_hwmgr *)(VAR_4->backend);


 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6);


 VAR_7 = FUNC_4(VAR_4,
   VAR_4->dyn_state.vddc_dependency_on_sclk, VAR_5,
   (uint32_t *)(&VAR_6->MinVddc));
 if (VAR_7) {
  FUNC_8("vdd_dep_on_sclk table is NULL\n");
  return VAR_7;
 }

 VAR_6->SclkFrequency = VAR_5;
 VAR_6->MinVddcPhases = 1;

 if (VAR_8->vddc_phase_shed_control)
  FUNC_6(VAR_4,
    VAR_4->dyn_state.vddc_phase_shed_limits_table,
    VAR_5,
    &VAR_6->MinVddcPhases);

 VAR_6->ActivityLevel = VAR_8->current_profile_setting.sclk_activity;
 VAR_6->CcPwrDynRm = 0;
 VAR_6->CcPwrDynRm1 = 0;
 VAR_6->EnabledForActivity = 0;

 VAR_6->EnabledForThrottle = 1;
 VAR_6->UpH = VAR_8->current_profile_setting.sclk_up_hyst;
 VAR_6->DownH = VAR_8->current_profile_setting.sclk_down_hyst;
 VAR_6->VoltageDownH = 0;
 VAR_6->PowerThrottle = 0;


 if (FUNC_7(VAR_4->platform_descriptor.platformCaps,
   VAR_1))
  VAR_6->DeepSleepDivId =
    FUNC_5(VAR_5,
      VAR_0);


 VAR_6->DisplayWatermark = VAR_2;

 if (0 == VAR_7) {
  VAR_6->MinVddc = FUNC_2(VAR_6->MinVddc * VAR_3);
  FUNC_0(VAR_6->MinVddcPhases);
  FUNC_0(VAR_6->SclkFrequency);
  FUNC_1(VAR_6->ActivityLevel);
  FUNC_0(VAR_6->CgSpllFuncCntl3);
  FUNC_0(VAR_6->CgSpllFuncCntl4);
  FUNC_0(VAR_6->SpllSpreadSpectrum);
  FUNC_0(VAR_6->SpllSpreadSpectrum2);
  FUNC_0(VAR_6->CcPwrDynRm);
  FUNC_0(VAR_6->CcPwrDynRm1);
 }

 return VAR_7;
}
