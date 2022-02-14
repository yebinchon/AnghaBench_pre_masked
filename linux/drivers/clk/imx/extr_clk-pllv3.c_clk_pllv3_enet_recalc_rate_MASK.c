
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pllv3 {unsigned long ref_clock; } ;
struct clk_hw {int dummy; } ;


 struct clk_pllv3* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_pllv3 *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->ref_clock;
}
