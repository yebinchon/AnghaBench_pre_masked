
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_7__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_8__ {void* usPcc_fcw_slew_frac; void* usSsc_fcw_slew_frac; void* usPcc_fcw_int; void* usSsc_fcw1_int; void* usSsc_fcw1_frac; int ucSscEnable; int ucSclkPllRange; int ucSclkVcoMode; int ucSclkPostDiv; void* usSclk_fcw_int; void* usSclk_fcw_frac; } ;
typedef TYPE_3__ pp_atomctrl_clock_dividers_ai ;
struct TYPE_6__ {int ucPostDiv; int ulClock; } ;
struct TYPE_9__ {int usPcc_fcw_slew_frac; int usSsc_fcw_slew_frac; int usPcc_fcw_int; int usSsc_fcw1_int; int usSsc_fcw1_frac; int ucSscEnable; int ucSclkPllRange; int ucSclkVcoMode; int ucSclkPostDiv; int usSclk_fcw_int; int usSclk_fcw_frac; TYPE_1__ ulClock; } ;
typedef TYPE_4__ COMPUTE_GPU_CLOCK_OUTPUT_PARAMETERS_V1_7 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

int FUNC_4(struct pp_hwmgr *VAR_3,
  uint32_t VAR_4,
  pp_atomctrl_clock_dividers_ai *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->adev;
 COMPUTE_GPU_CLOCK_OUTPUT_PARAMETERS_V1_7 VAR_7;
 int VAR_8;

 VAR_7.ulClock.ulClock = FUNC_2(VAR_4);
 VAR_7.ulClock.ucPostDiv = VAR_1;

 VAR_8 = FUNC_1(VAR_6->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_2),
  (uint32_t *)&VAR_7);

 if (0 == VAR_8) {
  VAR_5->usSclk_fcw_frac = FUNC_3(VAR_7.usSclk_fcw_frac);
  VAR_5->usSclk_fcw_int = FUNC_3(VAR_7.usSclk_fcw_int);
  VAR_5->ucSclkPostDiv = VAR_7.ucSclkPostDiv;
  VAR_5->ucSclkVcoMode = VAR_7.ucSclkVcoMode;
  VAR_5->ucSclkPllRange = VAR_7.ucSclkPllRange;
  VAR_5->ucSscEnable = VAR_7.ucSscEnable;
  VAR_5->usSsc_fcw1_frac = FUNC_3(VAR_7.usSsc_fcw1_frac);
  VAR_5->usSsc_fcw1_int = FUNC_3(VAR_7.usSsc_fcw1_int);
  VAR_5->usPcc_fcw_int = FUNC_3(VAR_7.usPcc_fcw_int);
  VAR_5->usSsc_fcw_slew_frac = FUNC_3(VAR_7.usSsc_fcw_slew_frac);
  VAR_5->usPcc_fcw_slew_frac = FUNC_3(VAR_7.usPcc_fcw_slew_frac);
 }
 return VAR_8;
}
