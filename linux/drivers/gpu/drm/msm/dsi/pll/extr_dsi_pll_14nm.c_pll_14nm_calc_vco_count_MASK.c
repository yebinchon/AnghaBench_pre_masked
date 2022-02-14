
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dsi_pll_output {int pll_vco_div_ref; int pll_vco_count; int pll_kvco_div_ref; int pll_kvco_count; int pll_misc1; int pll_resetsm_cntrl; int pll_resetsm_cntrl2; scalar_t__ pll_kvco_code; int pll_resetsm_cntrl5; } ;
struct dsi_pll_input {int vco_measure_time; int kvco_measure_time; int bandgap_timer; int pll_wakeup_timer; } ;
struct dsi_pll_14nm {int vco_current_rate; int vco_ref_clk_rate; struct dsi_pll_output out; struct dsi_pll_input in; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct dsi_pll_14nm *VAR_0)
{
 struct dsi_pll_input *VAR_1 = &VAR_0->in;
 struct dsi_pll_output *VAR_2 = &VAR_0->out;
 u64 VAR_3 = VAR_0->vco_current_rate;
 u64 VAR_4 = VAR_0->vco_ref_clk_rate;
 u64 VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_4 * VAR_1->vco_measure_time;
 FUNC_1(VAR_5, 1000000);
 VAR_5 &= 0x03ff;
 VAR_5 -= 2;
 VAR_2->pll_vco_div_ref = VAR_5;

 VAR_5 = FUNC_0(VAR_3, 1000000);
 VAR_5 *= VAR_1->vco_measure_time;
 FUNC_1(VAR_5, 10);
 VAR_2->pll_vco_count = VAR_5;

 VAR_5 = VAR_4 * VAR_1->kvco_measure_time;
 FUNC_1(VAR_5, 1000000);
 VAR_5 &= 0x03ff;
 VAR_5 -= 1;
 VAR_2->pll_kvco_div_ref = VAR_5;

 VAR_6 = FUNC_2(VAR_3);
 VAR_6 *= 2;
 VAR_6 /= 100;
 VAR_6 *= VAR_1->kvco_measure_time;
 VAR_2->pll_kvco_count = VAR_6;

 VAR_2->pll_misc1 = 16;
 VAR_2->pll_resetsm_cntrl = 48;
 VAR_2->pll_resetsm_cntrl2 = VAR_1->bandgap_timer << 3;
 VAR_2->pll_resetsm_cntrl5 = VAR_1->pll_wakeup_timer;
 VAR_2->pll_kvco_code = 0;
}
