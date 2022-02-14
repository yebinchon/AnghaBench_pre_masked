
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f4_pll {scalar_t__ offset; } ;
struct clk_hw {int dummy; } ;
struct clk_gate {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 struct clk_gate* FUNC_4 (struct clk_hw*) ;
 struct stm32f4_pll* FUNC_5 (struct clk_gate*) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_gate *VAR_4 = FUNC_4(VAR_1);
 struct stm32f4_pll *VAR_5 = FUNC_5(VAR_4);

 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_1);

 if (VAR_8)
  FUNC_1(VAR_1);

 VAR_6 = VAR_2 / VAR_3;

 VAR_7 = FUNC_0(VAR_0 + VAR_5->offset) & ~(0x1ff << 6);

 FUNC_6(VAR_7 | ((VAR_6 & 0x1ff) << 6), VAR_0 + VAR_5->offset);

 if (VAR_8)
  FUNC_2(VAR_1);

 return 0;
}
