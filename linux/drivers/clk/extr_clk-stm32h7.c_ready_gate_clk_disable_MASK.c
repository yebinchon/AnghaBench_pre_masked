
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_ready_gate {int bit_rdy; } ;
struct clk_hw {int dummy; } ;
struct clk_gate {int reg; } ;
struct TYPE_2__ {int (* disable ) (struct clk_hw*) ;int (* is_enabled ) (struct clk_hw*) ;} ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 struct clk_gate* FUNC_4 (struct clk_hw*) ;
 struct stm32_ready_gate* FUNC_5 (struct clk_gate*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct clk_hw *VAR_2)
{
 struct clk_gate *VAR_3 = FUNC_4(VAR_2);
 struct stm32_ready_gate *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 unsigned int VAR_6 = VAR_0;

 if (!VAR_1.is_enabled(VAR_2))
  return;

 VAR_1.disable(VAR_2);

 do {
  VAR_5 = !!(FUNC_1(VAR_3->reg) & FUNC_0(VAR_4->bit_rdy));

  if (VAR_5)
   FUNC_6(100);

 } while (VAR_5 && --VAR_6);
}
