
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw_omap {int dpll_data; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 struct clk_hw* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 struct clk_hw_omap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static struct clk_hw_omap *FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_hw_omap *VAR_1 = ((void*)0);


 do {
  do {
   VAR_0 = FUNC_1(VAR_0);
  } while (VAR_0 && (!FUNC_2(VAR_0)));
  if (!VAR_0)
   break;
  VAR_1 = FUNC_3(VAR_0);
 } while (VAR_1 && !VAR_1->dpll_data);


 if (!VAR_1) {
  FUNC_0(1);
  return ((void*)0);
 }

 return VAR_1;
}
