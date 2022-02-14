
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_11__ {int mclk; int sclk; int flags; int vddc; } ;
struct rv7xx_ps {TYPE_10__ low; } ;
struct TYPE_15__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int mclk_pwrmgt_cntl; int dll_cntl; int mpll_ss1; int mpll_ss2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct TYPE_16__ {TYPE_4__ rv770; } ;
struct rv7xx_power_info {int dsp; scalar_t__ mclk_strobe_mode_threshold; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; scalar_t__ boot_in_gen2; TYPE_5__ clk_regs; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;
struct TYPE_14__ {int flags; TYPE_7__* levels; } ;
struct TYPE_19__ {TYPE_3__ initialState; } ;
struct TYPE_17__ {void* sclk_value; void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_12__ {void* mclk_value; void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; } ;
struct TYPE_13__ {TYPE_1__ mclk770; } ;
struct TYPE_18__ {int gen2PCIE; int gen2XSP; int strobeMode; int mcFlags; void* bSP; void* aT; int mvdd; int vddc; int seqValue; int arbValue; TYPE_6__ sclk; TYPE_2__ mclk; } ;
typedef TYPE_8__ RV770_SMC_STATETABLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_5 (struct radeon_ps*) ;
 int FUNC_6 (struct radeon_device*,TYPE_10__*) ;
 int FUNC_7 (struct radeon_device*,int *) ;
 int FUNC_8 (struct radeon_device*,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_6,
         struct radeon_ps *VAR_7,
         RV770_SMC_STATETABLE *VAR_8)
{
 struct rv7xx_ps *VAR_9 = FUNC_5(VAR_7);
 struct rv7xx_power_info *VAR_10 = FUNC_4(VAR_6);
 u32 VAR_11;

 VAR_8->initialState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL =
  FUNC_2(VAR_10->clk_regs.rv770.mpll_ad_func_cntl);
 VAR_8->initialState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL_2 =
  FUNC_2(VAR_10->clk_regs.rv770.mpll_ad_func_cntl_2);
 VAR_8->initialState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL =
  FUNC_2(VAR_10->clk_regs.rv770.mpll_dq_func_cntl);
 VAR_8->initialState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL_2 =
  FUNC_2(VAR_10->clk_regs.rv770.mpll_dq_func_cntl_2);
 VAR_8->initialState.levels[0].mclk.mclk770.vMCLK_PWRMGT_CNTL =
  FUNC_2(VAR_10->clk_regs.rv770.mclk_pwrmgt_cntl);
 VAR_8->initialState.levels[0].mclk.mclk770.vDLL_CNTL =
  FUNC_2(VAR_10->clk_regs.rv770.dll_cntl);

 VAR_8->initialState.levels[0].mclk.mclk770.vMPLL_SS =
  FUNC_2(VAR_10->clk_regs.rv770.mpll_ss1);
 VAR_8->initialState.levels[0].mclk.mclk770.vMPLL_SS2 =
  FUNC_2(VAR_10->clk_regs.rv770.mpll_ss2);

 VAR_8->initialState.levels[0].mclk.mclk770.mclk_value =
  FUNC_2(VAR_9->low.mclk);

 VAR_8->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_2(VAR_10->clk_regs.rv770.cg_spll_func_cntl);
 VAR_8->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_2(VAR_10->clk_regs.rv770.cg_spll_func_cntl_2);
 VAR_8->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_2(VAR_10->clk_regs.rv770.cg_spll_func_cntl_3);
 VAR_8->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM =
  FUNC_2(VAR_10->clk_regs.rv770.cg_spll_spread_spectrum);
 VAR_8->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM_2 =
  FUNC_2(VAR_10->clk_regs.rv770.cg_spll_spread_spectrum_2);

 VAR_8->initialState.levels[0].sclk.sclk_value =
  FUNC_2(VAR_9->low.sclk);

 VAR_8->initialState.levels[0].arbValue = VAR_2;

 VAR_8->initialState.levels[0].seqValue =
  FUNC_6(VAR_6, &VAR_9->low);

 FUNC_8(VAR_6,
      VAR_9->low.vddc,
      &VAR_8->initialState.levels[0].vddc);
 FUNC_7(VAR_6,
       &VAR_8->initialState.levels[0].mvdd);

 VAR_11 = FUNC_1(0xffff) | FUNC_0(0);
 VAR_8->initialState.levels[0].aT = FUNC_2(VAR_11);

 VAR_8->initialState.levels[0].bSP = FUNC_2(VAR_10->dsp);

 if (VAR_10->boot_in_gen2)
  VAR_8->initialState.levels[0].gen2PCIE = 1;
 else
  VAR_8->initialState.levels[0].gen2PCIE = 0;
 if (VAR_9->low.flags & VAR_0)
  VAR_8->initialState.levels[0].gen2XSP = 1;
 else
  VAR_8->initialState.levels[0].gen2XSP = 0;

 if (VAR_6->family == VAR_1) {
  if (VAR_10->mem_gddr5) {
   if (VAR_9->low.mclk <= VAR_10->mclk_strobe_mode_threshold)
    VAR_8->initialState.levels[0].strobeMode =
     FUNC_3(VAR_9->low.mclk) | 0x10;
   else
    VAR_8->initialState.levels[0].strobeMode = 0;

   if (VAR_9->low.mclk >= VAR_10->mclk_edc_enable_threshold)
    VAR_8->initialState.levels[0].mcFlags = VAR_4 | VAR_5;
   else
    VAR_8->initialState.levels[0].mcFlags = 0;
  }
 }

 VAR_8->initialState.levels[1] = VAR_8->initialState.levels[0];
 VAR_8->initialState.levels[2] = VAR_8->initialState.levels[0];

 VAR_8->initialState.flags |= VAR_3;

 return 0;
}
