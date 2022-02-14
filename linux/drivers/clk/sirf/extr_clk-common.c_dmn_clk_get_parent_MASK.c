
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_dmn {int regofs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 struct clk_dmn* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_6(struct clk_hw *VAR_0)
{
 struct clk_dmn *VAR_1 = FUNC_5(VAR_0);
 u32 VAR_2 = FUNC_3(VAR_1->regofs);
 const char *VAR_3 = FUNC_2(VAR_0);


 if (FUNC_4(VAR_3, "io") == 0)
  return 4;

 FUNC_1((VAR_2 & (FUNC_0(3) - 1)) > 4);

 return VAR_2 & (FUNC_0(3) - 1);
}
