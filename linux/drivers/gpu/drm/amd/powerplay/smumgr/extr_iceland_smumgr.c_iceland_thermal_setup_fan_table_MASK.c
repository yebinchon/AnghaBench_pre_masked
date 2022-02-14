
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct smu7_smumgr {scalar_t__ fan_table_start; } ;
struct TYPE_8__ {int usPWMMin; int usTMed; int usTMin; int usTHigh; int usPWMMed; int usPWMHigh; int usTMax; int ucTHyst; int ulCycleDelay; } ;
struct TYPE_6__ {scalar_t__ bNoFan; } ;
struct TYPE_9__ {TYPE_3__ advanceFanControlParameters; TYPE_1__ fanInfo; } ;
struct TYPE_7__ {int platformCaps; } ;
struct pp_hwmgr {int device; TYPE_4__ thermal_controller; scalar_t__ adev; TYPE_2__ platform_descriptor; scalar_t__ smu_backend; } ;
struct amdgpu_device {int dummy; } ;
typedef int fan_table ;
struct TYPE_10__ {scalar_t__ TempSrc; void* FdoMax; int RefreshPeriod; void* TempRespLim; void* HystSlope; void* HystUp; void* HystDown; void* FdoMin; void* Slope2; void* Slope1; void* TempMax; void* TempMed; void* TempMin; int member_0; } ;
typedef TYPE_5__ SMU71_Discrete_FanTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct amdgpu_device*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct pp_hwmgr*,scalar_t__,scalar_t__*,int,int ) ;

int FUNC_8(struct pp_hwmgr *VAR_8)
{
 struct smu7_smumgr *VAR_9 = (struct smu7_smumgr *)(VAR_8->smu_backend);
 SMU71_Discrete_FanTable VAR_10 = { VAR_3 };
 uint32_t VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
 uint16_t VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19;
 int VAR_20;
 uint64_t VAR_21;

 if (!FUNC_5(VAR_8->platform_descriptor.platformCaps, VAR_5))
  return 0;

 if (VAR_8->thermal_controller.fanInfo.bNoFan) {
  FUNC_6(VAR_8->platform_descriptor.platformCaps,
   VAR_5);
  return 0;
 }

 if (0 == VAR_9->fan_table_start) {
  FUNC_6(VAR_8->platform_descriptor.platformCaps, VAR_5);
  return 0;
 }

 VAR_11 = FUNC_0(VAR_8->device, VAR_0, VAR_1, VAR_4);

 if (0 == VAR_11) {
  FUNC_6(VAR_8->platform_descriptor.platformCaps, VAR_5);
  return 0;
 }

 VAR_21 = VAR_8->thermal_controller.advanceFanControlParameters.usPWMMin * VAR_11;
 FUNC_4(VAR_21, 10000);
 VAR_16 = (uint16_t)VAR_21;

 VAR_12 = VAR_8->thermal_controller.advanceFanControlParameters.usTMed - VAR_8->thermal_controller.advanceFanControlParameters.usTMin;
 VAR_13 = VAR_8->thermal_controller.advanceFanControlParameters.usTHigh - VAR_8->thermal_controller.advanceFanControlParameters.usTMed;

 VAR_14 = VAR_8->thermal_controller.advanceFanControlParameters.usPWMMed - VAR_8->thermal_controller.advanceFanControlParameters.usPWMMin;
 VAR_15 = VAR_8->thermal_controller.advanceFanControlParameters.usPWMHigh - VAR_8->thermal_controller.advanceFanControlParameters.usPWMMed;

 VAR_17 = (uint16_t)((50 + ((16 * VAR_11 * VAR_14) / VAR_12)) / 100);
 VAR_18 = (uint16_t)((50 + ((16 * VAR_11 * VAR_15) / VAR_13)) / 100);

 VAR_10.TempMin = FUNC_2((50 + VAR_8->thermal_controller.advanceFanControlParameters.usTMin) / 100);
 VAR_10.TempMed = FUNC_2((50 + VAR_8->thermal_controller.advanceFanControlParameters.usTMed) / 100);
 VAR_10.TempMax = FUNC_2((50 + VAR_8->thermal_controller.advanceFanControlParameters.usTMax) / 100);

 VAR_10.Slope1 = FUNC_2(VAR_17);
 VAR_10.Slope2 = FUNC_2(VAR_18);

 VAR_10.FdoMin = FUNC_2(VAR_16);

 VAR_10.HystDown = FUNC_2(VAR_8->thermal_controller.advanceFanControlParameters.ucTHyst);

 VAR_10.HystUp = FUNC_2(1);

 VAR_10.HystSlope = FUNC_2(1);

 VAR_10.TempRespLim = FUNC_2(5);

 VAR_19 = FUNC_1((struct amdgpu_device *)VAR_8->adev);

 VAR_10.RefreshPeriod = FUNC_3((VAR_8->thermal_controller.advanceFanControlParameters.ulCycleDelay * VAR_19) / 1600);

 VAR_10.FdoMax = FUNC_2((uint16_t)VAR_11);

 VAR_10.TempSrc = (uint8_t)FUNC_0(VAR_8->device, VAR_0, VAR_2, VAR_7);



 VAR_20 = FUNC_7(VAR_8, VAR_9->fan_table_start, (uint8_t *)&VAR_10, (uint32_t)sizeof(VAR_10), VAR_6);

 return 0;
}
