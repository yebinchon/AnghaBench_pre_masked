
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


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int platformCaps; scalar_t__ TDPODLimit; } ;
struct TYPE_9__ {int ulMaxRPM; scalar_t__ ulMinRPM; } ;
struct TYPE_10__ {scalar_t__ ucType; TYPE_1__ fanInfo; } ;
struct pp_hwmgr {TYPE_4__ platform_descriptor; TYPE_2__ thermal_controller; scalar_t__ pptable; } ;
struct phm_ppt_v3_information {scalar_t__ uc_thermal_controller_type; int * smc_pptable; int power_saving_clock_min; int power_saving_clock_max; void* us_software_shutdown_temp; void* us_od_powersave_power_limit; void* us_od_turbo_power_limit; void* us_boost_power_limit; void* us_small_power_limit2; void* us_small_power_limit1; int od_settings_min; int od_settings_max; int od_feature_capabilities; } ;
struct TYPE_15__ {int FanMaximumRpm; } ;
struct TYPE_13__ {int ucTableRevision; int PowerSavingClockMin; int PowerSavingClockMax; int PowerSavingClockCount; } ;
struct TYPE_11__ {int ucODTableRevision; int * ODSettingsMax; int * ODSettingsMin; int ODFeatureCapabilities; int ODSettingCount; int ODFeatureCount; } ;
struct TYPE_14__ {scalar_t__ ucThermalControllerType; TYPE_7__ smcPPTable; TYPE_5__ PowerSavingClockTable; TYPE_3__ OverDrive8Table; int usSoftwareShutdownTemp; int usODPowerSavePowerLimit; int usODTurboPowerLimit; int usBoostPowerLimit; int usSmallPowerLimit2; int usSmallPowerLimit1; } ;
typedef int PPTable_t ;
typedef TYPE_6__ ATOM_Vega20_POWERPLAYTABLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pp_hwmgr*,int *) ;
 int FUNC_1 (struct pp_hwmgr*,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_7__*,int) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct pp_hwmgr*,int *,int ,scalar_t__) ;
 int FUNC_9 (struct pp_hwmgr*,int *,int *,scalar_t__) ;
 int FUNC_10 (struct pp_hwmgr*,int,int ) ;

__attribute__((used)) static int FUNC_11(
  struct pp_hwmgr *VAR_10,
  const ATOM_Vega20_POWERPLAYTABLE *VAR_11)
{
 struct phm_ppt_v3_information *VAR_12 =
  (struct phm_ppt_v3_information *)VAR_10->pptable;
 uint32_t VAR_13 = 0;
 uint32_t VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_10->thermal_controller.ucType = VAR_11->ucThermalControllerType;
 VAR_12->uc_thermal_controller_type = VAR_11->ucThermalControllerType;
 VAR_10->thermal_controller.fanInfo.ulMinRPM = 0;
 VAR_10->thermal_controller.fanInfo.ulMaxRPM = VAR_11->smcPPTable.FanMaximumRpm;

 FUNC_10(VAR_10,
  VAR_4 != VAR_10->thermal_controller.ucType,
  VAR_9);

 FUNC_7(VAR_10->platform_descriptor.platformCaps, VAR_7);

 if (VAR_11->OverDrive8Table.ucODTableRevision == 1) {
  VAR_14 =
   (FUNC_4(VAR_11->OverDrive8Table.ODFeatureCount) >
    VAR_0) ?
   VAR_0 :
   FUNC_4(VAR_11->OverDrive8Table.ODFeatureCount);
  VAR_15 =
   (FUNC_4(VAR_11->OverDrive8Table.ODSettingCount) >
    VAR_1) ?
   VAR_1 :
   FUNC_4(VAR_11->OverDrive8Table.ODSettingCount);

  FUNC_1(VAR_10,
    &VAR_12->od_feature_capabilities,
    VAR_11->OverDrive8Table.ODFeatureCapabilities,
    VAR_14);
  FUNC_9(VAR_10,
    &VAR_12->od_settings_max,
    VAR_11->OverDrive8Table.ODSettingsMax,
    VAR_15);
  FUNC_9(VAR_10,
    &VAR_12->od_settings_min,
    VAR_11->OverDrive8Table.ODSettingsMin,
    VAR_15);
 }

 VAR_12->us_small_power_limit1 = FUNC_3(VAR_11->usSmallPowerLimit1);
 VAR_12->us_small_power_limit2 = FUNC_3(VAR_11->usSmallPowerLimit2);
 VAR_12->us_boost_power_limit = FUNC_3(VAR_11->usBoostPowerLimit);
 VAR_12->us_od_turbo_power_limit = FUNC_3(VAR_11->usODTurboPowerLimit);
 VAR_12->us_od_powersave_power_limit = FUNC_3(VAR_11->usODPowerSavePowerLimit);

 VAR_12->us_software_shutdown_temp = FUNC_3(VAR_11->usSoftwareShutdownTemp);

 VAR_10->platform_descriptor.TDPODLimit = FUNC_4(VAR_11->OverDrive8Table.ODSettingsMax[VAR_2]);

 VAR_13 = 0;
 if (!VAR_13 && VAR_10->platform_descriptor.TDPODLimit)

  FUNC_7(VAR_10->platform_descriptor.platformCaps, VAR_8);

 if (VAR_11->PowerSavingClockTable.ucTableRevision == 1) {
  VAR_16 =
   (FUNC_4(VAR_11->PowerSavingClockTable.PowerSavingClockCount) >=
    VAR_3) ?
   VAR_3 :
   FUNC_4(VAR_11->PowerSavingClockTable.PowerSavingClockCount);
  FUNC_8(VAR_10,
    &VAR_12->power_saving_clock_max,
    VAR_11->PowerSavingClockTable.PowerSavingClockMax,
    VAR_16);
  FUNC_8(VAR_10,
    &VAR_12->power_saving_clock_min,
    VAR_11->PowerSavingClockTable.PowerSavingClockMin,
    VAR_16);
 }

 VAR_12->smc_pptable = (PPTable_t *)FUNC_2(sizeof(PPTable_t), VAR_6);
 if (VAR_12->smc_pptable == ((void*)0))
  return -VAR_5;

 FUNC_5(VAR_12->smc_pptable,
   &(VAR_11->smcPPTable),
   sizeof(PPTable_t));


 VAR_17 = FUNC_0(VAR_10, (VAR_12->smc_pptable));
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_6(VAR_10);

 return VAR_17;
}
