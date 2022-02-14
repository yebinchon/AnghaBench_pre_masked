
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int platformCaps; } ;
struct TYPE_9__ {int usPWMMin; int usTMed; int usTMin; int usTHigh; int usPWMMed; int usPWMHigh; int usTMax; int ucTHyst; int ulCycleDelay; scalar_t__ ulMinFanSCLKAcousticLimit; scalar_t__ ucMinimumPWMLimit; } ;
struct TYPE_7__ {scalar_t__ bNoFan; } ;
struct TYPE_10__ {TYPE_3__ advanceFanControlParameters; TYPE_1__ fanInfo; } ;
struct pp_hwmgr {TYPE_5__ platform_descriptor; TYPE_4__ thermal_controller; int device; scalar_t__ adev; scalar_t__ smu_backend; } ;
struct TYPE_8__ {scalar_t__ fan_table_start; } ;
struct fiji_smumgr {TYPE_2__ smu7_data; } ;
struct amdgpu_device {int dummy; } ;
typedef int fan_table ;
struct TYPE_12__ {scalar_t__ TempSrc; void* FdoMax; int RefreshPeriod; void* TempRespLim; void* HystSlope; void* HystUp; void* HystDown; void* FdoMin; void* Slope2; void* Slope1; void* TempMax; void* TempMed; void* TempMin; int member_0; } ;
typedef TYPE_6__ SMU73_Discrete_FanTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct amdgpu_device*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pp_hwmgr*,scalar_t__,scalar_t__*,int,int ) ;
 int FUNC_7 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_10)
{
 struct fiji_smumgr *VAR_11 = (struct fiji_smumgr *)(VAR_10->smu_backend);

 SMU73_Discrete_FanTable VAR_12 = { VAR_3 };
 uint32_t VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17;
 uint16_t VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21;
 int VAR_22;
 uint64_t VAR_23;

 if (VAR_10->thermal_controller.fanInfo.bNoFan) {
  FUNC_5(VAR_10->platform_descriptor.platformCaps,
   VAR_5);
  return 0;
 }

 if (VAR_11->smu7_data.fan_table_start == 0) {
  FUNC_5(VAR_10->platform_descriptor.platformCaps,
    VAR_5);
  return 0;
 }

 VAR_13 = FUNC_0(VAR_10->device, VAR_0,
   VAR_1, VAR_4);

 if (VAR_13 == 0) {
  FUNC_5(VAR_10->platform_descriptor.platformCaps,
    VAR_5);
  return 0;
 }

 VAR_23 = VAR_10->thermal_controller.advanceFanControlParameters.
   usPWMMin * VAR_13;
 FUNC_4(VAR_23, 10000);
 VAR_18 = (uint16_t)VAR_23;

 VAR_14 = VAR_10->thermal_controller.advanceFanControlParameters.usTMed -
   VAR_10->thermal_controller.advanceFanControlParameters.usTMin;
 VAR_15 = VAR_10->thermal_controller.advanceFanControlParameters.usTHigh -
   VAR_10->thermal_controller.advanceFanControlParameters.usTMed;

 VAR_16 = VAR_10->thermal_controller.advanceFanControlParameters.usPWMMed -
   VAR_10->thermal_controller.advanceFanControlParameters.usPWMMin;
 VAR_17 = VAR_10->thermal_controller.advanceFanControlParameters.usPWMHigh -
   VAR_10->thermal_controller.advanceFanControlParameters.usPWMMed;

 VAR_19 = (uint16_t)((50 + ((16 * VAR_13 * VAR_16) / VAR_14)) / 100);
 VAR_20 = (uint16_t)((50 + ((16 * VAR_13 * VAR_17) / VAR_15)) / 100);

 VAR_12.TempMin = FUNC_2((50 + VAR_10->
   thermal_controller.advanceFanControlParameters.usTMin) / 100);
 VAR_12.TempMed = FUNC_2((50 + VAR_10->
   thermal_controller.advanceFanControlParameters.usTMed) / 100);
 VAR_12.TempMax = FUNC_2((50 + VAR_10->
   thermal_controller.advanceFanControlParameters.usTMax) / 100);

 VAR_12.Slope1 = FUNC_2(VAR_19);
 VAR_12.Slope2 = FUNC_2(VAR_20);

 VAR_12.FdoMin = FUNC_2(VAR_18);

 VAR_12.HystDown = FUNC_2(VAR_10->
   thermal_controller.advanceFanControlParameters.ucTHyst);

 VAR_12.HystUp = FUNC_2(1);

 VAR_12.HystSlope = FUNC_2(1);

 VAR_12.TempRespLim = FUNC_2(5);

 VAR_21 = FUNC_1((struct amdgpu_device *)VAR_10->adev);

 VAR_12.RefreshPeriod = FUNC_3((VAR_10->
   thermal_controller.advanceFanControlParameters.ulCycleDelay *
   VAR_21) / 1600);

 VAR_12.FdoMax = FUNC_2((uint16_t)VAR_13);

 VAR_12.TempSrc = (uint8_t)FUNC_0(
   VAR_10->device, VAR_0,
   VAR_2, VAR_9);

 VAR_22 = FUNC_6(VAR_10, VAR_11->smu7_data.fan_table_start,
   (uint8_t *)&VAR_12, (uint32_t)sizeof(VAR_12),
   VAR_8);

 if (!VAR_22 && VAR_10->thermal_controller.
   advanceFanControlParameters.ucMinimumPWMLimit)
  VAR_22 = FUNC_7(VAR_10,
    VAR_6,
    VAR_10->thermal_controller.
    advanceFanControlParameters.ucMinimumPWMLimit);

 if (!VAR_22 && VAR_10->thermal_controller.
   advanceFanControlParameters.ulMinFanSCLKAcousticLimit)
  VAR_22 = FUNC_7(VAR_10,
    VAR_7,
    VAR_10->thermal_controller.
    advanceFanControlParameters.ulMinFanSCLKAcousticLimit);

 if (VAR_22)
  FUNC_5(VAR_10->platform_descriptor.platformCaps,
    VAR_5);

 return 0;
}
