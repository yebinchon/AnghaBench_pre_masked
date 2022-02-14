
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
struct TYPE_8__ {int mclk_pwrmgt_cntl; int dll_cntl; int mpll_func_cntl; int mpll_func_cntl2; int mpll_func_cntl3; int mpll_ss; int mpll_ss2; } ;
struct TYPE_9__ {TYPE_1__ rv730; } ;
struct rv7xx_power_info {scalar_t__ mclk_ss; TYPE_2__ clk_regs; } ;
struct TYPE_10__ {int reference_freq; } ;
struct TYPE_11__ {TYPE_3__ mpll; } ;
struct radeon_device {TYPE_4__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_clock_dividers {int ref_div; int post_div; int fb_div; scalar_t__ enable_dithen; scalar_t__ enable_post_div; } ;
struct TYPE_12__ {void* vMPLL_SS2; void* vMPLL_SS; void* vMPLL_FUNC_CNTL3; void* vMPLL_FUNC_CNTL2; void* vMPLL_FUNC_CNTL; void* mclk_value; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; } ;
struct TYPE_13__ {TYPE_5__ mclk730; } ;
typedef TYPE_6__* LPRV7XX_SMC_MCLK_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_8 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 struct rv7xx_power_info* FUNC_9 (struct radeon_device*) ;

int FUNC_10(struct radeon_device *VAR_11,
         u32 VAR_12, u32 VAR_13,
         LPRV7XX_SMC_MCLK_VALUE VAR_14)
{
 struct rv7xx_power_info *VAR_15 = FUNC_9(VAR_11);
 u32 VAR_16 = VAR_15->clk_regs.rv730.mclk_pwrmgt_cntl;
 u32 VAR_17 = VAR_15->clk_regs.rv730.dll_cntl;
 u32 VAR_18 = VAR_15->clk_regs.rv730.mpll_func_cntl;
 u32 VAR_19 = VAR_15->clk_regs.rv730.mpll_func_cntl2;
 u32 VAR_20 = VAR_15->clk_regs.rv730.mpll_func_cntl3;
 u32 VAR_21 = VAR_15->clk_regs.rv730.mpll_ss;
 u32 VAR_22 = VAR_15->clk_regs.rv730.mpll_ss2;
 struct atom_clock_dividers VAR_23;
 u32 VAR_24, VAR_25;
 int VAR_26;

 VAR_26 = FUNC_7(VAR_11, VAR_3,
          VAR_13, 0, &VAR_23);
 if (VAR_26)
  return VAR_26;

 VAR_25 = VAR_23.ref_div + 1;

 if (VAR_23.enable_post_div)
  VAR_24 = ((VAR_23.post_div >> 4) & 0xf) +
   (VAR_23.post_div & 0xf) + 2;
 else
  VAR_24 = 1;


 if (VAR_23.enable_post_div)
  VAR_18 |= VAR_5;
 else
  VAR_18 &= ~VAR_5;

 VAR_18 &= ~(VAR_9 | VAR_7 | VAR_8);
 VAR_18 |= FUNC_5(VAR_23.ref_div);
 VAR_18 |= FUNC_3((VAR_23.post_div >> 4) & 0xf);
 VAR_18 |= FUNC_4(VAR_23.post_div & 0xf);

 VAR_20 &= ~VAR_6;
 VAR_20 |= FUNC_2(VAR_23.fb_div);
 if (VAR_23.enable_dithen)
  VAR_20 |= VAR_4;
 else
  VAR_20 &= ~VAR_4;

 if (VAR_15->mclk_ss) {
  struct radeon_atom_ss VAR_27;
  u32 VAR_28 = VAR_13 * VAR_24;

  if (FUNC_8(VAR_11, &VAR_27,
           VAR_0, VAR_28)) {
   u32 VAR_29 = VAR_11->clock.mpll.reference_freq;
   u32 VAR_30 = VAR_29 * 5 / (VAR_25 * VAR_27.rate);
   u32 VAR_31 = VAR_27.percentage * VAR_23.fb_div / (VAR_30 * 10000);

   VAR_21 &= ~VAR_1;
   VAR_21 |= FUNC_0(VAR_30);
   VAR_21 |= VAR_10;

   VAR_22 &= ~VAR_2;
   VAR_21 |= FUNC_1(VAR_31);
  }
 }


 VAR_14->mclk730.vMCLK_PWRMGT_CNTL = FUNC_6(VAR_16);
 VAR_14->mclk730.vDLL_CNTL = FUNC_6(VAR_17);
 VAR_14->mclk730.mclk_value = FUNC_6(VAR_13);
 VAR_14->mclk730.vMPLL_FUNC_CNTL = FUNC_6(VAR_18);
 VAR_14->mclk730.vMPLL_FUNC_CNTL2 = FUNC_6(VAR_19);
 VAR_14->mclk730.vMPLL_FUNC_CNTL3 = FUNC_6(VAR_20);
 VAR_14->mclk730.vMPLL_SS = FUNC_6(VAR_21);
 VAR_14->mclk730.vMPLL_SS2 = FUNC_6(VAR_22);

 return 0;
}
