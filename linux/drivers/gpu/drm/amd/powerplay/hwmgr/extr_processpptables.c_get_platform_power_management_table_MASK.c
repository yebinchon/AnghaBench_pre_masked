
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct phm_ppm_table* ppm_parameter_table; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;
struct phm_ppm_table {void* tj_max; void* dgpu_ulv_power; void* dgpu_tdp; void* apu_tdp; void* small_ac_platform_tdc; void* platform_tdc; void* small_ac_platform_tdp; void* platform_tdp; int cpu_core_number; int ppm_design; } ;
struct TYPE_5__ {int ulTjmax; int ulDGpuUlvPower; int ulDGpuTDP; int ulApuTDP; int ulSmallACPlatformTDC; int ulPlatformTDC; int ulSmallACPlatformTDP; int ulPlatformTDP; int usCpuCoreNumber; int ucPpmDesign; } ;
typedef TYPE_2__ ATOM_PPLIB_PPM_Table ;


 int VAR_0 ;
 int VAR_1 ;
 struct phm_ppm_table* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2,
   ATOM_PPLIB_PPM_Table *VAR_3)
{
 struct phm_ppm_table *VAR_4 = FUNC_0(sizeof(struct phm_ppm_table), VAR_1);

 if (((void*)0) == VAR_4)
  return -VAR_0;

 VAR_4->ppm_design = VAR_3->ucPpmDesign;
 VAR_4->cpu_core_number = FUNC_1(VAR_3->usCpuCoreNumber);
 VAR_4->platform_tdp = FUNC_2(VAR_3->ulPlatformTDP);
 VAR_4->small_ac_platform_tdp = FUNC_2(VAR_3->ulSmallACPlatformTDP);
 VAR_4->platform_tdc = FUNC_2(VAR_3->ulPlatformTDC);
 VAR_4->small_ac_platform_tdc = FUNC_2(VAR_3->ulSmallACPlatformTDC);
 VAR_4->apu_tdp = FUNC_2(VAR_3->ulApuTDP);
 VAR_4->dgpu_tdp = FUNC_2(VAR_3->ulDGpuTDP);
 VAR_4->dgpu_ulv_power = FUNC_2(VAR_3->ulDGpuUlvPower);
 VAR_4->tj_max = FUNC_2(VAR_3->ulTjmax);
 VAR_2->dyn_state.ppm_parameter_table = VAR_4;

 return 0;
}
