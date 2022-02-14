
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {int dummy; } ;
struct dpi_data {struct dss_pll* pll; int clk_src; int dss; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpi_data*) ;
 scalar_t__ FUNC_2 (struct dss_pll*) ;
 struct dss_pll* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dpi_data *VAR_0)
{
 struct dss_pll *VAR_1;

 if (VAR_0->pll)
  return;

 VAR_0->clk_src = FUNC_1(VAR_0);

 VAR_1 = FUNC_3(VAR_0->dss, VAR_0->clk_src);
 if (!VAR_1)
  return;

 if (FUNC_2(VAR_1)) {
  FUNC_0("PLL not operational\n");
  return;
 }

 VAR_0->pll = VAR_1;
}
