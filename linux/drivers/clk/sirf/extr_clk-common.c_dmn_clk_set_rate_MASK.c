
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_dmn {int regofs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 char* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 struct clk_dmn* FUNC_7 (struct clk_hw*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_1, unsigned long VAR_2,
 unsigned long VAR_3)
{
 struct clk_dmn *VAR_4 = FUNC_7(VAR_1);
 unsigned long VAR_5;
 unsigned VAR_6, VAR_7, VAR_8, VAR_9;
 const char *VAR_10 = FUNC_2(VAR_1);
 unsigned VAR_11 = (FUNC_6(VAR_10, "mem") == 0) ? 3 : 4;

 VAR_5 = VAR_3;
 VAR_6 = VAR_5 / VAR_2;

 if (FUNC_8(VAR_6 < 2 || VAR_6 > FUNC_0(VAR_11 + 1)))
  return -VAR_0;

 FUNC_1(VAR_5 % VAR_2);

 VAR_7 = (VAR_6 >> 1) - 1;
 VAR_8 = VAR_6 - VAR_7 - 2;

 VAR_9 = FUNC_3(VAR_4->regofs);
 VAR_9 &= ~(((FUNC_0(VAR_11) - 1) << 16) | ((FUNC_0(VAR_11) - 1) << 20));
 VAR_9 |= (VAR_7 << 16) | (VAR_8 << 20) | FUNC_0(25);
 FUNC_4(VAR_9, VAR_4->regofs);


 while (FUNC_3(VAR_4->regofs) & FUNC_0(25))
  FUNC_5();

 return 0;
}
