
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dsi_pll_regs {int pll_prop_gain_rate; int pll_clock_inverters; int decimal_div_start; int frac_div_start_low; int frac_div_start_mid; int frac_div_start_high; int pll_lockdet_rate; } ;
struct dsi_pll_config {int frac_bits; int lock_timer; scalar_t__ disable_prescaler; } ;
struct dsi_pll_10nm {int vco_ref_clk_rate; int vco_current_rate; struct dsi_pll_regs reg_setup; struct dsi_pll_config pll_configuration; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int*) ;

__attribute__((used)) static void FUNC_2(struct dsi_pll_10nm *VAR_0)
{
 struct dsi_pll_config *VAR_1 = &VAR_0->pll_configuration;
 struct dsi_pll_regs *VAR_2 = &VAR_0->reg_setup;
 u64 VAR_3 = VAR_0->vco_ref_clk_rate;
 u64 VAR_4;
 u64 VAR_5;
 u64 VAR_6, VAR_7;
 u32 VAR_8;
 u64 VAR_9;

 VAR_4 = VAR_0->vco_current_rate;

 if (VAR_1->disable_prescaler)
  VAR_5 = VAR_3;
 else
  VAR_5 = VAR_3 * 2;

 VAR_9 = 1 << VAR_1->frac_bits;
 VAR_7 = FUNC_0(VAR_4 * VAR_9, VAR_5);
 FUNC_1(VAR_7, VAR_9, &VAR_8);

 VAR_6 = FUNC_0(VAR_7, VAR_9);

 if (VAR_4 <= 1900000000UL)
  VAR_2->pll_prop_gain_rate = 8;
 else if (VAR_4 <= 3000000000UL)
  VAR_2->pll_prop_gain_rate = 10;
 else
  VAR_2->pll_prop_gain_rate = 12;
 if (VAR_4 < 1100000000UL)
  VAR_2->pll_clock_inverters = 8;
 else
  VAR_2->pll_clock_inverters = 0;

 VAR_2->pll_lockdet_rate = VAR_1->lock_timer;
 VAR_2->decimal_div_start = VAR_6;
 VAR_2->frac_div_start_low = (VAR_8 & 0xff);
 VAR_2->frac_div_start_mid = (VAR_8 & 0xff00) >> 8;
 VAR_2->frac_div_start_high = (VAR_8 & 0x30000) >> 16;
}
