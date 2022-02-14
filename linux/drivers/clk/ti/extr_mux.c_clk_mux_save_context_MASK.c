
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_omap_mux {int saved_parent; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 struct clk_omap_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_omap_mux *VAR_1 = FUNC_1(VAR_0);

 VAR_1->saved_parent = FUNC_0(VAR_0);
 return 0;
}
