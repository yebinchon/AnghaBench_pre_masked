
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rgate {int bit_rdy_idx; } ;
struct clk_hw {int dummy; } ;
struct clk_gate {int reg; } ;
struct TYPE_2__ {int (* enable ) (struct clk_hw*) ;scalar_t__ (* is_enabled ) (struct clk_hw*) ;} ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct clk_hw*) ;
 struct clk_gate* FUNC_6 (struct clk_hw*) ;
 struct stm32_rgate* FUNC_7 (struct clk_gate*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_2)
{
 struct clk_gate *VAR_3 = FUNC_6(VAR_2);
 struct stm32_rgate *VAR_4 = FUNC_7(VAR_3);
 int VAR_5;
 unsigned int VAR_6 = VAR_0;

 if (VAR_1.is_enabled(VAR_2))
  return 0;

 FUNC_1();

 VAR_1.enable(VAR_2);

 do {
  VAR_5 = !(FUNC_3(VAR_3->reg) & FUNC_0(VAR_4->bit_rdy_idx));
  if (VAR_5)
   FUNC_8(100);

 } while (VAR_5 && --VAR_6);

 FUNC_2();

 return VAR_5;
}
