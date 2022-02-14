
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r9a06g032_clk_gate {int gate; int clocks; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int *,int) ;
 struct r9a06g032_clk_gate* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct r9a06g032_clk_gate *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clocks, &VAR_1->gate, 1);
 return 0;
}
