
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int clk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long) ;
 int FUNC_2 (struct clk_hw*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 if (FUNC_0(VAR_0->clk))
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
