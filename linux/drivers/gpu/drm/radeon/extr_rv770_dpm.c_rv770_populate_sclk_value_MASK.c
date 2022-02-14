
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct TYPE_8__ {TYPE_1__ rv770; } ;
struct rv7xx_power_info {scalar_t__ sclk_ss; TYPE_2__ clk_regs; } ;
struct TYPE_9__ {int reference_freq; } ;
struct TYPE_10__ {TYPE_3__ spll; } ;
struct radeon_device {TYPE_4__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_clock_dividers {int ref_div; int post_div; scalar_t__ enable_post_div; } ;
struct TYPE_11__ {void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; void* sclk_value; } ;
typedef TYPE_5__ RV770_SMC_SCLK_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_10 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 struct rv7xx_power_info* FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_12,
         u32 VAR_13,
         RV770_SMC_SCLK_VALUE *VAR_14)
{
 struct rv7xx_power_info *VAR_15 = FUNC_11(VAR_12);
 struct atom_clock_dividers VAR_16;
 u32 VAR_17 =
  VAR_15->clk_regs.rv770.cg_spll_func_cntl;
 u32 VAR_18 =
  VAR_15->clk_regs.rv770.cg_spll_func_cntl_2;
 u32 VAR_19 =
  VAR_15->clk_regs.rv770.cg_spll_func_cntl_3;
 u32 VAR_20 =
  VAR_15->clk_regs.rv770.cg_spll_spread_spectrum;
 u32 VAR_21 =
  VAR_15->clk_regs.rv770.cg_spll_spread_spectrum_2;
 u64 VAR_22;
 u32 VAR_23 = VAR_12->clock.spll.reference_freq;
 u32 VAR_24, VAR_25;
 u32 VAR_26;
 int VAR_27;

 VAR_27 = FUNC_9(VAR_12, VAR_3,
          VAR_13, 0, &VAR_16);
 if (VAR_27)
  return VAR_27;

 VAR_24 = 1 + VAR_16.ref_div;

 if (VAR_16.enable_post_div)
  VAR_25 = (0x0f & (VAR_16.post_div >> 4)) + (0x0f & VAR_16.post_div) + 2;
 else
  VAR_25 = 1;

 VAR_22 = (u64) VAR_13 * VAR_24 * VAR_25 * 16384;
 FUNC_8(VAR_22, VAR_23);
 VAR_26 = (u32) VAR_22;

 if (VAR_16.enable_post_div)
  VAR_17 |= VAR_6;
 else
  VAR_17 &= ~VAR_6;
 VAR_17 &= ~(VAR_8 | VAR_9 | VAR_10);
 VAR_17 |= FUNC_6(VAR_16.ref_div);
 VAR_17 |= FUNC_4((VAR_16.post_div >> 4) & 0xf);
 VAR_17 |= FUNC_5(VAR_16.post_div & 0xf);

 VAR_18 &= ~VAR_4;
 VAR_18 |= FUNC_2(2);

 VAR_19 &= ~VAR_7;
 VAR_19 |= FUNC_3(VAR_26);
 VAR_19 |= VAR_5;

 if (VAR_15->sclk_ss) {
  struct radeon_atom_ss VAR_28;
  u32 VAR_29 = VAR_13 * VAR_25;

  if (FUNC_10(VAR_12, &VAR_28,
           VAR_0, VAR_29)) {
   u32 VAR_30 = VAR_23 * 5 / (VAR_24 * VAR_28.rate);
   u32 VAR_31 = VAR_28.percentage * VAR_26 / (VAR_30 * 10000);

   VAR_20 &= ~VAR_1;
   VAR_20 |= FUNC_0(VAR_30);
   VAR_20 |= VAR_11;

   VAR_21 &= ~VAR_2;
   VAR_21 |= FUNC_1(VAR_31);
  }
 }

 VAR_14->sclk_value = FUNC_7(VAR_13);
 VAR_14->vCG_SPLL_FUNC_CNTL = FUNC_7(VAR_17);
 VAR_14->vCG_SPLL_FUNC_CNTL_2 = FUNC_7(VAR_18);
 VAR_14->vCG_SPLL_FUNC_CNTL_3 = FUNC_7(VAR_19);
 VAR_14->vCG_SPLL_SPREAD_SPECTRUM = FUNC_7(VAR_20);
 VAR_14->vCG_SPLL_SPREAD_SPECTRUM_2 = FUNC_7(VAR_21);

 return 0;
}
