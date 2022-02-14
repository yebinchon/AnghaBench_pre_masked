
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_i2c {scalar_t__ clk_dma; scalar_t__ clk_main; scalar_t__ clk_pmic; scalar_t__ have_pmic; scalar_t__ clk_arb; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_i2c *VAR_0)
{
 if (VAR_0->clk_arb)
  FUNC_0(VAR_0->clk_arb);

 if (VAR_0->have_pmic)
  FUNC_0(VAR_0->clk_pmic);

 FUNC_0(VAR_0->clk_main);
 FUNC_0(VAR_0->clk_dma);
}
