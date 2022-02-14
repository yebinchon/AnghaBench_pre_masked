
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pll {int regofs; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 struct clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_3,
 unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_4;
 struct clk_pll *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7 = VAR_6->regofs + VAR_2 -
  VAR_1;

 if (FUNC_2(VAR_7) & FUNC_0(2)) {

  return VAR_5;
 } else {

  u32 VAR_8 = FUNC_2(VAR_6->regofs);
  u32 VAR_9 = (VAR_8 & (FUNC_0(13) - 1)) + 1;
  u32 VAR_10 = ((VAR_8 >> 13) & (FUNC_0(6) - 1)) + 1;
  u32 VAR_11 = ((VAR_8 >> 19) & (FUNC_0(4) - 1)) + 1;
  FUNC_1(VAR_5 % VAR_0);
  return VAR_5 / VAR_0 * VAR_9 / VAR_10 / VAR_11 * VAR_0;
 }
}
