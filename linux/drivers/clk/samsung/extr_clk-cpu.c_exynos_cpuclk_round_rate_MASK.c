
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 struct clk_hw* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0,
   unsigned long VAR_1, unsigned long *VAR_2)
{
 struct clk_hw *VAR_3 = FUNC_0(VAR_0);
 *VAR_2 = FUNC_1(VAR_3, VAR_1);
 return *VAR_2;
}
