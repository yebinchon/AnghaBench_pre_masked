
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi_phy {unsigned long pll_rate; } ;
struct clk_hw {int dummy; } ;


 struct mtk_hdmi_phy* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long *VAR_2)
{
 struct mtk_hdmi_phy *VAR_3 = FUNC_0(VAR_0);

 VAR_3->pll_rate = VAR_1;
 if (VAR_1 <= 74250000)
  *VAR_2 = VAR_1;
 else
  *VAR_2 = VAR_1 / 2;

 return VAR_1;
}
