
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_i2c {scalar_t__ clk_dma; scalar_t__ clk_main; scalar_t__ clk_pmic; scalar_t__ have_pmic; scalar_t__ clk_arb; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtk_i2c *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk_dma);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk_main);
 if (VAR_1)
  goto err_main;

 if (VAR_0->have_pmic) {
  VAR_1 = FUNC_1(VAR_0->clk_pmic);
  if (VAR_1)
   goto err_pmic;
 }

 if (VAR_0->clk_arb) {
  VAR_1 = FUNC_1(VAR_0->clk_arb);
  if (VAR_1)
   goto err_arb;
 }

 return 0;

err_arb:
 if (VAR_0->have_pmic)
  FUNC_0(VAR_0->clk_pmic);
err_pmic:
 FUNC_0(VAR_0->clk_main);
err_main:
 FUNC_0(VAR_0->clk_dma);

 return VAR_1;
}
