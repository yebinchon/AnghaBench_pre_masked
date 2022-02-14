
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct impd1_clk {int pclkname; int vco1name; int vco2name; int uartname; int spiname; int scname; int pclk; int vco1clk; int vco2clk; int uartclk; int spiclk; int * clks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct impd1_clk* VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(unsigned int VAR_1)
{
 int VAR_2;
 struct impd1_clk *VAR_3;

 if (VAR_1 > 3)
  return;
 VAR_3 = &VAR_0[VAR_1];

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->clks); VAR_2++)
  FUNC_2(VAR_3->clks[VAR_2]);
 FUNC_1(VAR_3->spiclk);
 FUNC_1(VAR_3->uartclk);
 FUNC_1(VAR_3->vco2clk);
 FUNC_1(VAR_3->vco1clk);
 FUNC_1(VAR_3->pclk);
 FUNC_3(VAR_3->scname);
 FUNC_3(VAR_3->spiname);
 FUNC_3(VAR_3->uartname);
 FUNC_3(VAR_3->vco2name);
 FUNC_3(VAR_3->vco1name);
 FUNC_3(VAR_3->pclkname);
}
