
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int dummy; } ;
struct clk_hw_omap {int clkdm_name; struct clockdomain* clkdm; } ;
struct clk_hw {int clk; } ;
struct TYPE_2__ {struct clockdomain* (* clkdm_lookup ) (int ) ;} ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int ) ;
 struct clockdomain* FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 struct clk_hw_omap* FUNC_3 (struct clk_hw*) ;

void FUNC_4(struct clk_hw *VAR_1)
{
 struct clk_hw_omap *VAR_2 = FUNC_3(VAR_1);
 struct clockdomain *VAR_3;
 const char *VAR_4;

 if (!VAR_2->clkdm_name)
  return;

 VAR_4 = FUNC_0(VAR_1->clk);

 VAR_3 = VAR_0->clkdm_lookup(VAR_2->clkdm_name);
 if (VAR_3) {
  FUNC_1("clock: associated clk %s to clkdm %s\n",
    VAR_4, VAR_2->clkdm_name);
  VAR_2->clkdm = VAR_3;
 } else {
  FUNC_1("clock: could not associate clk %s to clkdm %s\n",
    VAR_4, VAR_2->clkdm_name);
 }
}
