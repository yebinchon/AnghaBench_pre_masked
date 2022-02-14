
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct radeon_ppm_table {scalar_t__ tj_max; scalar_t__ dgpu_tdp; } ;
struct TYPE_6__ {struct radeon_ppm_table* ppm_table; struct radeon_cac_tdp_table* cac_tdp_table; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct radeon_cac_tdp_table {int tdp; int configurable_tdp; } ;
struct ci_pt_defaults {int* bapmti_r; int* bapmti_rc; int bapm_temp_gradient; int dte_ambient_temp_base; } ;
struct TYPE_9__ {int temperature_high; } ;
struct TYPE_10__ {int DefaultTdp; int TargetTdp; int GpuTjHyst; void**** BAPMTI_RC; void**** BAPMTI_R; int BAPM_TEMP_GRADIENT; void* PPM_TemperatureLimit; void* PPM_PkgPwrLimit; int DTEAmbientTempBase; void* GpuTjMax; void* DTETjOffset; } ;
struct ci_power_info {TYPE_4__ thermal_temp_setting; scalar_t__ dte_tj_offset; TYPE_5__ smc_state_table; struct ci_pt_defaults* powertune_defaults; } ;
typedef TYPE_5__ SMU7_Discrete_DpmTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_0(VAR_3);
 const struct ci_pt_defaults *VAR_5 = VAR_4->powertune_defaults;
 SMU7_Discrete_DpmTable *VAR_6 = &VAR_4->smc_state_table;
 struct radeon_cac_tdp_table *VAR_7 =
  VAR_3->pm.dpm.dyn_state.cac_tdp_table;
 struct radeon_ppm_table *VAR_8 = VAR_3->pm.dpm.dyn_state.ppm_table;
 int VAR_9, VAR_10, VAR_11;
 const u16 *VAR_12;
 const u16 *VAR_13;

 VAR_6->DefaultTdp = VAR_7->tdp * 256;
 VAR_6->TargetTdp = VAR_7->configurable_tdp * 256;

 VAR_6->DTETjOffset = (u8)VAR_4->dte_tj_offset;
 VAR_6->GpuTjMax =
  (u8)(VAR_4->thermal_temp_setting.temperature_high / 1000);
 VAR_6->GpuTjHyst = 8;

 VAR_6->DTEAmbientTempBase = VAR_5->dte_ambient_temp_base;

 if (VAR_8) {
  VAR_6->PPM_PkgPwrLimit = FUNC_1((u16)VAR_8->dgpu_tdp * 256 / 1000);
  VAR_6->PPM_TemperatureLimit = FUNC_1((u16)VAR_8->tj_max * 256);
 } else {
  VAR_6->PPM_PkgPwrLimit = FUNC_1(0);
  VAR_6->PPM_TemperatureLimit = FUNC_1(0);
 }

 VAR_6->BAPM_TEMP_GRADIENT = FUNC_2(VAR_5->bapm_temp_gradient);
 VAR_12 = VAR_5->bapmti_r;
 VAR_13 = VAR_5->bapmti_rc;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
    VAR_6->BAPMTI_R[VAR_9][VAR_10][VAR_11] = FUNC_1(*VAR_12);
    VAR_6->BAPMTI_RC[VAR_9][VAR_10][VAR_11] = FUNC_1(*VAR_13);
    VAR_12++;
    VAR_13++;
   }
  }
 }

 return 0;
}
