
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dsi_pll_regs {int frac_div_start_low; int frac_div_start_mid; int frac_div_start_high; int decimal_div_start; int ssc_div_per_low; int ssc_div_per_high; int ssc_stepsize_low; int ssc_stepsize_high; int ssc_adjper_low; int ssc_adjper_high; int ssc_control; } ;
struct dsi_pll_config {int ssc_adj_per; int frac_bits; int ssc_offset; scalar_t__ ssc_center; int ssc_freq; int ref_freq; int enable_ssc; } ;
struct dsi_pll_10nm {struct dsi_pll_regs reg_setup; struct dsi_pll_config pll_configuration; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct dsi_pll_10nm *VAR_1)
{
 struct dsi_pll_config *VAR_2 = &VAR_1->pll_configuration;
 struct dsi_pll_regs *VAR_3 = &VAR_1->reg_setup;
 u32 VAR_4;
 u32 VAR_5;
 u64 VAR_6;
 u64 VAR_7;

 if (!VAR_2->enable_ssc) {
  FUNC_0("SSC not enabled\n");
  return;
 }

 VAR_4 = FUNC_1(VAR_2->ref_freq, VAR_2->ssc_freq) / 2 - 1;
 VAR_5 = (VAR_4 + 1) % (VAR_2->ssc_adj_per + 1);
 VAR_4 -= VAR_5;

 VAR_7 = VAR_3->frac_div_start_low |
   (VAR_3->frac_div_start_mid << 8) |
   (VAR_3->frac_div_start_high << 16);
 VAR_6 = VAR_3->decimal_div_start;
 VAR_6 *= (1 << VAR_2->frac_bits);
 VAR_6 += VAR_7;
 VAR_6 *= VAR_2->ssc_offset;
 VAR_6 *= (VAR_2->ssc_adj_per + 1);
 VAR_6 = FUNC_3(VAR_6, (VAR_4 + 1));
 VAR_6 = FUNC_2(VAR_6, 1000000);

 VAR_3->ssc_div_per_low = VAR_4 & 0xFF;
 VAR_3->ssc_div_per_high = (VAR_4 & 0xFF00) >> 8;
 VAR_3->ssc_stepsize_low = (u32)(VAR_6 & 0xFF);
 VAR_3->ssc_stepsize_high = (u32)((VAR_6 & 0xFF00) >> 8);
 VAR_3->ssc_adjper_low = VAR_2->ssc_adj_per & 0xFF;
 VAR_3->ssc_adjper_high = (VAR_2->ssc_adj_per & 0xFF00) >> 8;

 VAR_3->ssc_control = VAR_2->ssc_center ? VAR_0 : 0;

 FUNC_4("SCC: Dec:%d, frac:%llu, frac_bits:%d\n",
   VAR_3->decimal_div_start, VAR_7, VAR_2->frac_bits);
 FUNC_4("SSC: div_per:0x%X, stepsize:0x%X, adjper:0x%X\n",
   VAR_4, (u32)VAR_6, VAR_2->ssc_adj_per);
}
