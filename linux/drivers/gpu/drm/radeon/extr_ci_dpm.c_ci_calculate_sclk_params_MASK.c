
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_7__ {int reference_freq; } ;
struct TYPE_8__ {TYPE_2__ spll; } ;
struct radeon_device {TYPE_3__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct TYPE_6__ {int cg_spll_func_cntl_3; int cg_spll_func_cntl_4; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct ci_power_info {scalar_t__ caps_sclk_ss_support; TYPE_1__ clock_registers; } ;
struct atom_clock_dividers {int ref_div; int fb_div; int post_div; scalar_t__ post_divider; } ;
struct TYPE_9__ {int SclkFrequency; int CgSpllFuncCntl3; int CgSpllFuncCntl4; int SpllSpreadSpectrum; int SpllSpreadSpectrum2; scalar_t__ SclkDid; } ;
typedef TYPE_4__ SMU7_Discrete_GraphicsLevel ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ci_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_5 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_7,
        u32 VAR_8,
        SMU7_Discrete_GraphicsLevel *VAR_9)
{
 struct ci_power_info *VAR_10 = FUNC_3(VAR_7);
 struct atom_clock_dividers VAR_11;
 u32 VAR_12 = VAR_10->clock_registers.cg_spll_func_cntl_3;
 u32 VAR_13 = VAR_10->clock_registers.cg_spll_func_cntl_4;
 u32 VAR_14 = VAR_10->clock_registers.cg_spll_spread_spectrum;
 u32 VAR_15 = VAR_10->clock_registers.cg_spll_spread_spectrum_2;
 u32 VAR_16 = VAR_7->clock.spll.reference_freq;
 u32 VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_4(VAR_7,
          VAR_3,
          VAR_8, 0, &VAR_11);
 if (VAR_19)
  return VAR_19;

 VAR_17 = 1 + VAR_11.ref_div;
 VAR_18 = VAR_11.fb_div & 0x3FFFFFF;

 VAR_12 &= ~VAR_5;
 VAR_12 |= FUNC_2(VAR_18);
 VAR_12 |= VAR_4;

 if (VAR_10->caps_sclk_ss_support) {
  struct radeon_atom_ss VAR_20;
  u32 VAR_21 = VAR_8 * VAR_11.post_div;

  if (FUNC_5(VAR_7, &VAR_20,
           VAR_0, VAR_21)) {
   u32 VAR_22 = VAR_16 * 5 / (VAR_17 * VAR_20.rate);
   u32 VAR_23 = 4 * VAR_20.percentage * VAR_18 / (VAR_22 * 10000);

   VAR_14 &= ~VAR_1;
   VAR_14 |= FUNC_0(VAR_22);
   VAR_14 |= VAR_6;

   VAR_15 &= ~VAR_2;
   VAR_15 |= FUNC_1(VAR_23);
  }
 }

 VAR_9->SclkFrequency = VAR_8;
 VAR_9->CgSpllFuncCntl3 = VAR_12;
 VAR_9->CgSpllFuncCntl4 = VAR_13;
 VAR_9->SpllSpreadSpectrum = VAR_14;
 VAR_9->SpllSpreadSpectrum2 = VAR_15;
 VAR_9->SclkDid = (u8)VAR_11.post_divider;

 return 0;
}
