
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_pllv3 {unsigned long div_mask; int base; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 struct clk_pllv3* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
            unsigned long VAR_1)
{
 struct clk_pllv3 *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = FUNC_0(VAR_2->base) & VAR_2->div_mask;

 return VAR_1 * VAR_3 / 2;
}
