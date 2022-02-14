
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int mclk; int sclk; int flags; int vddci; int vddc; } ;
struct rv7xx_ps {TYPE_3__ low; } ;
struct TYPE_18__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int mclk_pwrmgt_cntl; int dll_cntl; int mpll_ss1; int mpll_ss2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct TYPE_17__ {TYPE_8__ rv770; } ;
struct rv7xx_power_info {int dsp; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; scalar_t__ boot_in_gen2; TYPE_7__ clk_regs; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; } ;
struct TYPE_16__ {int flags; TYPE_5__* levels; } ;
struct TYPE_19__ {TYPE_6__ initialState; } ;
struct TYPE_14__ {void* sclk_value; void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_11__ {void* mclk_value; void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; } ;
struct TYPE_12__ {TYPE_1__ mclk770; } ;
struct TYPE_15__ {int gen2PCIE; int gen2XSP; int mcFlags; int strobeMode; void* bSP; void* aT; int mvdd; int vddci; int vddc; scalar_t__ ACIndex; int arbValue; TYPE_4__ sclk; TYPE_2__ mclk; } ;
typedef TYPE_9__ RV770_SMC_STATETABLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,scalar_t__) ;
 int FUNC_4 (struct radeon_device*,int *) ;
 int FUNC_5 (struct radeon_device*,int *,int ,int *) ;
 struct evergreen_power_info* FUNC_6 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_7 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_8 (struct radeon_ps*) ;

int FUNC_9(struct radeon_device *VAR_5,
           struct radeon_ps *VAR_6,
           RV770_SMC_STATETABLE *VAR_7)
{
 struct rv7xx_ps *VAR_8 = FUNC_8(VAR_6);
 struct rv7xx_power_info *VAR_9 = FUNC_7(VAR_5);
 struct evergreen_power_info *VAR_10 = FUNC_6(VAR_5);
 u32 VAR_11;

 VAR_7->initialState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL =
  FUNC_2(VAR_9->clk_regs.rv770.mpll_ad_func_cntl);
 VAR_7->initialState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL_2 =
  FUNC_2(VAR_9->clk_regs.rv770.mpll_ad_func_cntl_2);
 VAR_7->initialState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL =
  FUNC_2(VAR_9->clk_regs.rv770.mpll_dq_func_cntl);
 VAR_7->initialState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL_2 =
  FUNC_2(VAR_9->clk_regs.rv770.mpll_dq_func_cntl_2);
 VAR_7->initialState.levels[0].mclk.mclk770.vMCLK_PWRMGT_CNTL =
  FUNC_2(VAR_9->clk_regs.rv770.mclk_pwrmgt_cntl);
 VAR_7->initialState.levels[0].mclk.mclk770.vDLL_CNTL =
  FUNC_2(VAR_9->clk_regs.rv770.dll_cntl);

 VAR_7->initialState.levels[0].mclk.mclk770.vMPLL_SS =
  FUNC_2(VAR_9->clk_regs.rv770.mpll_ss1);
 VAR_7->initialState.levels[0].mclk.mclk770.vMPLL_SS2 =
  FUNC_2(VAR_9->clk_regs.rv770.mpll_ss2);

 VAR_7->initialState.levels[0].mclk.mclk770.mclk_value =
  FUNC_2(VAR_8->low.mclk);

 VAR_7->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_2(VAR_9->clk_regs.rv770.cg_spll_func_cntl);
 VAR_7->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_2(VAR_9->clk_regs.rv770.cg_spll_func_cntl_2);
 VAR_7->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_2(VAR_9->clk_regs.rv770.cg_spll_func_cntl_3);
 VAR_7->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM =
  FUNC_2(VAR_9->clk_regs.rv770.cg_spll_spread_spectrum);
 VAR_7->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM_2 =
  FUNC_2(VAR_9->clk_regs.rv770.cg_spll_spread_spectrum_2);

 VAR_7->initialState.levels[0].sclk.sclk_value =
  FUNC_2(VAR_8->low.sclk);

 VAR_7->initialState.levels[0].arbValue = VAR_1;

 VAR_7->initialState.levels[0].ACIndex = 0;

 FUNC_5(VAR_5,
           &VAR_10->vddc_voltage_table,
           VAR_8->low.vddc,
           &VAR_7->initialState.levels[0].vddc);

 if (VAR_10->vddci_control)
  FUNC_5(VAR_5,
            &VAR_10->vddci_voltage_table,
            VAR_8->low.vddci,
            &VAR_7->initialState.levels[0].vddci);

 FUNC_4(VAR_5,
         &VAR_7->initialState.levels[0].mvdd);

 VAR_11 = FUNC_1(0xffff) | FUNC_0(0);
 VAR_7->initialState.levels[0].aT = FUNC_2(VAR_11);

 VAR_7->initialState.levels[0].bSP = FUNC_2(VAR_9->dsp);


 if (VAR_9->boot_in_gen2)
  VAR_7->initialState.levels[0].gen2PCIE = 1;
 else
  VAR_7->initialState.levels[0].gen2PCIE = 0;
 if (VAR_8->low.flags & VAR_0)
  VAR_7->initialState.levels[0].gen2XSP = 1;
 else
  VAR_7->initialState.levels[0].gen2XSP = 0;

 if (VAR_9->mem_gddr5) {
  VAR_7->initialState.levels[0].strobeMode =
   FUNC_3(VAR_5,
        VAR_8->low.mclk);

  if (VAR_8->low.mclk > VAR_9->mclk_edc_enable_threshold)
   VAR_7->initialState.levels[0].mcFlags = VAR_3 | VAR_4;
  else
   VAR_7->initialState.levels[0].mcFlags = 0;
 }

 VAR_7->initialState.levels[1] = VAR_7->initialState.levels[0];
 VAR_7->initialState.levels[2] = VAR_7->initialState.levels[0];

 VAR_7->initialState.flags |= VAR_2;

 return 0;
}
