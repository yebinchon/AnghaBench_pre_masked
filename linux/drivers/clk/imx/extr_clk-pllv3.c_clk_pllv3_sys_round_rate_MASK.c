
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;



__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 unsigned long VAR_4 = VAR_3 * 54 / 2;
 unsigned long VAR_5 = VAR_3 * 108 / 2;
 u32 VAR_6;

 if (VAR_1 > VAR_5)
  VAR_1 = VAR_5;
 else if (VAR_1 < VAR_4)
  VAR_1 = VAR_4;
 VAR_6 = VAR_1 * 2 / VAR_3;

 return VAR_3 * VAR_6 / 2;
}
