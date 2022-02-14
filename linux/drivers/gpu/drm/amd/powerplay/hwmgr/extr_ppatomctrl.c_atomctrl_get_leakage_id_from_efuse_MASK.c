
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_6__ {int usVoltageLevel; int ucVoltageMode; } ;
struct TYPE_5__ {int sASICSetVoltage; } ;
typedef TYPE_2__ SET_VOLTAGE_PS_ALLOCATION ;
typedef TYPE_3__ SET_VOLTAGE_PARAMETERS_V1_3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(struct pp_hwmgr *VAR_3, uint16_t *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_3->adev;
 SET_VOLTAGE_PS_ALLOCATION VAR_6;
 SET_VOLTAGE_PARAMETERS_V1_3 *VAR_7 =
   (SET_VOLTAGE_PARAMETERS_V1_3 *)&VAR_6.sASICSetVoltage;
 int VAR_8;

 VAR_7->ucVoltageMode = VAR_0;

 VAR_8 = FUNC_1(VAR_5->mode_info.atom_context,
   FUNC_0(VAR_1, VAR_2),
   (uint32_t *)VAR_7);

 *VAR_4 = VAR_7->usVoltageLevel;

 return VAR_8;
}
