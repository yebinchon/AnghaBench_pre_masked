
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pfdv2 {int gate_bit; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct clk_pfdv2* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_pfdv2 *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_1->reg) & (1 << VAR_1->gate_bit))
  return 0;

 return 1;
}
