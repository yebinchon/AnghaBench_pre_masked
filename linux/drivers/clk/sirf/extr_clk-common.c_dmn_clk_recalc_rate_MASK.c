
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_dmn {int regofs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct clk_dmn* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
 unsigned long VAR_1)

{
 unsigned long VAR_2 = VAR_1;
 struct clk_dmn *VAR_3 = FUNC_2(VAR_0);

 u32 VAR_4 = FUNC_1(VAR_3->regofs);

 if (VAR_4 & FUNC_0(24)) {

  return VAR_2;
 } else {



  u32 VAR_5 = (VAR_4 >> 16) & (FUNC_0(4) - 1);
  u32 VAR_6 = (VAR_4 >> 20) & (FUNC_0(4) - 1);

  return VAR_2 / (VAR_5 + VAR_6 + 2);
 }
}
