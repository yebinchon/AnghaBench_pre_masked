
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int temperature_high; } ;
struct smu7_hwmgr {TYPE_2__ thermal_temp_setting; } ;
struct TYPE_4__ {struct phm_ppm_table* ppm_parameter_table; struct phm_cac_tdp_table* cac_dtp_table; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; scalar_t__ backend; scalar_t__ smu_backend; } ;
struct phm_ppm_table {scalar_t__ tj_max; scalar_t__ dgpu_tdp; } ;
struct phm_cac_tdp_table {int usTDP; int usConfigurableTDP; } ;
struct TYPE_6__ {int GpuTjHyst; int PPM_PkgPwrLimit; int PPM_TemperatureLimit; void**** BAPMTI_RC; void**** BAPMTI_R; int BAPM_TEMP_GRADIENT; int DTEAmbientTempBase; scalar_t__ GpuTjMax; scalar_t__ DTETjOffset; void* TargetTdp; void* DefaultTdp; } ;
struct ci_smumgr {TYPE_3__ smc_state_table; struct ci_pt_defaults* power_tune_defaults; } ;
struct ci_pt_defaults {int* bapmti_r; int* bapmti_rc; int bapm_temp_gradient; int dte_ambient_temp_base; } ;
typedef TYPE_3__ SMU7_Discrete_DpmTable ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_4)
{
 struct ci_smumgr *VAR_5 = (struct ci_smumgr *)(VAR_4->smu_backend);
 struct smu7_hwmgr *VAR_6 = (struct smu7_hwmgr *)(VAR_4->backend);
 const struct ci_pt_defaults *VAR_7 = VAR_5->power_tune_defaults;
 SMU7_Discrete_DpmTable *VAR_8 = &(VAR_5->smc_state_table);
 struct phm_cac_tdp_table *VAR_9 = VAR_4->dyn_state.cac_dtp_table;
 struct phm_ppm_table *VAR_10 = VAR_4->dyn_state.ppm_parameter_table;
 const uint16_t *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_8->DefaultTdp = FUNC_2((uint16_t)(VAR_9->usTDP * 256));
 VAR_8->TargetTdp = FUNC_2((uint16_t)(VAR_9->usConfigurableTDP * 256));

 VAR_8->DTETjOffset = 0;
 VAR_8->GpuTjMax = (uint8_t)(VAR_6->thermal_temp_setting.temperature_high / VAR_0);
 VAR_8->GpuTjHyst = 8;

 VAR_8->DTEAmbientTempBase = VAR_7->dte_ambient_temp_base;

 if (VAR_10) {
  VAR_8->PPM_PkgPwrLimit = (uint16_t)VAR_10->dgpu_tdp * 256 / 1000;
  VAR_8->PPM_TemperatureLimit = (uint16_t)VAR_10->tj_max * 256;
 } else {
  VAR_8->PPM_PkgPwrLimit = 0;
  VAR_8->PPM_TemperatureLimit = 0;
 }

 FUNC_0(VAR_8->PPM_PkgPwrLimit);
 FUNC_0(VAR_8->PPM_TemperatureLimit);

 VAR_8->BAPM_TEMP_GRADIENT = FUNC_1(VAR_7->bapm_temp_gradient);
 VAR_11 = VAR_7->bapmti_r;
 VAR_12 = VAR_7->bapmti_rc;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
   for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
    VAR_8->BAPMTI_R[VAR_13][VAR_14][VAR_15] = FUNC_2(*VAR_11);
    VAR_8->BAPMTI_RC[VAR_13][VAR_14][VAR_15] = FUNC_2(*VAR_12);
    VAR_11++;
    VAR_12++;
   }
  }
 }

 return 0;
}
