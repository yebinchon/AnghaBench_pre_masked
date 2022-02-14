
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ldb {void** clk_pll; int dev; void** clk; } ;
typedef int clkname ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(struct imx_ldb *VAR_0, int VAR_1)
{
 char VAR_2[16];

 FUNC_4(VAR_2, sizeof(VAR_2), "di%d", VAR_1);
 VAR_0->clk[VAR_1] = FUNC_3(VAR_0->dev, VAR_2);
 if (FUNC_0(VAR_0->clk[VAR_1]))
  return FUNC_1(VAR_0->clk[VAR_1]);

 FUNC_4(VAR_2, sizeof(VAR_2), "di%d_pll", VAR_1);
 VAR_0->clk_pll[VAR_1] = FUNC_3(VAR_0->dev, VAR_2);

 return FUNC_2(VAR_0->clk_pll[VAR_1]);
}
