
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_pll_config {int output_div; int dec_bits; int frac_bits; int lock_timer; int ssc_freq; int ssc_offset; int ssc_adj_per; int thresh_cycles; int refclk_cycles; int div_override; int ignore_frac; int disable_prescaler; int enable_ssc; scalar_t__ ssc_center; int ref_freq; } ;
struct dsi_pll_10nm {int vco_ref_clk_rate; struct dsi_pll_config pll_configuration; } ;



__attribute__((used)) static void FUNC_0(struct dsi_pll_10nm *VAR_0)
{
 struct dsi_pll_config *VAR_1 = &VAR_0->pll_configuration;

 VAR_1->ref_freq = VAR_0->vco_ref_clk_rate;
 VAR_1->output_div = 1;
 VAR_1->dec_bits = 8;
 VAR_1->frac_bits = 18;
 VAR_1->lock_timer = 64;
 VAR_1->ssc_freq = 31500;
 VAR_1->ssc_offset = 5000;
 VAR_1->ssc_adj_per = 2;
 VAR_1->thresh_cycles = 32;
 VAR_1->refclk_cycles = 256;

 VAR_1->div_override = 0;
 VAR_1->ignore_frac = 0;
 VAR_1->disable_prescaler = 0;

 VAR_1->enable_ssc = 0;
 VAR_1->ssc_center = 0;
}
