
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_6__ {int ulClockFreq; int ulComputeClockFlag; } ;
struct TYPE_7__ {int ucMclkDPMState; TYPE_2__ ulClock; } ;
struct TYPE_8__ {TYPE_3__ asDPMMCReg; } ;
typedef TYPE_4__ DYNAMICE_MEMORY_SETTINGS_PARAMETER_V2_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;

int FUNC_2(struct pp_hwmgr *VAR_4, uint32_t VAR_5,
         uint8_t VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_4->adev;
 DYNAMICE_MEMORY_SETTINGS_PARAMETER_V2_1 VAR_8;
 int VAR_9;

 VAR_8.asDPMMCReg.ulClock.ulClockFreq =
  VAR_5 & VAR_3;
 VAR_8.asDPMMCReg.ulClock.ulComputeClockFlag =
  VAR_0;
 VAR_8.asDPMMCReg.ucMclkDPMState = VAR_6;

 VAR_9 = FUNC_1(VAR_7->mode_info.atom_context,
   FUNC_0(VAR_1, VAR_2),
  (uint32_t *)&VAR_8);

 return VAR_9;
}
