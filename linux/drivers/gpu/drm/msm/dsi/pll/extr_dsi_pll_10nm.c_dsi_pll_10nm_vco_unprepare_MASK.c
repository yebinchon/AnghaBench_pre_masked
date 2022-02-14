
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int pll_on; } ;
struct dsi_pll_10nm {struct dsi_pll_10nm* slave; scalar_t__ phy_cmn_mmio; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dsi_pll_10nm*) ;
 int FUNC_1 (struct dsi_pll_10nm*) ;
 struct msm_dsi_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct dsi_pll_10nm* FUNC_4 (struct msm_dsi_pll*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_1)
{
 struct msm_dsi_pll *VAR_2 = FUNC_2(VAR_1);
 struct dsi_pll_10nm *VAR_3 = FUNC_4(VAR_2);






 FUNC_0(VAR_3);
 FUNC_3(VAR_3->phy_cmn_mmio + VAR_0, 0);
 FUNC_1(VAR_3);
 if (VAR_3->slave) {
  FUNC_0(VAR_3->slave);
  FUNC_1(VAR_3->slave);
 }

 FUNC_5();
 VAR_2->pll_on = 0;
}
