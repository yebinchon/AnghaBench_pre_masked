
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct aspeed_clk_gate {scalar_t__ clock_idx; scalar_t__ reset_idx; int flags; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 struct aspeed_clk_gate* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3)
{
 struct aspeed_clk_gate *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5 = FUNC_0(VAR_4->clock_idx);
 u32 VAR_6 = FUNC_0(VAR_4->reset_idx);
 u32 VAR_7 = (VAR_4->flags & VAR_2) ? 0 : VAR_5;
 u32 VAR_8;







 if (VAR_4->reset_idx >= 0) {
  FUNC_1(VAR_4->map, VAR_1, &VAR_8);
  if (VAR_8 & VAR_6)
   return 0;
 }

 FUNC_1(VAR_4->map, VAR_0, &VAR_8);

 return ((VAR_8 & VAR_5) == VAR_7) ? 1 : 0;
}
