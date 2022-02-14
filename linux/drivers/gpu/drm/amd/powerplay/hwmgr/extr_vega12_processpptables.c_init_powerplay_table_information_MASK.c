
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ engineClock; scalar_t__ memoryClock; } ;
struct TYPE_8__ {int platformCaps; scalar_t__ TDPODLimit; TYPE_2__ overdriveLimit; } ;
struct TYPE_6__ {scalar_t__ ucType; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; TYPE_1__ thermal_controller; scalar_t__ pptable; } ;
struct phm_ppt_v3_information {scalar_t__ uc_thermal_controller_type; int * smc_pptable; int power_saving_clock_min; int power_saving_clock_max; void* us_software_shutdown_temp; void* us_od_powersave_power_limit; void* us_od_turbo_power_limit; void* us_boost_power_limit; void* us_small_power_limit2; void* us_small_power_limit1; int od_settings_min; int od_settings_max; } ;
struct TYPE_9__ {scalar_t__ ucThermalControllerType; int smcPPTable; int PowerSavingClockMin; int PowerSavingClockMax; int * ODSettingsMax; int usSoftwareShutdownTemp; int usODPowerSavePowerLimit; int usODTurboPowerLimit; int usBoostPowerLimit; int usSmallPowerLimit2; int usSmallPowerLimit1; int * ODSettingsMin; } ;
typedef int PPTable_t ;
typedef TYPE_4__ ATOM_Vega12_POWERPLAYTABLE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct pp_hwmgr*,int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pp_hwmgr*,int *,int ,int ) ;
 int FUNC_7 (struct pp_hwmgr*,int *,int *,int ) ;
 int FUNC_8 (struct pp_hwmgr*,int,int ) ;

__attribute__((used)) static int FUNC_9(
  struct pp_hwmgr *VAR_13,
  const ATOM_Vega12_POWERPLAYTABLE *VAR_14)
{
 struct phm_ppt_v3_information *VAR_15 =
  (struct phm_ppt_v3_information *)VAR_13->pptable;
 uint32_t VAR_16 = 0;
 int VAR_17;

 VAR_13->thermal_controller.ucType = VAR_14->ucThermalControllerType;
 VAR_15->uc_thermal_controller_type = VAR_14->ucThermalControllerType;

 FUNC_8(VAR_13,
  VAR_5 != VAR_13->thermal_controller.ucType,
  VAR_11);

 FUNC_5(VAR_13->platform_descriptor.platformCaps, VAR_9);

 if (FUNC_3(VAR_14->ODSettingsMax[VAR_1]) > VAR_12)
  VAR_13->platform_descriptor.overdriveLimit.engineClock = VAR_12;
 else
  VAR_13->platform_descriptor.overdriveLimit.engineClock =
   FUNC_3(VAR_14->ODSettingsMax[VAR_1]);
 VAR_13->platform_descriptor.overdriveLimit.memoryClock =
  FUNC_3(VAR_14->ODSettingsMax[VAR_3]);

 FUNC_7(VAR_13,
       &VAR_15->od_settings_max,
       VAR_14->ODSettingsMax,
       VAR_0);
 FUNC_7(VAR_13,
       &VAR_15->od_settings_min,
       VAR_14->ODSettingsMin,
       VAR_0);





 if (VAR_13->platform_descriptor.overdriveLimit.engineClock > 0
  && VAR_13->platform_descriptor.overdriveLimit.memoryClock > 0)
  FUNC_5(VAR_13->platform_descriptor.platformCaps, VAR_8);

 VAR_15->us_small_power_limit1 = FUNC_2(VAR_14->usSmallPowerLimit1);
 VAR_15->us_small_power_limit2 = FUNC_2(VAR_14->usSmallPowerLimit2);
 VAR_15->us_boost_power_limit = FUNC_2(VAR_14->usBoostPowerLimit);
 VAR_15->us_od_turbo_power_limit = FUNC_2(VAR_14->usODTurboPowerLimit);
 VAR_15->us_od_powersave_power_limit = FUNC_2(VAR_14->usODPowerSavePowerLimit);

 VAR_15->us_software_shutdown_temp = FUNC_2(VAR_14->usSoftwareShutdownTemp);

 VAR_13->platform_descriptor.TDPODLimit = FUNC_3(VAR_14->ODSettingsMax[VAR_2]);

 VAR_16 = 0;
 if (!VAR_16) {

  if (VAR_13->platform_descriptor.TDPODLimit)
   FUNC_5(VAR_13->platform_descriptor.platformCaps,
    VAR_10);
 }

 FUNC_6(VAR_13, &VAR_15->power_saving_clock_max, VAR_14->PowerSavingClockMax, VAR_4);
 FUNC_6(VAR_13, &VAR_15->power_saving_clock_min, VAR_14->PowerSavingClockMin, VAR_4);

 VAR_15->smc_pptable = (PPTable_t *)FUNC_1(sizeof(PPTable_t), VAR_7);
 if (VAR_15->smc_pptable == ((void*)0))
  return -VAR_6;

 FUNC_4(VAR_15->smc_pptable, &(VAR_14->smcPPTable), sizeof(PPTable_t));

 VAR_17 = FUNC_0(VAR_13, (VAR_15->smc_pptable));

 return VAR_17;
}
