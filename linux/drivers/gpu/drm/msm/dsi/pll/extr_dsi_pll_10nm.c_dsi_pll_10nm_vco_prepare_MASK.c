
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int pll_on; } ;
struct dsi_pll_10nm {scalar_t__ phy_cmn_mmio; struct dsi_pll_10nm* slave; int id; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dsi_pll_10nm*) ;
 int FUNC_1 (struct dsi_pll_10nm*) ;
 int FUNC_2 (struct dsi_pll_10nm*) ;
 struct msm_dsi_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,int ) ;
 struct dsi_pll_10nm* FUNC_6 (struct msm_dsi_pll*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_2)
{
 struct msm_dsi_pll *VAR_3 = FUNC_3(VAR_2);
 struct dsi_pll_10nm *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 FUNC_2(VAR_4);
 if (VAR_4->slave)
  FUNC_2(VAR_4->slave);


 FUNC_4(VAR_4->phy_cmn_mmio + VAR_0,
    0x01);





 FUNC_7();


 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  FUNC_5("PLL(%d) lock failed\n", VAR_4->id);
  goto error;
 }

 VAR_3->pll_on = 1;

 FUNC_1(VAR_4);
 if (VAR_4->slave)
  FUNC_1(VAR_4->slave);

 FUNC_4(VAR_4->phy_cmn_mmio + VAR_1,
    0x01);
 if (VAR_4->slave)
  FUNC_4(VAR_4->slave->phy_cmn_mmio +
     VAR_1, 0x01);

error:
 return VAR_5;
}
