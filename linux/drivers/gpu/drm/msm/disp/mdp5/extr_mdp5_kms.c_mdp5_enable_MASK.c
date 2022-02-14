
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_kms {scalar_t__ lut_clk; scalar_t__ core_clk; scalar_t__ axi_clk; scalar_t__ ahb_clk; int enable_count; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct mdp5_kms *VAR_0)
{
 FUNC_0("");

 VAR_0->enable_count++;

 FUNC_1(VAR_0->ahb_clk);
 FUNC_1(VAR_0->axi_clk);
 FUNC_1(VAR_0->core_clk);
 if (VAR_0->lut_clk)
  FUNC_1(VAR_0->lut_clk);

 return 0;
}
