
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


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int mclk_pwrmgt_cntl; int dll_cntl; } ;
struct TYPE_9__ {TYPE_1__ rv770; } ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; TYPE_2__ clk_regs; } ;
struct TYPE_10__ {int reference_freq; } ;
struct TYPE_11__ {TYPE_3__ mpll; } ;
struct radeon_device {TYPE_4__ clock; } ;
struct atom_clock_dividers {int ref_div; scalar_t__ vco_mode; int post_div; } ;
struct TYPE_12__ {void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; void* mclk_value; } ;
struct TYPE_13__ {TYPE_5__ mclk770; } ;
typedef TYPE_6__ RV7XX_SMC_MCLK_VALUE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 int FUNC_7 (int,int,scalar_t__,struct atom_clock_dividers*,int*,int*) ;
 int FUNC_8 (int ,int*) ;
 struct rv7xx_power_info* FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_8,
         u32 VAR_9, u32 VAR_10,
         RV7XX_SMC_MCLK_VALUE *VAR_11)
{
 struct rv7xx_power_info *VAR_12 = FUNC_9(VAR_8);
 u8 VAR_13[] = { 0, 16, 17, 20, 21 };
 u32 VAR_14 =
  VAR_12->clk_regs.rv770.mpll_ad_func_cntl;
 u32 VAR_15 =
  VAR_12->clk_regs.rv770.mpll_ad_func_cntl_2;
 u32 VAR_16 =
  VAR_12->clk_regs.rv770.mpll_dq_func_cntl;
 u32 VAR_17 =
  VAR_12->clk_regs.rv770.mpll_dq_func_cntl_2;
 u32 VAR_18 =
  VAR_12->clk_regs.rv770.mclk_pwrmgt_cntl;
 u32 VAR_19 = VAR_12->clk_regs.rv770.dll_cntl;
 struct atom_clock_dividers VAR_20;
 u32 VAR_21 = VAR_8->clock.mpll.reference_freq;
 u32 VAR_22, VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 int VAR_26;

 VAR_26 = FUNC_6(VAR_8, VAR_3,
          VAR_10, 0, &VAR_20);
 if (VAR_26)
  return VAR_26;

 if ((VAR_20.ref_div < 1) || (VAR_20.ref_div > 5))
  return -VAR_4;

 FUNC_7(VAR_10, VAR_21,
        VAR_12->mem_gddr5,
        &VAR_20, &VAR_22, &VAR_23);

 VAR_26 = FUNC_8(VAR_20.post_div, &VAR_24);
 if (VAR_26)
  return VAR_26;

 VAR_25 = FUNC_10(VAR_8, VAR_22);

 VAR_14 &= ~(VAR_2 |
          VAR_7 |
          VAR_1 |
          VAR_0 |
          VAR_5);
 VAR_14 |= FUNC_2(VAR_13[VAR_20.ref_div - 1]);
 VAR_14 |= FUNC_4(VAR_24);
 VAR_14 |= FUNC_0(VAR_22);
 VAR_14 |= FUNC_1(VAR_23);
 VAR_14 |= FUNC_3(VAR_25);

 if (VAR_20.vco_mode)
  VAR_15 |= VAR_6;
 else
  VAR_15 &= ~VAR_6;

 if (VAR_12->mem_gddr5) {
  FUNC_7(VAR_10,
         VAR_21,
         VAR_12->mem_gddr5,
         &VAR_20, &VAR_22, &VAR_23);

  VAR_25 = FUNC_10(VAR_8, VAR_22);

  VAR_26 = FUNC_8(VAR_20.post_div, &VAR_24);
  if (VAR_26)
   return VAR_26;

  VAR_16 &= ~(VAR_2 |
           VAR_7 |
           VAR_1 |
           VAR_0 |
           VAR_5);
  VAR_16 |= FUNC_2(VAR_13[VAR_20.ref_div - 1]);
  VAR_16 |= FUNC_4(VAR_24);
  VAR_16 |= FUNC_0(VAR_22);
  VAR_16 |= FUNC_1(VAR_23);
  VAR_16 |= FUNC_3(VAR_25);

  if (VAR_20.vco_mode)
   VAR_17 |= VAR_6;
  else
   VAR_17 &= ~VAR_6;
 }

 VAR_11->mclk770.mclk_value = FUNC_5(VAR_10);
 VAR_11->mclk770.vMPLL_AD_FUNC_CNTL = FUNC_5(VAR_14);
 VAR_11->mclk770.vMPLL_AD_FUNC_CNTL_2 = FUNC_5(VAR_15);
 VAR_11->mclk770.vMPLL_DQ_FUNC_CNTL = FUNC_5(VAR_16);
 VAR_11->mclk770.vMPLL_DQ_FUNC_CNTL_2 = FUNC_5(VAR_17);
 VAR_11->mclk770.vMCLK_PWRMGT_CNTL = FUNC_5(VAR_18);
 VAR_11->mclk770.vDLL_CNTL = FUNC_5(VAR_19);

 return 0;
}
