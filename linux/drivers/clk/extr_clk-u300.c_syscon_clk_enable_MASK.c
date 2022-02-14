
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_syscon {int clk_val; scalar_t__ hw_ctrld; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct clk_syscon* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_syscon *VAR_3 = FUNC_0(VAR_2);


 if (VAR_3->hw_ctrld)
  return 0;

 if (VAR_3->clk_val == 0xFFFFU)
  return 0;

 FUNC_1(VAR_3->clk_val, VAR_1 + VAR_0);
 return 0;
}
