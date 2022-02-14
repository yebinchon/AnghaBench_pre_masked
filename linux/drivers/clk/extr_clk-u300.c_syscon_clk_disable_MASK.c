
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_syscon {int clk_val; scalar_t__ hw_ctrld; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct clk_syscon* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_3)
{
 struct clk_syscon *VAR_4 = FUNC_0(VAR_3);


 if (VAR_4->hw_ctrld)
  return;
 if (VAR_4->clk_val == 0xFFFFU)
  return;

 if (VAR_4->clk_val == VAR_1)
  return;

 FUNC_1(VAR_4->clk_val, VAR_2 + VAR_0);
}
