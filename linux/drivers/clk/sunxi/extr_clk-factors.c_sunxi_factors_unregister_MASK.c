
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk_factors {struct clk_factors* gate; struct clk_factors* mux; } ;
struct clk {int dummy; } ;


 struct clk_hw* FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk_factors*) ;
 int FUNC_3 (struct device_node*) ;
 struct clk_factors* FUNC_4 (struct clk_hw*) ;

void FUNC_5(struct device_node *VAR_0, struct clk *VAR_1)
{
 struct clk_hw *VAR_2 = FUNC_0(VAR_1);
 struct clk_factors *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_3->mux);
 FUNC_2(VAR_3->gate);
 FUNC_2(VAR_3);
}
