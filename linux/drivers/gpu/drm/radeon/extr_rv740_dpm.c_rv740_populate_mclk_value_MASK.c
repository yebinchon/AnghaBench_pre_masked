
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int mclk_pwrmgt_cntl; int dll_cntl; int mpll_ss1; int mpll_ss2; } ;
struct TYPE_9__ {TYPE_1__ rv770; } ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; scalar_t__ mclk_ss; TYPE_2__ clk_regs; } ;
struct TYPE_10__ {int reference_freq; } ;
struct TYPE_11__ {TYPE_3__ mpll; } ;
struct radeon_device {TYPE_4__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_clock_dividers {int whole_fb_div; int post_div; int frac_fb_div; int ref_div; scalar_t__ vco_mode; } ;
struct TYPE_12__ {void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; void* mclk_value; } ;
struct TYPE_13__ {TYPE_5__ mclk770; } ;
typedef TYPE_6__ RV7XX_SMC_MCLK_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 int VAR_10 ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_10 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int) ;
 struct rv7xx_power_info* FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,int) ;

int FUNC_15(struct radeon_device *VAR_11,
         u32 VAR_12, u32 VAR_13,
         RV7XX_SMC_MCLK_VALUE *VAR_14)
{
 struct rv7xx_power_info *VAR_15 = FUNC_13(VAR_11);
 u32 VAR_16 = VAR_15->clk_regs.rv770.mpll_ad_func_cntl;
 u32 VAR_17 = VAR_15->clk_regs.rv770.mpll_ad_func_cntl_2;
 u32 VAR_18 = VAR_15->clk_regs.rv770.mpll_dq_func_cntl;
 u32 VAR_19 = VAR_15->clk_regs.rv770.mpll_dq_func_cntl_2;
 u32 VAR_20 = VAR_15->clk_regs.rv770.mclk_pwrmgt_cntl;
 u32 VAR_21 = VAR_15->clk_regs.rv770.dll_cntl;
 u32 VAR_22 = VAR_15->clk_regs.rv770.mpll_ss1;
 u32 VAR_23 = VAR_15->clk_regs.rv770.mpll_ss2;
 struct atom_clock_dividers VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 int VAR_27;

 VAR_27 = FUNC_9(VAR_11, VAR_6,
          VAR_13, 0, &VAR_24);
 if (VAR_27)
  return VAR_27;

 VAR_25 = FUNC_14(VAR_11, VAR_24.whole_fb_div);

 VAR_16 &= ~(VAR_3 |
          VAR_10 |
          VAR_2 |
          VAR_1 |
          VAR_8);
 VAR_16 |= FUNC_2(VAR_24.ref_div);
 VAR_16 |= FUNC_7(VAR_24.post_div);
 VAR_16 |= FUNC_0(VAR_24.whole_fb_div);
 VAR_16 |= FUNC_1(VAR_24.frac_fb_div);
 VAR_16 |= FUNC_6(VAR_25);

 if (VAR_24.vco_mode)
  VAR_17 |= VAR_9;
 else
  VAR_17 &= ~VAR_9;

 if (VAR_15->mem_gddr5) {
  VAR_18 &= ~(VAR_3 |
           VAR_10 |
           VAR_2 |
           VAR_1 |
           VAR_8);
  VAR_18 |= FUNC_2(VAR_24.ref_div);
  VAR_18 |= FUNC_7(VAR_24.post_div);
  VAR_18 |= FUNC_0(VAR_24.whole_fb_div);
  VAR_18 |= FUNC_1(VAR_24.frac_fb_div);
  VAR_18 |= FUNC_6(VAR_25);

  if (VAR_24.vco_mode)
   VAR_19 |= VAR_9;
  else
   VAR_19 &= ~VAR_9;
 }

 if (VAR_15->mclk_ss) {
  struct radeon_atom_ss VAR_28;
  u32 VAR_29 = VAR_13 * VAR_24.post_div;

  if (FUNC_10(VAR_11, &VAR_28,
           VAR_0, VAR_29)) {
   u32 VAR_30 = VAR_11->clock.mpll.reference_freq;
   u32 VAR_31 = FUNC_11(VAR_24.ref_div);
   u32 VAR_32 = VAR_30 * 5 / (VAR_31 * VAR_28.rate);
   u32 VAR_33 = 0x40000 * VAR_28.percentage *
    (VAR_24.whole_fb_div + (VAR_24.frac_fb_div / 8)) / (VAR_32 * 10000);

   VAR_22 &= ~VAR_5;
   VAR_22 |= FUNC_4(VAR_33);

   VAR_23 &= ~VAR_4;
   VAR_23 |= FUNC_3(VAR_32);
  }
 }

 VAR_26 = FUNC_12(VAR_15->mem_gddr5,
     VAR_13);

 VAR_20 &= ~VAR_7;
 VAR_20 |= FUNC_5(VAR_26);

 VAR_14->mclk770.mclk_value = FUNC_8(VAR_13);
 VAR_14->mclk770.vMPLL_AD_FUNC_CNTL = FUNC_8(VAR_16);
 VAR_14->mclk770.vMPLL_AD_FUNC_CNTL_2 = FUNC_8(VAR_17);
 VAR_14->mclk770.vMPLL_DQ_FUNC_CNTL = FUNC_8(VAR_18);
 VAR_14->mclk770.vMPLL_DQ_FUNC_CNTL_2 = FUNC_8(VAR_19);
 VAR_14->mclk770.vMCLK_PWRMGT_CNTL = FUNC_8(VAR_20);
 VAR_14->mclk770.vDLL_CNTL = FUNC_8(VAR_21);
 VAR_14->mclk770.vMPLL_SS = FUNC_8(VAR_22);
 VAR_14->mclk770.vMPLL_SS2 = FUNC_8(VAR_23);

 return 0;
}
