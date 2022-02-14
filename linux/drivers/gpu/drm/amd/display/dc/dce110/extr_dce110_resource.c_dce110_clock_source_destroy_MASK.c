
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_clk_src {struct dce110_clk_src* dvi_ss_params; struct dce110_clk_src* hdmi_ss_params; struct dce110_clk_src* dp_ss_params; } ;
struct clock_source {int dummy; } ;


 struct dce110_clk_src* FUNC_0 (struct clock_source*) ;
 int FUNC_1 (struct dce110_clk_src*) ;

void FUNC_2(struct clock_source **VAR_0)
{
 struct dce110_clk_src *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = FUNC_0(*VAR_0);

 FUNC_1(VAR_1->dp_ss_params);
 FUNC_1(VAR_1->hdmi_ss_params);
 FUNC_1(VAR_1->dvi_ss_params);

 FUNC_1(VAR_1);
 *VAR_0 = ((void*)0);
}
