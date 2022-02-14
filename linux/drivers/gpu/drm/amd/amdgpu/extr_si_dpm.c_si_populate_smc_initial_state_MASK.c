
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct si_ps {TYPE_6__* performance_levels; } ;
struct TYPE_29__ {int dll_cntl; int mclk_pwrmgt_cntl; int mpll_ad_func_cntl; int mpll_dq_func_cntl; int mpll_func_cntl; int mpll_func_cntl_1; int mpll_func_cntl_2; int mpll_ss1; int mpll_ss2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_func_cntl_4; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct si_power_info {scalar_t__ boot_pcie_gen; scalar_t__ vddc_phase_shed_control; TYPE_9__ clock_registers; } ;
struct rv7xx_power_info {int dsp; scalar_t__ mclk_edc_enable_threshold; } ;
struct evergreen_power_info {int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; } ;
struct amdgpu_ps {int dummy; } ;
struct TYPE_25__ {scalar_t__ vram_type; } ;
struct TYPE_22__ {int phase_shedding_limits_table; } ;
struct TYPE_23__ {TYPE_2__ dyn_state; } ;
struct TYPE_24__ {TYPE_3__ dpm; } ;
struct amdgpu_device {TYPE_5__ gmc; TYPE_4__ pm; } ;
struct TYPE_28__ {int levelCount; TYPE_11__* levels; int flags; } ;
struct TYPE_27__ {scalar_t__ PwrEfficiencyRatio; scalar_t__ BelowSafeInc; scalar_t__ AboveSafeInc; scalar_t__ NearTDPDec; scalar_t__ MaxPS; } ;
struct TYPE_26__ {int mclk; int sclk; int vddc; int vddci; } ;
struct TYPE_21__ {void* sclk_value; void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_4; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_20__ {int index; } ;
struct TYPE_19__ {TYPE_8__ initialState; } ;
struct TYPE_17__ {void* mclk_value; void* vMPLL_SS2; void* vMPLL_SS; void* vMPLL_FUNC_CNTL_2; void* vMPLL_FUNC_CNTL_1; void* vMPLL_FUNC_CNTL; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL; void* vMCLK_PWRMGT_CNTL; void* vDLL_CNTL; } ;
struct TYPE_18__ {int mcFlags; void* SQPowerThrottle_2; void* SQPowerThrottle; TYPE_7__ dpm2; int strobeMode; scalar_t__ gen2PCIE; void* bSP; void* aT; int mvdd; TYPE_13__ vddc; TYPE_13__ vddci; int std_vddc; scalar_t__ ACIndex; int arbRefreshState; TYPE_1__ sclk; TYPE_10__ mclk; } ;
typedef TYPE_12__ SISLANDS_SMC_STATETABLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int) ;
 struct evergreen_power_info* FUNC_3 (struct amdgpu_device*) ;
 struct rv7xx_power_info* FUNC_4 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_5 (struct amdgpu_device*) ;
 struct si_ps* FUNC_6 (struct amdgpu_ps*) ;
 int FUNC_7 (struct amdgpu_device*,TYPE_13__*,int *) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int *) ;
 int FUNC_10 (struct amdgpu_device*,int *,int ,int,int,TYPE_13__*) ;
 int FUNC_11 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_12 (struct amdgpu_device*,int *,int ,TYPE_13__*) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_device *VAR_10,
      struct amdgpu_ps *VAR_11,
      SISLANDS_SMC_STATETABLE *VAR_12)
{
 struct si_ps *VAR_13 = FUNC_6(VAR_11);
 struct rv7xx_power_info *VAR_14 = FUNC_4(VAR_10);
 struct evergreen_power_info *VAR_15 = FUNC_3(VAR_10);
 struct si_power_info *VAR_16 = FUNC_5(VAR_10);
 u32 VAR_17;
 int VAR_18;

 VAR_12->initialState.levels[0].mclk.vDLL_CNTL =
  FUNC_2(VAR_16->clock_registers.dll_cntl);
 VAR_12->initialState.levels[0].mclk.vMCLK_PWRMGT_CNTL =
  FUNC_2(VAR_16->clock_registers.mclk_pwrmgt_cntl);
 VAR_12->initialState.levels[0].mclk.vMPLL_AD_FUNC_CNTL =
  FUNC_2(VAR_16->clock_registers.mpll_ad_func_cntl);
 VAR_12->initialState.levels[0].mclk.vMPLL_DQ_FUNC_CNTL =
  FUNC_2(VAR_16->clock_registers.mpll_dq_func_cntl);
 VAR_12->initialState.levels[0].mclk.vMPLL_FUNC_CNTL =
  FUNC_2(VAR_16->clock_registers.mpll_func_cntl);
 VAR_12->initialState.levels[0].mclk.vMPLL_FUNC_CNTL_1 =
  FUNC_2(VAR_16->clock_registers.mpll_func_cntl_1);
 VAR_12->initialState.levels[0].mclk.vMPLL_FUNC_CNTL_2 =
  FUNC_2(VAR_16->clock_registers.mpll_func_cntl_2);
 VAR_12->initialState.levels[0].mclk.vMPLL_SS =
  FUNC_2(VAR_16->clock_registers.mpll_ss1);
 VAR_12->initialState.levels[0].mclk.vMPLL_SS2 =
  FUNC_2(VAR_16->clock_registers.mpll_ss2);

 VAR_12->initialState.levels[0].mclk.mclk_value =
  FUNC_2(VAR_13->performance_levels[0].mclk);

 VAR_12->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_2(VAR_16->clock_registers.cg_spll_func_cntl);
 VAR_12->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_2(VAR_16->clock_registers.cg_spll_func_cntl_2);
 VAR_12->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_2(VAR_16->clock_registers.cg_spll_func_cntl_3);
 VAR_12->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_4 =
  FUNC_2(VAR_16->clock_registers.cg_spll_func_cntl_4);
 VAR_12->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM =
  FUNC_2(VAR_16->clock_registers.cg_spll_spread_spectrum);
 VAR_12->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM_2 =
  FUNC_2(VAR_16->clock_registers.cg_spll_spread_spectrum_2);

 VAR_12->initialState.levels[0].sclk.sclk_value =
  FUNC_2(VAR_13->performance_levels[0].sclk);

 VAR_12->initialState.levels[0].arbRefreshState =
  VAR_6;

 VAR_12->initialState.levels[0].ACIndex = 0;

 VAR_18 = FUNC_12(VAR_10, &VAR_15->vddc_voltage_table,
     VAR_13->performance_levels[0].vddc,
     &VAR_12->initialState.levels[0].vddc);

 if (!VAR_18) {
  u16 VAR_19;

  VAR_18 = FUNC_7(VAR_10,
            &VAR_12->initialState.levels[0].vddc,
            &VAR_19);
  if (!VAR_18)
   FUNC_11(VAR_10, VAR_19,
            VAR_12->initialState.levels[0].vddc.index,
            &VAR_12->initialState.levels[0].std_vddc);
 }

 if (VAR_15->vddci_control)
  FUNC_12(VAR_10,
       &VAR_15->vddci_voltage_table,
       VAR_13->performance_levels[0].vddci,
       &VAR_12->initialState.levels[0].vddci);

 if (VAR_16->vddc_phase_shed_control)
  FUNC_10(VAR_10,
       &VAR_10->pm.dpm.dyn_state.phase_shedding_limits_table,
       VAR_13->performance_levels[0].vddc,
       VAR_13->performance_levels[0].sclk,
       VAR_13->performance_levels[0].mclk,
       &VAR_12->initialState.levels[0].vddc);

 FUNC_9(VAR_10, &VAR_12->initialState.levels[0].mvdd);

 VAR_17 = FUNC_1(0xffff) | FUNC_0(0);
 VAR_12->initialState.levels[0].aT = FUNC_2(VAR_17);
 VAR_12->initialState.levels[0].bSP = FUNC_2(VAR_14->dsp);
 VAR_12->initialState.levels[0].gen2PCIE = (u8)VAR_16->boot_pcie_gen;

 if (VAR_10->gmc.vram_type == VAR_0) {
  VAR_12->initialState.levels[0].strobeMode =
   FUNC_8(VAR_10,
          VAR_13->performance_levels[0].mclk);

  if (VAR_13->performance_levels[0].mclk > VAR_14->mclk_edc_enable_threshold)
   VAR_12->initialState.levels[0].mcFlags = VAR_7 | VAR_8;
  else
   VAR_12->initialState.levels[0].mcFlags = 0;
 }

 VAR_12->initialState.levelCount = 1;

 VAR_12->initialState.flags |= VAR_5;

 VAR_12->initialState.levels[0].dpm2.MaxPS = 0;
 VAR_12->initialState.levels[0].dpm2.NearTDPDec = 0;
 VAR_12->initialState.levels[0].dpm2.AboveSafeInc = 0;
 VAR_12->initialState.levels[0].dpm2.BelowSafeInc = 0;
 VAR_12->initialState.levels[0].dpm2.PwrEfficiencyRatio = 0;

 VAR_17 = VAR_4 | VAR_3;
 VAR_12->initialState.levels[0].SQPowerThrottle = FUNC_2(VAR_17);

 VAR_17 = VAR_2 | VAR_9 | VAR_1;
 VAR_12->initialState.levels[0].SQPowerThrottle_2 = FUNC_2(VAR_17);

 return 0;
}
