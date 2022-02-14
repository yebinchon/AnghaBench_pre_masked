
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_hcd {int clk; int refsrc; int phyref; scalar_t__ use_pllb; int rst_phyb; int rst_phya; int rst_host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct oxnas_hcd *VAR_0)
{
 FUNC_1(VAR_0->rst_host);
 FUNC_1(VAR_0->rst_phya);
 FUNC_1(VAR_0->rst_phyb);

 if (VAR_0->use_pllb) {
  FUNC_0(VAR_0->phyref);
  FUNC_0(VAR_0->refsrc);
 }
 FUNC_0(VAR_0->clk);
}
