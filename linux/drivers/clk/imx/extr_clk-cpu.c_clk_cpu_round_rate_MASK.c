
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_cpu {int pll; } ;


 long FUNC_0 (int ,unsigned long) ;
 struct clk_cpu* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2)
{
 struct clk_cpu *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->pll, VAR_1);
}
