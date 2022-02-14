
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_output {int pll_postdiv; } ;
struct dsi_pll_input {scalar_t__ ssc_en; } ;
struct dsi_pll_14nm {unsigned long vco_current_rate; scalar_t__ uc; struct dsi_pll_14nm* slave; int vco_ref_clk_rate; int id; struct dsi_pll_output out; struct dsi_pll_input in; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (char*,int ,unsigned long,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dsi_pll_14nm*) ;
 struct msm_dsi_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct dsi_pll_14nm*) ;
 int FUNC_4 (struct dsi_pll_14nm*) ;
 int FUNC_5 (struct dsi_pll_14nm*) ;
 int FUNC_6 (struct dsi_pll_14nm*,struct dsi_pll_input*,struct dsi_pll_output*) ;
 struct dsi_pll_14nm* FUNC_7 (struct msm_dsi_pll*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_3, unsigned long VAR_4,
         unsigned long VAR_5)
{
 struct msm_dsi_pll *VAR_6 = FUNC_2(VAR_3);
 struct dsi_pll_14nm *VAR_7 = FUNC_7(VAR_6);
 struct dsi_pll_input *VAR_8 = &VAR_7->in;
 struct dsi_pll_output *VAR_9 = &VAR_7->out;

 FUNC_0("DSI PLL%d rate=%lu, parent's=%lu", VAR_7->id, VAR_4,
     VAR_5);

 VAR_7->vco_current_rate = VAR_4;
 VAR_7->vco_ref_clk_rate = VAR_2;

 FUNC_1(VAR_7);
 VAR_9->pll_postdiv = VAR_0;

 FUNC_4(VAR_7);

 if (VAR_8->ssc_en)
  FUNC_5(VAR_7);

 FUNC_3(VAR_7);





 if (VAR_7->uc == VAR_1) {
  struct dsi_pll_14nm *VAR_10 = VAR_7->slave;

  FUNC_6(VAR_10, VAR_8, VAR_9);
 }

 FUNC_6(VAR_7, VAR_8, VAR_9);

 return 0;
}
