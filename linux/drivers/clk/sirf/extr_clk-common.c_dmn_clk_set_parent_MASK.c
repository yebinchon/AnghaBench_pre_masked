
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_dmn {int regofs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 struct clk_dmn* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_dmn *VAR_3 = FUNC_6(VAR_1);
 u32 VAR_4 = FUNC_2(VAR_3->regofs);
 const char *VAR_5 = FUNC_1(VAR_1);


 if (FUNC_5(VAR_5, "io") == 0)
  return -VAR_0;

 VAR_4 &= ~(FUNC_0(3) - 1);
 FUNC_3(VAR_4 | VAR_2, VAR_3->regofs);

 while (FUNC_2(VAR_3->regofs) & FUNC_0(3))
  FUNC_4();

 return 0;
}
