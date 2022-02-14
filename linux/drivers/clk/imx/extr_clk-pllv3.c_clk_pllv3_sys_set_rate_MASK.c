
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_pllv3 {unsigned long div_mask; int base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_pllv3*) ;
 unsigned long FUNC_1 (int ) ;
 struct clk_pllv3* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct clk_pllv3 *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5 = VAR_3 * 54 / 2;
 unsigned long VAR_6 = VAR_3 * 108 / 2;
 u32 VAR_7, VAR_8;

 if (VAR_2 < VAR_5 || VAR_2 > VAR_6)
  return -VAR_0;

 VAR_8 = VAR_2 * 2 / VAR_3;
 VAR_7 = FUNC_1(VAR_4->base);
 VAR_7 &= ~VAR_4->div_mask;
 VAR_7 |= VAR_8;
 FUNC_3(VAR_7, VAR_4->base);

 return FUNC_0(VAR_4);
}
