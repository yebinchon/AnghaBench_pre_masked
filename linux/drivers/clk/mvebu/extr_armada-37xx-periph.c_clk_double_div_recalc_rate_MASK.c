
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_double_div {int shift2; int reg2; int shift1; int reg1; } ;


 unsigned long FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ,int ) ;
 struct clk_double_div* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_double_div *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_2->reg1, VAR_2->shift1);
 VAR_3 *= FUNC_1(VAR_2->reg2, VAR_2->shift2);

 return FUNC_0((u64)VAR_1, VAR_3);
}
