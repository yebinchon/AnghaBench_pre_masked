
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gate; scalar_t__ reset; } ;
struct r9a06g032_clk_gate {TYPE_1__ gate; int clocks; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct r9a06g032_clk_gate* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct r9a06g032_clk_gate *VAR_1 = FUNC_1(VAR_0);


 if (VAR_1->gate.reset && !FUNC_0(VAR_1->clocks, VAR_1->gate.reset))
  return 0;

 return FUNC_0(VAR_1->clocks, VAR_1->gate.gate);
}
