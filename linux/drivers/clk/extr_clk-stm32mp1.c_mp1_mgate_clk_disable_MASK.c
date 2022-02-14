
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_clk_mgate {TYPE_1__* mgate; int mask; } ;
struct clk_hw {int dummy; } ;
struct clk_gate {int dummy; } ;
struct TYPE_2__ {int flag; } ;


 int FUNC_0 (struct clk_hw*) ;
 struct clk_gate* FUNC_1 (struct clk_hw*) ;
 struct stm32_clk_mgate* FUNC_2 (struct clk_gate*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_gate *VAR_1 = FUNC_1(VAR_0);
 struct stm32_clk_mgate *VAR_2 = FUNC_2(VAR_1);

 VAR_2->mgate->flag &= ~VAR_2->mask;

 if (VAR_2->mgate->flag == 0)
  FUNC_0(VAR_0);
}
