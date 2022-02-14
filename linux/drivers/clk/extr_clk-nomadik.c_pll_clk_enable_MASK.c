
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct clk_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_6)
{
 struct clk_pll *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;

 FUNC_1(&VAR_5);
 VAR_8 = FUNC_0(VAR_4 + VAR_0);
 if (VAR_7->id == 1) {
  if (VAR_8 & VAR_2) {
   VAR_8 |= VAR_1;
   FUNC_4(VAR_8, VAR_4 + VAR_0);
  }
 } else if (VAR_7->id == 2) {
  VAR_8 |= VAR_3;
  FUNC_4(VAR_8, VAR_4 + VAR_0);
 }
 FUNC_2(&VAR_5);
 return 0;
}
