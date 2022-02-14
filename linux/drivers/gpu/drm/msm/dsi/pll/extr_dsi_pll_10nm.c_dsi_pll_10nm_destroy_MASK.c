
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_dsi_pll {int dummy; } ;
struct TYPE_3__ {int clk_hw; } ;
struct dsi_pll_10nm {TYPE_1__ base; int out_div_clk_hw; int bit_clk_hw; int byte_clk_hw; int by_2_bit_clk_hw; int post_out_div_clk_hw; int pclk_mux_hw; int out_dsiclk_hw; int id; TYPE_2__* pdev; } ;
struct device {int of_node; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct dsi_pll_10nm* FUNC_6 (struct msm_dsi_pll*) ;

__attribute__((used)) static void FUNC_7(struct msm_dsi_pll *VAR_0)
{
 struct dsi_pll_10nm *VAR_1 = FUNC_6(VAR_0);
 struct device *VAR_2 = &VAR_1->pdev->dev;

 FUNC_0("DSI PLL%d", VAR_1->id);
 FUNC_5(VAR_2->of_node);

 FUNC_2(VAR_1->out_dsiclk_hw);
 FUNC_4(VAR_1->pclk_mux_hw);
 FUNC_3(VAR_1->post_out_div_clk_hw);
 FUNC_3(VAR_1->by_2_bit_clk_hw);
 FUNC_3(VAR_1->byte_clk_hw);
 FUNC_2(VAR_1->bit_clk_hw);
 FUNC_2(VAR_1->out_div_clk_hw);
 FUNC_1(&VAR_1->base.clk_hw);
}
