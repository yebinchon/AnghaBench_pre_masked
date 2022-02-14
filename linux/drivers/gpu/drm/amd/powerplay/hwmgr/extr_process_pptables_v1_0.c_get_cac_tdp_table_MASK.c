
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int * cac_dtp_table; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;
struct phm_cac_tdp_table {int ucPlx_I2C_Line; int ucPlx_I2C_address; int ucVr_I2C_Line; int ucVr_I2C_address; int ucLiquid_I2C_Line; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; void* usTemperatureLimitPlx; void* usTemperatureLimitVrMvdd; void* usTemperatureLimitVrVddc; void* usTemperatureLimitLiquid2; void* usTemperatureLimitLiquid1; void* usTemperatureLimitHotspot; void* usClockStretchAmount; void* usSoftwareShutdownTemp; void* usPowerTuneDataSetID; void* usTargetOperatingTemp; void* usDefaultTargetOperatingTemp; void* usMaximumPowerDeliveryLimit; void* usHighCACLeakage; void* usLowCACLeakage; void* usSmallPowerLimit; void* usBatteryPowerLimit; void* usTDC; void* usConfigurableTDP; void* usTDP; } ;
struct TYPE_9__ {int ucPlx_I2C_Line; int ucPlx_I2C_address; int ucVr_I2C_Line; int ucVr_I2C_address; int ucLiquid_I2C_Line; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; int usTemperatureLimitPlx; int usTemperatureLimitVrMvdd; int usTemperatureLimitVrVddc; int usTemperatureLimitLiquid2; int usTemperatureLimitLiquid1; int usTemperatureLimitHotspot; int usClockStretchAmount; int usSoftwareShutdownTemp; int usPowerTuneDataSetID; int usTjMax; int usMaximumPowerDeliveryLimit; int usHighCACLeakage; int usLowCACLeakage; int usSmallPowerLimit; int usBatteryPowerLimit; int usTDC; int usConfigurableTDP; int usTDP; } ;
struct TYPE_8__ {int usClockStretchAmount; int usSoftwareShutdownTemp; int usPowerTuneDataSetID; int usTjMax; int usMaximumPowerDeliveryLimit; int usHighCACLeakage; int usLowCACLeakage; int usSmallPowerLimit; int usBatteryPowerLimit; int usTDC; int usConfigurableTDP; int usTDP; } ;
struct TYPE_7__ {int ucRevId; } ;
typedef TYPE_2__ PPTable_Generic_SubTable_Header ;
typedef TYPE_3__ ATOM_Tonga_PowerTune_Table ;
typedef TYPE_4__ ATOM_Fiji_PowerTune_Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phm_cac_tdp_table*) ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
  struct pp_hwmgr *VAR_2,
  struct phm_cac_tdp_table **VAR_3,
  const PPTable_Generic_SubTable_Header * VAR_4
  )
{
 uint32_t VAR_5;
 struct phm_cac_tdp_table *VAR_6;

 VAR_5 = sizeof(uint32_t) + sizeof(struct phm_cac_tdp_table);
 VAR_6 = FUNC_1(VAR_5, VAR_1);

 if (((void*)0) == VAR_6)
  return -VAR_0;

 VAR_2->dyn_state.cac_dtp_table = FUNC_1(VAR_5, VAR_1);

 if (((void*)0) == VAR_2->dyn_state.cac_dtp_table) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 if (VAR_4->ucRevId < 3) {
  const ATOM_Tonga_PowerTune_Table *VAR_7 =
   (ATOM_Tonga_PowerTune_Table *)VAR_4;
  VAR_6->usTDP = FUNC_2(VAR_7->usTDP);
  VAR_6->usConfigurableTDP =
   FUNC_2(VAR_7->usConfigurableTDP);
  VAR_6->usTDC = FUNC_2(VAR_7->usTDC);
  VAR_6->usBatteryPowerLimit =
   FUNC_2(VAR_7->usBatteryPowerLimit);
  VAR_6->usSmallPowerLimit =
   FUNC_2(VAR_7->usSmallPowerLimit);
  VAR_6->usLowCACLeakage =
   FUNC_2(VAR_7->usLowCACLeakage);
  VAR_6->usHighCACLeakage =
   FUNC_2(VAR_7->usHighCACLeakage);
  VAR_6->usMaximumPowerDeliveryLimit =
   FUNC_2(VAR_7->usMaximumPowerDeliveryLimit);
  VAR_6->usDefaultTargetOperatingTemp =
   FUNC_2(VAR_7->usTjMax);
  VAR_6->usTargetOperatingTemp =
   FUNC_2(VAR_7->usTjMax);
  VAR_6->usPowerTuneDataSetID =
   FUNC_2(VAR_7->usPowerTuneDataSetID);
  VAR_6->usSoftwareShutdownTemp =
   FUNC_2(VAR_7->usSoftwareShutdownTemp);
  VAR_6->usClockStretchAmount =
   FUNC_2(VAR_7->usClockStretchAmount);
 } else {
  const ATOM_Fiji_PowerTune_Table *VAR_8 =
   (ATOM_Fiji_PowerTune_Table *)VAR_4;
  VAR_6->usTDP = FUNC_2(VAR_8->usTDP);
  VAR_6->usConfigurableTDP = FUNC_2(VAR_8->usConfigurableTDP);
  VAR_6->usTDC = FUNC_2(VAR_8->usTDC);
  VAR_6->usBatteryPowerLimit = FUNC_2(VAR_8->usBatteryPowerLimit);
  VAR_6->usSmallPowerLimit = FUNC_2(VAR_8->usSmallPowerLimit);
  VAR_6->usLowCACLeakage = FUNC_2(VAR_8->usLowCACLeakage);
  VAR_6->usHighCACLeakage = FUNC_2(VAR_8->usHighCACLeakage);
  VAR_6->usMaximumPowerDeliveryLimit =
   FUNC_2(VAR_8->usMaximumPowerDeliveryLimit);
  VAR_6->usDefaultTargetOperatingTemp =
   FUNC_2(VAR_8->usTjMax);
  VAR_6->usTargetOperatingTemp =
   FUNC_2(VAR_8->usTjMax);
  VAR_6->usPowerTuneDataSetID =
   FUNC_2(VAR_8->usPowerTuneDataSetID);
  VAR_6->usSoftwareShutdownTemp =
   FUNC_2(VAR_8->usSoftwareShutdownTemp);
  VAR_6->usClockStretchAmount =
   FUNC_2(VAR_8->usClockStretchAmount);
  VAR_6->usTemperatureLimitHotspot =
   FUNC_2(VAR_8->usTemperatureLimitHotspot);
  VAR_6->usTemperatureLimitLiquid1 =
   FUNC_2(VAR_8->usTemperatureLimitLiquid1);
  VAR_6->usTemperatureLimitLiquid2 =
   FUNC_2(VAR_8->usTemperatureLimitLiquid2);
  VAR_6->usTemperatureLimitVrVddc =
   FUNC_2(VAR_8->usTemperatureLimitVrVddc);
  VAR_6->usTemperatureLimitVrMvdd =
   FUNC_2(VAR_8->usTemperatureLimitVrMvdd);
  VAR_6->usTemperatureLimitPlx =
   FUNC_2(VAR_8->usTemperatureLimitPlx);
  VAR_6->ucLiquid1_I2C_address =
   VAR_8->ucLiquid1_I2C_address;
  VAR_6->ucLiquid2_I2C_address =
   VAR_8->ucLiquid2_I2C_address;
  VAR_6->ucLiquid_I2C_Line =
   VAR_8->ucLiquid_I2C_Line;
  VAR_6->ucVr_I2C_address = VAR_8->ucVr_I2C_address;
  VAR_6->ucVr_I2C_Line = VAR_8->ucVr_I2C_Line;
  VAR_6->ucPlx_I2C_address = VAR_8->ucPlx_I2C_address;
  VAR_6->ucPlx_I2C_Line = VAR_8->ucPlx_I2C_Line;
 }

 *VAR_3 = VAR_6;

 return 0;
}
