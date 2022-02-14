
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pll {int id; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 struct clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_5)
{
 struct clk_pll *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4 + VAR_0);
 if (VAR_6->id == 1) {
  if (VAR_7 & VAR_2)
   return !!(VAR_7 & VAR_1);
 } else if (VAR_6->id == 2) {
  return !!(VAR_7 & VAR_3);
 }
 return 1;
}
