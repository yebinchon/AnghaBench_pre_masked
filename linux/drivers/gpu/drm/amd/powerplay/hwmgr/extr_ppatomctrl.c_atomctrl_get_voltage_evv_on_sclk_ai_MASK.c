
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_6__ {int ulVoltageLevel; } ;
struct TYPE_5__ {int ulSCLKFreq; int usVoltageLevel; int ucVoltageMode; int ucVoltageType; } ;
typedef TYPE_2__ GET_VOLTAGE_INFO_INPUT_PARAMETER_V1_3 ;
typedef TYPE_3__ GET_EVV_VOLTAGE_INFO_OUTPUT_PARAMETER_V1_3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct pp_hwmgr *VAR_3, uint8_t VAR_4,
    uint32_t VAR_5, uint16_t VAR_6, uint32_t *VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_3->adev;
 int VAR_9;
 GET_VOLTAGE_INFO_INPUT_PARAMETER_V1_3 VAR_10;

 VAR_10.ucVoltageType = VAR_4;
 VAR_10.ucVoltageMode = VAR_0;
 VAR_10.usVoltageLevel = FUNC_2(VAR_6);
 VAR_10.ulSCLKFreq = FUNC_3(VAR_5);

 VAR_9 = FUNC_1(VAR_8->mode_info.atom_context,
   FUNC_0(VAR_1, VAR_2),
   (uint32_t *)&VAR_10);

 *VAR_7 = VAR_9 ? 0 :
  FUNC_4(((GET_EVV_VOLTAGE_INFO_OUTPUT_PARAMETER_V1_3 *)(&VAR_10))->ulVoltageLevel);

 return VAR_9;
}
