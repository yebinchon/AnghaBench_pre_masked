
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_pll {scalar_t__ regofs; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;
 struct clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_5,
 unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_6;
 struct clk_pll *VAR_8 = FUNC_3(VAR_5);
 u64 VAR_9;
 u32 VAR_10 = FUNC_1(VAR_8->regofs + VAR_2 -
   VAR_3);
 u32 VAR_11 = FUNC_1(VAR_8->regofs);
 u32 VAR_12 = FUNC_1(VAR_8->regofs + VAR_4 -
   VAR_3);
 u32 VAR_13 = (VAR_11 >> 16 & (FUNC_0(3) - 1)) + 1;
 u32 VAR_14 = (VAR_11 & (FUNC_0(9) - 1)) + 1;
 u32 VAR_15 = VAR_12 >> 8 & (FUNC_0(12) - 1);
 u32 VAR_16 = VAR_12 >> 20 & (FUNC_0(2) - 1);
 u32 VAR_17 = VAR_12 & (FUNC_0(8) - 1);

 if (VAR_10 & VAR_0)
  return VAR_7;

 if (VAR_10 & VAR_1) {
  VAR_9 = VAR_7;
  VAR_9 *= 1 << 24;
  FUNC_2(VAR_9, VAR_13);
  FUNC_2(VAR_9, (256 * ((VAR_15 >> VAR_16) << VAR_16)
   + (VAR_17 << VAR_16)));
 } else {
  VAR_9 = 2 * VAR_7;
  VAR_9 *= VAR_14;
  FUNC_2(VAR_9, VAR_13);
 }
 return VAR_9;
}
