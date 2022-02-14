
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int dummy; } ;
struct clk_hw_omap {scalar_t__ clkdm_name; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct clockdomain* FUNC_1 (scalar_t__) ;
 struct clk_hw_omap* FUNC_2 (int ) ;

__attribute__((used)) static struct clockdomain *FUNC_3(struct clk *VAR_0)
{
 struct clockdomain *VAR_1 = ((void*)0);
 struct clk_hw_omap *VAR_2;

 VAR_2 = FUNC_2(FUNC_0(VAR_0));
 if (VAR_2 && VAR_2->clkdm_name)
  VAR_1 = FUNC_1(VAR_2->clkdm_name);

 return VAR_1;
}
