
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_10nm {unsigned long vco_current_rate; int vco_ref_clk_rate; int id; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (char*,int ,unsigned long,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct dsi_pll_10nm*) ;
 int FUNC_2 (struct dsi_pll_10nm*) ;
 int FUNC_3 (struct dsi_pll_10nm*) ;
 int FUNC_4 (struct dsi_pll_10nm*) ;
 int FUNC_5 (struct dsi_pll_10nm*) ;
 int FUNC_6 (struct dsi_pll_10nm*) ;
 struct msm_dsi_pll* FUNC_7 (struct clk_hw*) ;
 struct dsi_pll_10nm* FUNC_8 (struct msm_dsi_pll*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3)
{
 struct msm_dsi_pll *VAR_4 = FUNC_7(VAR_1);
 struct dsi_pll_10nm *VAR_5 = FUNC_8(VAR_4);

 FUNC_0("DSI PLL%d rate=%lu, parent's=%lu", VAR_5->id, VAR_2,
     VAR_3);

 VAR_5->vco_current_rate = VAR_2;
 VAR_5->vco_ref_clk_rate = VAR_0;

 FUNC_5(VAR_5);

 FUNC_1(VAR_5);

 FUNC_2(VAR_5);

 FUNC_3(VAR_5);

 FUNC_4(VAR_5);

 FUNC_6(VAR_5);


 FUNC_9();

 return 0;
}
