
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll {unsigned long regofs; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 () ;
 struct clk_pll* FUNC_5 (struct clk_hw*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_5, unsigned long VAR_6,
 unsigned long VAR_7)
{
 struct clk_pll *VAR_8 = FUNC_5(VAR_5);
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;






 VAR_10 = VAR_6 / VAR_1;
 if (FUNC_6((VAR_6 % VAR_1) || VAR_10 > FUNC_0(13) || VAR_10 < 1))
  return -VAR_0;

 VAR_9 = VAR_7;
 FUNC_1(VAR_9 < VAR_1);

 VAR_11 = VAR_9 / VAR_1;
 FUNC_1((VAR_9 % VAR_1) || VAR_11 > FUNC_0(6));

 VAR_12 = 1;

 VAR_13 = (VAR_10 - 1) | ((VAR_11 - 1) << 13) | ((VAR_12 - 1) << 19);
 FUNC_3(VAR_13, VAR_8->regofs);

 VAR_13 = VAR_8->regofs + VAR_3 - VAR_2;
 FUNC_3((VAR_10 >> 1) - 1, VAR_13);

 VAR_13 = VAR_8->regofs + VAR_4 - VAR_2;
 while (!(FUNC_2(VAR_13) & FUNC_0(6)))
  FUNC_4();

 return 0;
}
