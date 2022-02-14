
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv3 {int div_mask; int div_shift; int base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_pllv3*) ;
 int FUNC_1 (int ) ;
 struct clk_pllv3* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct clk_pllv3 *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5, VAR_6;

 if (VAR_2 == VAR_3 * 22)
  VAR_6 = 1;
 else if (VAR_2 == VAR_3 * 20)
  VAR_6 = 0;
 else
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->base);
 VAR_5 &= ~(VAR_4->div_mask << VAR_4->div_shift);
 VAR_5 |= (VAR_6 << VAR_4->div_shift);
 FUNC_3(VAR_5, VAR_4->base);

 return FUNC_0(VAR_4);
}
