
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {TYPE_2__* entries; } ;
struct TYPE_12__ {TYPE_3__ vddc_dependency_on_sclk; } ;
struct TYPE_13__ {scalar_t__ backbias_response_time; TYPE_4__ dyn_state; } ;
struct TYPE_14__ {TYPE_5__ dpm; } ;
struct radeon_device {TYPE_6__ pm; } ;
struct TYPE_9__ {int supported; } ;
struct ci_power_info {scalar_t__ voltage_control; scalar_t__ vddc_phase_shed_control; TYPE_1__ ulv; } ;
struct TYPE_15__ {int VddcPhase; scalar_t__ VddcOffset; void* CcPwrDynRm1; void* CcPwrDynRm; scalar_t__ VddcOffsetVid; } ;
struct TYPE_10__ {scalar_t__ v; } ;
typedef TYPE_7__ SMU7_Discrete_Ulv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_3,
     SMU7_Discrete_Ulv *VAR_4)
{
 struct ci_power_info *VAR_5 = FUNC_0(VAR_3);
 u16 VAR_6 = VAR_3->pm.dpm.backbias_response_time;

 VAR_4->CcPwrDynRm = 0;
 VAR_4->CcPwrDynRm1 = 0;

 if (VAR_6 == 0) {
  VAR_5->ulv.supported = 0;
  return 0;
 }

 if (VAR_5->voltage_control != VAR_0) {
  if (VAR_6 > VAR_3->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[0].v)
   VAR_4->VddcOffset = 0;
  else
   VAR_4->VddcOffset =
    VAR_3->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[0].v - VAR_6;
 } else {
  if (VAR_6 > VAR_3->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[0].v)
   VAR_4->VddcOffsetVid = 0;
  else
   VAR_4->VddcOffsetVid = (u8)
    ((VAR_3->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[0].v - VAR_6) *
     VAR_2 / VAR_1);
 }
 VAR_4->VddcPhase = VAR_5->vddc_phase_shed_control ? 0 : 1;

 VAR_4->CcPwrDynRm = FUNC_2(VAR_4->CcPwrDynRm);
 VAR_4->CcPwrDynRm1 = FUNC_2(VAR_4->CcPwrDynRm1);
 VAR_4->VddcOffset = FUNC_1(VAR_4->VddcOffset);

 return 0;
}
