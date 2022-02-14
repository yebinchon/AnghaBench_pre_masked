
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pxa_clk {scalar_t__ (* is_in_low_power ) () ;} ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 struct pxa_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct pxa_clk *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->is_in_low_power)
  return 0;
 return VAR_1->is_in_low_power() ? 0 : 1;
}
