
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_generated {scalar_t__ gckdiv; } ;


 unsigned long FUNC_0 (unsigned long,scalar_t__) ;
 struct clk_generated* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_2(struct clk_hw *VAR_0,
     unsigned long VAR_1)
{
 struct clk_generated *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2->gckdiv + 1);
}
