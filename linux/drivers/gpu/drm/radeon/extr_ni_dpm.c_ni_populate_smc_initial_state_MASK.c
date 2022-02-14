
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rv7xx_power_info {int dsp; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; scalar_t__ boot_in_gen2; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {TYPE_2__* performance_levels; } ;
struct TYPE_15__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int mclk_pwrmgt_cntl; int dll_cntl; int mpll_ss1; int mpll_ss2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_func_cntl_4; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct ni_power_info {TYPE_4__ clock_registers; } ;
struct evergreen_power_info {int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; } ;
struct TYPE_20__ {int index; } ;
struct TYPE_18__ {int levelCount; TYPE_6__* levels; int flags; } ;
struct TYPE_19__ {TYPE_7__ initialState; } ;
struct TYPE_14__ {scalar_t__ BelowSafeInc; scalar_t__ AboveSafeInc; scalar_t__ NearTDPDec; scalar_t__ MaxPS; } ;
struct TYPE_12__ {void* sclk_value; void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_4; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_16__ {void* mclk_value; void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; } ;
struct TYPE_17__ {int gen2PCIE; int mcFlags; void* SQPowerThrottle_2; void* SQPowerThrottle; TYPE_3__ dpm2; int strobeMode; void* bSP; void* aT; int mvdd; TYPE_9__ vddci; int std_vddc; TYPE_9__ vddc; scalar_t__ ACIndex; int arbRefreshState; TYPE_1__ sclk; TYPE_5__ mclk; } ;
struct TYPE_13__ {int mclk; int sclk; int vddci; int vddc; } ;
typedef TYPE_8__ NISLANDS_SMC_STATETABLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct evergreen_power_info* FUNC_4 (struct radeon_device*) ;
 struct ni_power_info* FUNC_5 (struct radeon_device*) ;
 struct ni_ps* FUNC_6 (struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*,TYPE_9__*,int *) ;
 int FUNC_8 (struct radeon_device*,int *) ;
 int FUNC_9 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_10 (struct radeon_device*,int *,int ,TYPE_9__*) ;
 struct rv7xx_power_info* FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_9,
      struct radeon_ps *VAR_10,
      NISLANDS_SMC_STATETABLE *VAR_11)
{
 struct ni_ps *VAR_12 = FUNC_6(VAR_10);
 struct rv7xx_power_info *VAR_13 = FUNC_11(VAR_9);
 struct evergreen_power_info *VAR_14 = FUNC_4(VAR_9);
 struct ni_power_info *VAR_15 = FUNC_5(VAR_9);
 u32 VAR_16;
 int VAR_17;

 VAR_11->initialState.levels[0].mclk.vMPLL_AD_FUNC_CNTL =
  FUNC_2(VAR_15->clock_registers.mpll_ad_func_cntl);
 VAR_11->initialState.levels[0].mclk.vMPLL_AD_FUNC_CNTL_2 =
  FUNC_2(VAR_15->clock_registers.mpll_ad_func_cntl_2);
 VAR_11->initialState.levels[0].mclk.vMPLL_DQ_FUNC_CNTL =
  FUNC_2(VAR_15->clock_registers.mpll_dq_func_cntl);
 VAR_11->initialState.levels[0].mclk.vMPLL_DQ_FUNC_CNTL_2 =
  FUNC_2(VAR_15->clock_registers.mpll_dq_func_cntl_2);
 VAR_11->initialState.levels[0].mclk.vMCLK_PWRMGT_CNTL =
  FUNC_2(VAR_15->clock_registers.mclk_pwrmgt_cntl);
 VAR_11->initialState.levels[0].mclk.vDLL_CNTL =
  FUNC_2(VAR_15->clock_registers.dll_cntl);
 VAR_11->initialState.levels[0].mclk.vMPLL_SS =
  FUNC_2(VAR_15->clock_registers.mpll_ss1);
 VAR_11->initialState.levels[0].mclk.vMPLL_SS2 =
  FUNC_2(VAR_15->clock_registers.mpll_ss2);
 VAR_11->initialState.levels[0].mclk.mclk_value =
  FUNC_2(VAR_12->performance_levels[0].mclk);

 VAR_11->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_2(VAR_15->clock_registers.cg_spll_func_cntl);
 VAR_11->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_2(VAR_15->clock_registers.cg_spll_func_cntl_2);
 VAR_11->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_2(VAR_15->clock_registers.cg_spll_func_cntl_3);
 VAR_11->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_4 =
  FUNC_2(VAR_15->clock_registers.cg_spll_func_cntl_4);
 VAR_11->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM =
  FUNC_2(VAR_15->clock_registers.cg_spll_spread_spectrum);
 VAR_11->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM_2 =
  FUNC_2(VAR_15->clock_registers.cg_spll_spread_spectrum_2);
 VAR_11->initialState.levels[0].sclk.sclk_value =
  FUNC_2(VAR_12->performance_levels[0].sclk);
 VAR_11->initialState.levels[0].arbRefreshState =
  VAR_4;

 VAR_11->initialState.levels[0].ACIndex = 0;

 VAR_17 = FUNC_10(VAR_9, &VAR_14->vddc_voltage_table,
     VAR_12->performance_levels[0].vddc,
     &VAR_11->initialState.levels[0].vddc);
 if (!VAR_17) {
  u16 VAR_18;

  VAR_17 = FUNC_7(VAR_9,
            &VAR_11->initialState.levels[0].vddc,
            &VAR_18);
  if (!VAR_17)
   FUNC_9(VAR_9, VAR_18,
            VAR_11->initialState.levels[0].vddc.index,
            &VAR_11->initialState.levels[0].std_vddc);
 }

 if (VAR_14->vddci_control)
  FUNC_10(VAR_9,
       &VAR_14->vddci_voltage_table,
       VAR_12->performance_levels[0].vddci,
       &VAR_11->initialState.levels[0].vddci);

 FUNC_8(VAR_9, &VAR_11->initialState.levels[0].mvdd);

 VAR_16 = FUNC_1(0xffff) | FUNC_0(0);
 VAR_11->initialState.levels[0].aT = FUNC_2(VAR_16);

 VAR_11->initialState.levels[0].bSP = FUNC_2(VAR_13->dsp);

 if (VAR_13->boot_in_gen2)
  VAR_11->initialState.levels[0].gen2PCIE = 1;
 else
  VAR_11->initialState.levels[0].gen2PCIE = 0;

 if (VAR_13->mem_gddr5) {
  VAR_11->initialState.levels[0].strobeMode =
   FUNC_3(VAR_9,
        VAR_12->performance_levels[0].mclk);

  if (VAR_12->performance_levels[0].mclk > VAR_13->mclk_edc_enable_threshold)
   VAR_11->initialState.levels[0].mcFlags = VAR_5 | VAR_6;
  else
   VAR_11->initialState.levels[0].mcFlags = 0;
 }

 VAR_11->initialState.levelCount = 1;

 VAR_11->initialState.flags |= VAR_7;

 VAR_11->initialState.levels[0].dpm2.MaxPS = 0;
 VAR_11->initialState.levels[0].dpm2.NearTDPDec = 0;
 VAR_11->initialState.levels[0].dpm2.AboveSafeInc = 0;
 VAR_11->initialState.levels[0].dpm2.BelowSafeInc = 0;

 VAR_16 = VAR_3 | VAR_2;
 VAR_11->initialState.levels[0].SQPowerThrottle = FUNC_2(VAR_16);

 VAR_16 = VAR_1 | VAR_8 | VAR_0;
 VAR_11->initialState.levels[0].SQPowerThrottle_2 = FUNC_2(VAR_16);

 return 0;
}
