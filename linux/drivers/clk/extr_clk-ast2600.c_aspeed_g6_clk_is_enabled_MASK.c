
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct aspeed_clk_gate {scalar_t__ clock_idx; scalar_t__ reset_idx; int flags; int map; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct aspeed_clk_gate*) ;
 int FUNC_2 (struct aspeed_clk_gate*) ;
 int FUNC_3 (int ,int ,int*) ;
 struct aspeed_clk_gate* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct aspeed_clk_gate *VAR_2 = FUNC_4(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_2->clock_idx);
 u32 VAR_4 = FUNC_0(VAR_2->reset_idx);
 u32 VAR_5;
 u32 VAR_6;







 if (VAR_2->reset_idx >= 0) {
  FUNC_3(VAR_2->map, FUNC_2(VAR_2), &VAR_5);

  if (VAR_5 & VAR_4)
   return 0;
 }

 FUNC_3(VAR_2->map, FUNC_1(VAR_2), &VAR_5);

 VAR_6 = (VAR_2->flags & VAR_0) ? 0 : VAR_3;

 return ((VAR_5 & VAR_3) == VAR_6) ? 1 : 0;
}
