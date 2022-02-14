
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int LoadLineResistance; int Plx_I2C_LineSDA; int Plx_I2C_LineSCL; int Vr_I2C_LineSDA; int Vr_I2C_LineSCL; int Liquid_I2C_LineSDA; int Liquid_I2C_LineSCL; int Plx_I2C_address; int Vr_I2C_address; int Liquid2_I2C_address; int Liquid1_I2C_address; scalar_t__ FitLimit; void* TplxLimit; void* Tliquid2Limit; void* Tliquid1Limit; void* Tvr_memLimit; void* Tvr_socLimit; void* ThbmLimit; void* ThotspotLimit; void* TedgeLimit; void* EdcLimit; void* TdcLimit; void* SocketPowerLimit; } ;
struct TYPE_4__ {TYPE_3__ pp_table; } ;
struct vega10_hwmgr {TYPE_1__ smc_state_table; } ;
struct TYPE_5__ {int LoadLineSlope; } ;
struct pp_hwmgr {TYPE_2__ platform_descriptor; scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_tdp_table {int ucPlx_I2C_LineSDA; int ucPlx_I2C_Line; int ucVr_I2C_LineSDA; int ucVr_I2C_Line; int ucLiquid_I2C_LineSDA; int ucLiquid_I2C_Line; int ucPlx_I2C_address; int ucVr_I2C_address; int ucLiquid2_I2C_address; int ucLiquid1_I2C_address; int usTemperatureLimitPlx; int usTemperatureLimitLiquid2; int usTemperatureLimitLiquid1; int usTemperatureLimitVrMvdd; int usTemperatureLimitVrVddc; int usTemperatureLimitHBM; int usTemperatureLimitHotspot; int usTemperatureLimitTedge; int usEDCLimit; int usTDC; int usMaximumPowerDeliveryLimit; } ;
struct phm_ppt_v2_information {struct phm_tdp_table* tdp_table; } ;
typedef TYPE_3__ PPTable_t ;


 void* FUNC_0 (int ) ;

void FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct vega10_hwmgr *VAR_1 = VAR_0->backend;
 struct phm_ppt_v2_information *VAR_2 =
   (struct phm_ppt_v2_information *)(VAR_0->pptable);
 struct phm_tdp_table *VAR_3 = VAR_2->tdp_table;
 PPTable_t *VAR_4 = &(VAR_1->smc_state_table.pp_table);

 VAR_4->SocketPowerLimit = FUNC_0(
   VAR_3->usMaximumPowerDeliveryLimit);
 VAR_4->TdcLimit = FUNC_0(VAR_3->usTDC);
 VAR_4->EdcLimit = FUNC_0(VAR_3->usEDCLimit);
 VAR_4->TedgeLimit = FUNC_0(VAR_3->usTemperatureLimitTedge);
 VAR_4->ThotspotLimit = FUNC_0(VAR_3->usTemperatureLimitHotspot);
 VAR_4->ThbmLimit = FUNC_0(VAR_3->usTemperatureLimitHBM);
 VAR_4->Tvr_socLimit = FUNC_0(VAR_3->usTemperatureLimitVrVddc);
 VAR_4->Tvr_memLimit = FUNC_0(VAR_3->usTemperatureLimitVrMvdd);
 VAR_4->Tliquid1Limit = FUNC_0(VAR_3->usTemperatureLimitLiquid1);
 VAR_4->Tliquid2Limit = FUNC_0(VAR_3->usTemperatureLimitLiquid2);
 VAR_4->TplxLimit = FUNC_0(VAR_3->usTemperatureLimitPlx);
 VAR_4->LoadLineResistance =
   VAR_0->platform_descriptor.LoadLineSlope * 256;
 VAR_4->FitLimit = 0;

 VAR_4->Liquid1_I2C_address = VAR_3->ucLiquid1_I2C_address;
 VAR_4->Liquid2_I2C_address = VAR_3->ucLiquid2_I2C_address;
 VAR_4->Vr_I2C_address = VAR_3->ucVr_I2C_address;
 VAR_4->Plx_I2C_address = VAR_3->ucPlx_I2C_address;

 VAR_4->Liquid_I2C_LineSCL = VAR_3->ucLiquid_I2C_Line;
 VAR_4->Liquid_I2C_LineSDA = VAR_3->ucLiquid_I2C_LineSDA;

 VAR_4->Vr_I2C_LineSCL = VAR_3->ucVr_I2C_Line;
 VAR_4->Vr_I2C_LineSDA = VAR_3->ucVr_I2C_LineSDA;

 VAR_4->Plx_I2C_LineSCL = VAR_3->ucPlx_I2C_Line;
 VAR_4->Plx_I2C_LineSDA = VAR_3->ucPlx_I2C_LineSDA;
}
