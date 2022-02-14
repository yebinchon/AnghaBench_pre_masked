
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {void* LoadLineSlope; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;
struct phm_tdp_table {void* ucPlx_I2C_LineSDA; void* ucPlx_I2C_Line; int ucPlx_I2C_address; void* ucVr_I2C_LineSDA; void* ucVr_I2C_Line; int ucVr_I2C_address; void* ucLiquid_I2C_LineSDA; void* ucLiquid_I2C_Line; int ulBoostClock; void* usBoostStopTemperature; void* usBoostStartTemperature; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; void* usTemperatureLimitPlx; void* usTemperatureLimitVrMvdd; void* usTemperatureLimitVrVddc; void* usTemperatureLimitHBM; void* usTemperatureLimitLiquid2; void* usTemperatureLimitLiquid1; void* usTemperatureLimitHotspot; void* usTemperatureLimitTedge; void* usSoftwareShutdownTemp; void* usEDCLimit; void* usTDC; void* usMaximumPowerDeliveryLimit; } ;
struct TYPE_8__ {int ucRevId; } ;
typedef TYPE_2__ Vega10_PPTable_Generic_SubTable_Header ;
struct TYPE_11__ {int usLoadLineResistance; void* ucPlx_I2C_LineSDA; void* ucPlx_I2C_LineSCL; int ucPlx_I2C_address; void* ucVr_I2C_LineSDA; void* ucVr_I2C_LineSCL; int ucVr_I2C_address; void* ucLiquid_I2C_LineSDA; void* ucLiquid_I2C_LineSCL; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; int usTemperatureLimitPlx; int usTemperatureLimitVrMem; int usTemperatureLimitVrSoc; int usTemperatureLimitHBM; int usTemperatureLimitLiquid2; int usTemperatureLimitLiquid1; int usTemperatureLimitHotSpot; int usTemperatureLimitTedge; int usSoftwareShutdownTemp; int usEdcLimit; int usTdcLimit; int usSocketPowerLimit; } ;
struct TYPE_10__ {int usLoadLineResistance; int ucPlx_I2C_Line; int ucPlx_I2C_address; int ucVr_I2C_Line; int ucVr_I2C_address; int ucLiquid_I2C_Line; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; int usTemperatureLimitPlx; int usTemperatureLimitVrMem; int usTemperatureLimitVrSoc; int usTemperatureLimitHBM; int usTemperatureLimitLiquid2; int usTemperatureLimitLiquid1; int usTemperatureLimitHotSpot; int usTemperatureLimitTedge; int usSoftwareShutdownTemp; int usEdcLimit; int usTdcLimit; int usSocketPowerLimit; } ;
struct TYPE_9__ {int usLoadLineResistance; int ucPlx_I2C_Line; int ucPlx_I2C_address; int ucVr_I2C_Line; int ucVr_I2C_address; int ucLiquid_I2C_Line; int ulBoostClock; int usBoostStopTemperature; int usBoostStartTemperature; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; int usTemperatureLimitPlx; int usTemperatureLimitVrMem; int usTemperatureLimitVrSoc; int usTemperatureLimitHBM; int usTemperatureLimitLiquid2; int usTemperatureLimitLiquid1; int usTemperatureLimitHotSpot; int usTemperatureLimitTedge; int usSoftwareShutdownTemp; int usEdcLimit; int usTdcLimit; int usSocketPowerLimit; } ;
typedef TYPE_3__ ATOM_Vega10_PowerTune_Table_V3 ;
typedef TYPE_4__ ATOM_Vega10_PowerTune_Table_V2 ;
typedef TYPE_5__ ATOM_Vega10_PowerTune_Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void**,void**) ;
 struct phm_tdp_table* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
  struct pp_hwmgr *VAR_2,
  struct phm_tdp_table **VAR_3,
  const Vega10_PPTable_Generic_SubTable_Header *VAR_4)
{
 uint32_t VAR_5;
 struct phm_tdp_table *VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;
 const ATOM_Vega10_PowerTune_Table *VAR_9;
 const ATOM_Vega10_PowerTune_Table_V2 *VAR_10;
 const ATOM_Vega10_PowerTune_Table_V3 *VAR_11;

 VAR_5 = sizeof(uint32_t) + sizeof(struct phm_tdp_table);

 VAR_6 = FUNC_1(VAR_5, VAR_1);

 if (!VAR_6)
  return -VAR_0;

 if (VAR_4->ucRevId == 5) {
  VAR_9 = (ATOM_Vega10_PowerTune_Table *)VAR_4;
  VAR_6->usMaximumPowerDeliveryLimit = FUNC_2(VAR_9->usSocketPowerLimit);
  VAR_6->usTDC = FUNC_2(VAR_9->usTdcLimit);
  VAR_6->usEDCLimit = FUNC_2(VAR_9->usEdcLimit);
  VAR_6->usSoftwareShutdownTemp =
    FUNC_2(VAR_9->usSoftwareShutdownTemp);
  VAR_6->usTemperatureLimitTedge =
    FUNC_2(VAR_9->usTemperatureLimitTedge);
  VAR_6->usTemperatureLimitHotspot =
    FUNC_2(VAR_9->usTemperatureLimitHotSpot);
  VAR_6->usTemperatureLimitLiquid1 =
    FUNC_2(VAR_9->usTemperatureLimitLiquid1);
  VAR_6->usTemperatureLimitLiquid2 =
    FUNC_2(VAR_9->usTemperatureLimitLiquid2);
  VAR_6->usTemperatureLimitHBM =
    FUNC_2(VAR_9->usTemperatureLimitHBM);
  VAR_6->usTemperatureLimitVrVddc =
    FUNC_2(VAR_9->usTemperatureLimitVrSoc);
  VAR_6->usTemperatureLimitVrMvdd =
    FUNC_2(VAR_9->usTemperatureLimitVrMem);
  VAR_6->usTemperatureLimitPlx =
    FUNC_2(VAR_9->usTemperatureLimitPlx);
  VAR_6->ucLiquid1_I2C_address = VAR_9->ucLiquid1_I2C_address;
  VAR_6->ucLiquid2_I2C_address = VAR_9->ucLiquid2_I2C_address;
  VAR_6->ucLiquid_I2C_Line = VAR_9->ucLiquid_I2C_LineSCL;
  VAR_6->ucLiquid_I2C_LineSDA = VAR_9->ucLiquid_I2C_LineSDA;
  VAR_6->ucVr_I2C_address = VAR_9->ucVr_I2C_address;
  VAR_6->ucVr_I2C_Line = VAR_9->ucVr_I2C_LineSCL;
  VAR_6->ucVr_I2C_LineSDA = VAR_9->ucVr_I2C_LineSDA;
  VAR_6->ucPlx_I2C_address = VAR_9->ucPlx_I2C_address;
  VAR_6->ucPlx_I2C_Line = VAR_9->ucPlx_I2C_LineSCL;
  VAR_6->ucPlx_I2C_LineSDA = VAR_9->ucPlx_I2C_LineSDA;
  VAR_2->platform_descriptor.LoadLineSlope = FUNC_2(VAR_9->usLoadLineResistance);
 } else if (VAR_4->ucRevId == 6) {
  VAR_10 = (ATOM_Vega10_PowerTune_Table_V2 *)VAR_4;
  VAR_6->usMaximumPowerDeliveryLimit = FUNC_2(VAR_10->usSocketPowerLimit);
  VAR_6->usTDC = FUNC_2(VAR_10->usTdcLimit);
  VAR_6->usEDCLimit = FUNC_2(VAR_10->usEdcLimit);
  VAR_6->usSoftwareShutdownTemp =
    FUNC_2(VAR_10->usSoftwareShutdownTemp);
  VAR_6->usTemperatureLimitTedge =
    FUNC_2(VAR_10->usTemperatureLimitTedge);
  VAR_6->usTemperatureLimitHotspot =
    FUNC_2(VAR_10->usTemperatureLimitHotSpot);
  VAR_6->usTemperatureLimitLiquid1 =
    FUNC_2(VAR_10->usTemperatureLimitLiquid1);
  VAR_6->usTemperatureLimitLiquid2 =
    FUNC_2(VAR_10->usTemperatureLimitLiquid2);
  VAR_6->usTemperatureLimitHBM =
    FUNC_2(VAR_10->usTemperatureLimitHBM);
  VAR_6->usTemperatureLimitVrVddc =
    FUNC_2(VAR_10->usTemperatureLimitVrSoc);
  VAR_6->usTemperatureLimitVrMvdd =
    FUNC_2(VAR_10->usTemperatureLimitVrMem);
  VAR_6->usTemperatureLimitPlx =
    FUNC_2(VAR_10->usTemperatureLimitPlx);
  VAR_6->ucLiquid1_I2C_address = VAR_10->ucLiquid1_I2C_address;
  VAR_6->ucLiquid2_I2C_address = VAR_10->ucLiquid2_I2C_address;

  FUNC_0(VAR_10->ucLiquid_I2C_Line, &VAR_7, &VAR_8);

  VAR_6->ucLiquid_I2C_Line = VAR_7;
  VAR_6->ucLiquid_I2C_LineSDA = VAR_8;

  VAR_6->ucVr_I2C_address = VAR_10->ucVr_I2C_address;

  FUNC_0(VAR_10->ucVr_I2C_Line, &VAR_7, &VAR_8);

  VAR_6->ucVr_I2C_Line = VAR_7;
  VAR_6->ucVr_I2C_LineSDA = VAR_8;
  VAR_6->ucPlx_I2C_address = VAR_10->ucPlx_I2C_address;

  FUNC_0(VAR_10->ucPlx_I2C_Line, &VAR_7, &VAR_8);

  VAR_6->ucPlx_I2C_Line = VAR_7;
  VAR_6->ucPlx_I2C_LineSDA = VAR_8;

  VAR_2->platform_descriptor.LoadLineSlope =
     FUNC_2(VAR_10->usLoadLineResistance);
 } else {
  VAR_11 = (ATOM_Vega10_PowerTune_Table_V3 *)VAR_4;
  VAR_6->usMaximumPowerDeliveryLimit = FUNC_2(VAR_11->usSocketPowerLimit);
  VAR_6->usTDC = FUNC_2(VAR_11->usTdcLimit);
  VAR_6->usEDCLimit = FUNC_2(VAR_11->usEdcLimit);
  VAR_6->usSoftwareShutdownTemp = FUNC_2(VAR_11->usSoftwareShutdownTemp);
  VAR_6->usTemperatureLimitTedge = FUNC_2(VAR_11->usTemperatureLimitTedge);
  VAR_6->usTemperatureLimitHotspot = FUNC_2(VAR_11->usTemperatureLimitHotSpot);
  VAR_6->usTemperatureLimitLiquid1 = FUNC_2(VAR_11->usTemperatureLimitLiquid1);
  VAR_6->usTemperatureLimitLiquid2 = FUNC_2(VAR_11->usTemperatureLimitLiquid2);
  VAR_6->usTemperatureLimitHBM = FUNC_2(VAR_11->usTemperatureLimitHBM);
  VAR_6->usTemperatureLimitVrVddc = FUNC_2(VAR_11->usTemperatureLimitVrSoc);
  VAR_6->usTemperatureLimitVrMvdd = FUNC_2(VAR_11->usTemperatureLimitVrMem);
  VAR_6->usTemperatureLimitPlx = FUNC_2(VAR_11->usTemperatureLimitPlx);
  VAR_6->ucLiquid1_I2C_address = VAR_11->ucLiquid1_I2C_address;
  VAR_6->ucLiquid2_I2C_address = VAR_11->ucLiquid2_I2C_address;
  VAR_6->usBoostStartTemperature = FUNC_2(VAR_11->usBoostStartTemperature);
  VAR_6->usBoostStopTemperature = FUNC_2(VAR_11->usBoostStopTemperature);
  VAR_6->ulBoostClock = FUNC_3(VAR_11->ulBoostClock);

  FUNC_0(VAR_11->ucLiquid_I2C_Line, &VAR_7, &VAR_8);

  VAR_6->ucLiquid_I2C_Line = VAR_7;
  VAR_6->ucLiquid_I2C_LineSDA = VAR_8;

  VAR_6->ucVr_I2C_address = VAR_11->ucVr_I2C_address;

  FUNC_0(VAR_11->ucVr_I2C_Line, &VAR_7, &VAR_8);

  VAR_6->ucVr_I2C_Line = VAR_7;
  VAR_6->ucVr_I2C_LineSDA = VAR_8;

  VAR_6->ucPlx_I2C_address = VAR_11->ucPlx_I2C_address;

  FUNC_0(VAR_11->ucPlx_I2C_Line, &VAR_7, &VAR_8);

  VAR_6->ucPlx_I2C_Line = VAR_7;
  VAR_6->ucPlx_I2C_LineSDA = VAR_8;

  VAR_2->platform_descriptor.LoadLineSlope =
     FUNC_2(VAR_11->usLoadLineResistance);
 }

 *VAR_3 = VAR_6;

 return 0;
}
