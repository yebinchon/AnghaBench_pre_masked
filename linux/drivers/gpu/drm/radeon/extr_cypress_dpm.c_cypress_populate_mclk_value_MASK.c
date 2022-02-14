
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
struct atom_clock_dividers {int post_div; int whole_fb_div; int frac_fb_div; int ref_div; scalar_t__ vco_mode; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int ) ;
 int VAR_19 ;
 int FUNC_8 (int) ;
 int VAR_20 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_12 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,int) ;
 struct rv7xx_power_info* FUNC_15 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_16(struct radeon_device *VAR_21,
           u32 VAR_22, u32 VAR_23,
           RV7XX_SMC_MCLK_VALUE *VAR_24,
           bool VAR_25, bool VAR_26)
{
 struct rv7xx_power_info *VAR_27 = FUNC_15(VAR_21);

 u32 VAR_28 =
  VAR_27->clk_regs.rv770.mpll_ad_func_cntl;
 u32 VAR_29 =
  VAR_27->clk_regs.rv770.mpll_ad_func_cntl_2;
 u32 VAR_30 =
  VAR_27->clk_regs.rv770.mpll_dq_func_cntl;
 u32 VAR_31 =
  VAR_27->clk_regs.rv770.mpll_dq_func_cntl_2;
 u32 VAR_32 =
  VAR_27->clk_regs.rv770.mclk_pwrmgt_cntl;
 u32 VAR_33 =
  VAR_27->clk_regs.rv770.dll_cntl;
 u32 VAR_34 = VAR_27->clk_regs.rv770.mpll_ss1;
 u32 VAR_35 = VAR_27->clk_regs.rv770.mpll_ss2;
 struct atom_clock_dividers VAR_36;
 u32 VAR_37;
 u32 VAR_38;
 int VAR_39;
 u32 VAR_40;

 VAR_39 = FUNC_11(VAR_21, VAR_6,
          VAR_23, VAR_25, &VAR_36);
 if (VAR_39)
  return VAR_39;

 if (!VAR_25) {
  VAR_40 = FUNC_7(VAR_9);

  if(VAR_40 & 0x8000000)
   VAR_36.post_div = 1;
 }

 VAR_37 = FUNC_10(VAR_21, VAR_36.whole_fb_div);

 VAR_28 &= ~(VAR_3 |
          VAR_20 |
          VAR_2 |
          VAR_1 |
          VAR_8);
 VAR_28 |= FUNC_2(VAR_36.ref_div);
 VAR_28 |= FUNC_8(VAR_36.post_div);
 VAR_28 |= FUNC_0(VAR_36.whole_fb_div);
 VAR_28 |= FUNC_1(VAR_36.frac_fb_div);
 VAR_28 |= FUNC_6(VAR_37);

 if (VAR_36.vco_mode)
  VAR_29 |= VAR_19;
 else
  VAR_29 &= ~VAR_19;

 if (VAR_27->mem_gddr5) {
  VAR_30 &= ~(VAR_3 |
           VAR_20 |
           VAR_2 |
           VAR_1 |
           VAR_8);
  VAR_30 |= FUNC_2(VAR_36.ref_div);
  VAR_30 |= FUNC_8(VAR_36.post_div);
  VAR_30 |= FUNC_0(VAR_36.whole_fb_div);
  VAR_30 |= FUNC_1(VAR_36.frac_fb_div);
  VAR_30 |= FUNC_6(VAR_37);

  if (VAR_25)
   VAR_30 &= ~VAR_18;
  else
   VAR_30 |= VAR_18;

  if (VAR_36.vco_mode)
   VAR_31 |= VAR_19;
  else
   VAR_31 &= ~VAR_19;
 }

 if (VAR_27->mclk_ss) {
  struct radeon_atom_ss VAR_41;
  u32 VAR_42 = VAR_23 * VAR_36.post_div;

  if (FUNC_12(VAR_21, &VAR_41,
           VAR_0, VAR_42)) {
   u32 VAR_43 = VAR_21->clock.mpll.reference_freq;
   u32 VAR_44 = FUNC_13(VAR_36.ref_div);
   u32 VAR_45 = VAR_43 * 5 / (VAR_44 * VAR_41.rate);
   u32 VAR_46 = VAR_41.percentage *
    (0x4000 * VAR_36.whole_fb_div + 0x800 * VAR_36.frac_fb_div) / (VAR_45 * 625);

   VAR_34 &= ~VAR_5;
   VAR_34 |= FUNC_4(VAR_46);

   VAR_35 &= ~VAR_4;
   VAR_35 |= FUNC_3(VAR_45);
  }
 }

 VAR_38 = FUNC_14(VAR_27->mem_gddr5,
     VAR_23);

 VAR_32 &= ~VAR_7;
 VAR_32 |= FUNC_5(VAR_38);
 if (VAR_26)
  VAR_32 |= (VAR_10 |
         VAR_11 |
         VAR_12 |
         VAR_13 |
         VAR_14 |
         VAR_15 |
         VAR_16 |
         VAR_17);
 else
  VAR_32 &= ~(VAR_10 |
          VAR_11 |
          VAR_12 |
          VAR_13 |
          VAR_14 |
          VAR_15 |
          VAR_16 |
          VAR_17);

 VAR_24->mclk770.mclk_value = FUNC_9(VAR_23);
 VAR_24->mclk770.vMPLL_AD_FUNC_CNTL = FUNC_9(VAR_28);
 VAR_24->mclk770.vMPLL_AD_FUNC_CNTL_2 = FUNC_9(VAR_29);
 VAR_24->mclk770.vMPLL_DQ_FUNC_CNTL = FUNC_9(VAR_30);
 VAR_24->mclk770.vMPLL_DQ_FUNC_CNTL_2 = FUNC_9(VAR_31);
 VAR_24->mclk770.vMCLK_PWRMGT_CNTL = FUNC_9(VAR_32);
 VAR_24->mclk770.vDLL_CNTL = FUNC_9(VAR_33);
 VAR_24->mclk770.vMPLL_SS = FUNC_9(VAR_34);
 VAR_24->mclk770.vMPLL_SS2 = FUNC_9(VAR_35);

 return 0;
}
