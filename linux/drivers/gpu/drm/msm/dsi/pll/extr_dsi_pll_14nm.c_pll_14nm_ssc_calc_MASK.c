
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int ssc_period; int ssc_step_size; } ;
struct TYPE_3__ {int ssc_freq; int ssc_spread; int ssc_adj_period; } ;
struct dsi_pll_14nm {int vco_ref_clk_rate; TYPE_2__ out; TYPE_1__ in; scalar_t__ vco_current_rate; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int*) ;

__attribute__((used)) static void FUNC_4(struct dsi_pll_14nm *VAR_0)
{
 u32 VAR_1, VAR_2;
 u32 VAR_3, VAR_4;
 u64 VAR_5;

 FUNC_1("vco=%lld ref=%lld", VAR_0->vco_current_rate, VAR_0->vco_ref_clk_rate);

 VAR_2 = VAR_0->in.ssc_freq / 500;
 VAR_1 = (u32)VAR_0->vco_ref_clk_rate / 1000;
 VAR_2 = FUNC_0(VAR_1, VAR_2);
 VAR_2 -= 1;
 VAR_0->out.ssc_period = VAR_2;

 FUNC_1("ssc freq=%d spread=%d period=%d", VAR_0->in.ssc_freq,
     VAR_0->in.ssc_spread, VAR_0->out.ssc_period);

 VAR_5 = (u32)VAR_0->vco_current_rate;
 VAR_3 = VAR_0->vco_ref_clk_rate;
 VAR_3 /= 1000;
 VAR_5 = FUNC_2(VAR_5, VAR_3);
 VAR_5 <<= 20;
 VAR_5 = FUNC_2(VAR_5, 1000);
 VAR_5 *= VAR_0->in.ssc_spread;
 VAR_5 = FUNC_2(VAR_5, 1000);
 VAR_5 *= (VAR_0->in.ssc_adj_period + 1);

 VAR_4 = 0;
 VAR_5 = FUNC_3(VAR_5, VAR_2 + 1, &VAR_4);
 if (VAR_4)
  VAR_5++;

 FUNC_1("step_size=%lld", VAR_5);

 VAR_5 &= 0x0ffff;

 VAR_0->out.ssc_step_size = VAR_5;
}
