
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_pllv3 {unsigned long div_mask; scalar_t__ denom_offset; scalar_t__ base; scalar_t__ num_offset; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_pllv3*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 struct clk_pllv3* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct clk_pllv3 *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5 = VAR_3 * 27;
 unsigned long VAR_6 = VAR_3 * 54;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10 = 1000000;
 u32 VAR_11 = 0x3FFFFFFF;
 u64 VAR_12;

 if (VAR_2 < VAR_5 || VAR_2 > VAR_6)
  return -VAR_0;

 if (VAR_3 <= VAR_11)
  VAR_10 = VAR_3;

 VAR_8 = VAR_2 / VAR_3;
 VAR_12 = (u64) (VAR_2 - VAR_8 * VAR_3);
 VAR_12 *= VAR_10;
 FUNC_1(VAR_12, VAR_3);
 VAR_9 = VAR_12;

 VAR_7 = FUNC_2(VAR_4->base);
 VAR_7 &= ~VAR_4->div_mask;
 VAR_7 |= VAR_8;
 FUNC_4(VAR_7, VAR_4->base);
 FUNC_4(VAR_9, VAR_4->base + VAR_4->num_offset);
 FUNC_4(VAR_10, VAR_4->base + VAR_4->denom_offset);

 return FUNC_0(VAR_4);
}
