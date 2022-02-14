
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_10__ {int FanPwmMin; int FanStartTemp; int FanStopTemp; int FanZeroRpmEnable; int FanGainHbm; int FanGainPlx; int FanGainVrMvdd; int FanGainVrVddc; int FanGainLiquid; int FanGainHotspot; int FanGainEdge; void* FanTargetGfxclk; scalar_t__ FanTargetTemperature; void* FanAcousticLimitRpm; int FanThrottlingRpm; void* FanMaximumRpm; } ;
struct TYPE_9__ {TYPE_5__ pp_table; } ;
struct vega10_hwmgr {TYPE_4__ smc_state_table; TYPE_1__* smu_features; } ;
struct TYPE_7__ {int usPWMMin; int usZeroRPMStartTemperature; int usZeroRPMStopTemperature; int ucEnableZeroRPM; int usFanGainHbm; int usFanGainPlx; int usFanGainVrMvdd; int usFanGainVrVddc; int usFanGainLiquid; int usFanGainHotspot; int usFanGainEdge; scalar_t__ ulTargetGfxClk; scalar_t__ usTMax; scalar_t__ ulMinFanSCLKAcousticLimit; int usFanRPMMaxLimit; scalar_t__ usMaxFanRPM; } ;
struct TYPE_8__ {TYPE_2__ advanceFanControlParameters; } ;
struct pp_hwmgr {TYPE_3__ thermal_controller; struct vega10_hwmgr* backend; } ;
struct TYPE_6__ {int supported; } ;
typedef TYPE_5__ PPTable_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int *,int ,int) ;

int FUNC_3(struct pp_hwmgr *VAR_3)
{
 int VAR_4;
 struct vega10_hwmgr *VAR_5 = VAR_3->backend;
 PPTable_t *VAR_6 = &(VAR_5->smc_state_table.pp_table);

 if (!VAR_5->smu_features[VAR_0].supported)
  return 0;

 VAR_6->FanMaximumRpm = (uint16_t)VAR_3->thermal_controller.
   advanceFanControlParameters.usMaxFanRPM;
 VAR_6->FanThrottlingRpm = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanRPMMaxLimit;
 VAR_6->FanAcousticLimitRpm = (uint16_t)(VAR_3->thermal_controller.
   advanceFanControlParameters.ulMinFanSCLKAcousticLimit);
 VAR_6->FanTargetTemperature = VAR_3->thermal_controller.
   advanceFanControlParameters.usTMax;

 FUNC_1(VAR_3,
    VAR_1,
    (uint32_t)VAR_6->FanTargetTemperature);

 VAR_6->FanPwmMin = VAR_3->thermal_controller.
   advanceFanControlParameters.usPWMMin * 255 / 100;
 VAR_6->FanTargetGfxclk = (uint16_t)(VAR_3->thermal_controller.
   advanceFanControlParameters.ulTargetGfxClk);
 VAR_6->FanGainEdge = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainEdge;
 VAR_6->FanGainHotspot = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainHotspot;
 VAR_6->FanGainLiquid = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainLiquid;
 VAR_6->FanGainVrVddc = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainVrVddc;
 VAR_6->FanGainVrMvdd = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainVrMvdd;
 VAR_6->FanGainPlx = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainPlx;
 VAR_6->FanGainHbm = VAR_3->thermal_controller.
   advanceFanControlParameters.usFanGainHbm;
 VAR_6->FanZeroRpmEnable = VAR_3->thermal_controller.
   advanceFanControlParameters.ucEnableZeroRPM;
 VAR_6->FanStopTemp = VAR_3->thermal_controller.
   advanceFanControlParameters.usZeroRPMStopTemperature;
 VAR_6->FanStartTemp = VAR_3->thermal_controller.
   advanceFanControlParameters.usZeroRPMStartTemperature;

 VAR_4 = FUNC_2(VAR_3,
    (uint8_t *)(&(VAR_5->smc_state_table.pp_table)),
    VAR_2, 0);
 if (VAR_4)
  FUNC_0("Failed to update Fan Control Table in PPTable!");

 return VAR_4;
}
