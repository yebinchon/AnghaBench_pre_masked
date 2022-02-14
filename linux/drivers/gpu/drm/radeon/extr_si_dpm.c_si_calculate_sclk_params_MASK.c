
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_func_cntl_4; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct si_power_info {TYPE_1__ clock_registers; } ;
struct rv7xx_power_info {scalar_t__ sclk_ss; } ;
struct TYPE_7__ {int reference_freq; } ;
struct TYPE_8__ {TYPE_2__ spll; } ;
struct radeon_device {TYPE_3__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_clock_dividers {int ref_div; int post_div; } ;
struct TYPE_9__ {int sclk_value; int vCG_SPLL_FUNC_CNTL; int vCG_SPLL_FUNC_CNTL_2; int vCG_SPLL_FUNC_CNTL_3; int vCG_SPLL_FUNC_CNTL_4; int vCG_SPLL_SPREAD_SPECTRUM; int vCG_SPLL_SPREAD_SPECTRUM_2; } ;
typedef TYPE_4__ SISLANDS_SMC_SCLK_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_8 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 struct rv7xx_power_info* FUNC_9 (struct radeon_device*) ;
 struct si_power_info* FUNC_10 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_10,
        u32 VAR_11,
        SISLANDS_SMC_SCLK_VALUE *VAR_12)
{
 struct rv7xx_power_info *VAR_13 = FUNC_9(VAR_10);
 struct si_power_info *VAR_14 = FUNC_10(VAR_10);
 struct atom_clock_dividers VAR_15;
 u32 VAR_16 = VAR_14->clock_registers.cg_spll_func_cntl;
 u32 VAR_17 = VAR_14->clock_registers.cg_spll_func_cntl_2;
 u32 VAR_18 = VAR_14->clock_registers.cg_spll_func_cntl_3;
 u32 VAR_19 = VAR_14->clock_registers.cg_spll_func_cntl_4;
 u32 VAR_20 = VAR_14->clock_registers.cg_spll_spread_spectrum;
 u32 VAR_21 = VAR_14->clock_registers.cg_spll_spread_spectrum_2;
 u64 VAR_22;
 u32 VAR_23 = VAR_10->clock.spll.reference_freq;
 u32 VAR_24;
 u32 VAR_25;
 int VAR_26;

 VAR_26 = FUNC_7(VAR_10, VAR_3,
          VAR_11, 0, &VAR_15);
 if (VAR_26)
  return VAR_26;

 VAR_24 = 1 + VAR_15.ref_div;

 VAR_22 = (u64) VAR_11 * VAR_24 * VAR_15.post_div * 16384;
 FUNC_6(VAR_22, VAR_23);
 VAR_25 = (u32) VAR_22;

 VAR_16 &= ~(VAR_7 | VAR_8);
 VAR_16 |= FUNC_5(VAR_15.ref_div);
 VAR_16 |= FUNC_4(VAR_15.post_div);

 VAR_17 &= ~VAR_4;
 VAR_17 |= FUNC_2(2);

 VAR_18 &= ~VAR_6;
 VAR_18 |= FUNC_3(VAR_25);
 VAR_18 |= VAR_5;

 if (VAR_13->sclk_ss) {
  struct radeon_atom_ss VAR_27;
  u32 VAR_28 = VAR_11 * VAR_15.post_div;

  if (FUNC_8(VAR_10, &VAR_27,
           VAR_0, VAR_28)) {
   u32 VAR_29 = VAR_23 * 5 / (VAR_24 * VAR_27.rate);
   u32 VAR_30 = 4 * VAR_27.percentage * VAR_25 / (VAR_29 * 10000);

   VAR_20 &= ~VAR_1;
   VAR_20 |= FUNC_0(VAR_29);
   VAR_20 |= VAR_9;

   VAR_21 &= ~VAR_2;
   VAR_21 |= FUNC_1(VAR_30);
  }
 }

 VAR_12->sclk_value = VAR_11;
 VAR_12->vCG_SPLL_FUNC_CNTL = VAR_16;
 VAR_12->vCG_SPLL_FUNC_CNTL_2 = VAR_17;
 VAR_12->vCG_SPLL_FUNC_CNTL_3 = VAR_18;
 VAR_12->vCG_SPLL_FUNC_CNTL_4 = VAR_19;
 VAR_12->vCG_SPLL_SPREAD_SPECTRUM = VAR_20;
 VAR_12->vCG_SPLL_SPREAD_SPECTRUM_2 = VAR_21;

 return 0;
}
