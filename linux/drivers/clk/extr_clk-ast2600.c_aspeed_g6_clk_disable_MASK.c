
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct aspeed_clk_gate {int flags; int lock; int map; int clock_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct aspeed_clk_gate*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct aspeed_clk_gate* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_1)
{
 struct aspeed_clk_gate *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;
 u32 VAR_4 = FUNC_0(VAR_2->clock_idx);

 FUNC_3(VAR_2->lock, VAR_3);

 if (VAR_2->flags & VAR_0) {
  FUNC_2(VAR_2->map, FUNC_1(VAR_2), VAR_4);
 } else {

  FUNC_2(VAR_2->map, FUNC_1(VAR_2) + 0x4, VAR_4);
 }

 FUNC_4(VAR_2->lock, VAR_3);
}
