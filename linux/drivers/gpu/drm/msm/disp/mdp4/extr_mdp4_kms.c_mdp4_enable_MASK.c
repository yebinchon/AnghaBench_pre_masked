
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {scalar_t__ axi_clk; scalar_t__ lut_clk; scalar_t__ pclk; scalar_t__ clk; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct mdp4_kms *VAR_0)
{
 FUNC_0("");

 FUNC_1(VAR_0->clk);
 if (VAR_0->pclk)
  FUNC_1(VAR_0->pclk);
 if (VAR_0->lut_clk)
  FUNC_1(VAR_0->lut_clk);
 if (VAR_0->axi_clk)
  FUNC_1(VAR_0->axi_clk);

 return 0;
}
