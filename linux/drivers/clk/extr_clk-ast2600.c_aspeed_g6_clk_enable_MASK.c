
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct aspeed_clk_gate {scalar_t__ clock_idx; scalar_t__ reset_idx; int flags; int lock; int map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct aspeed_clk_gate*) ;
 scalar_t__ FUNC_3 (struct aspeed_clk_gate*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 struct aspeed_clk_gate* FUNC_8 (struct clk_hw*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_1)
{
 struct aspeed_clk_gate *VAR_2 = FUNC_8(VAR_1);
 unsigned long VAR_3;
 u32 VAR_4 = FUNC_1(VAR_2->clock_idx);
 u32 VAR_5 = FUNC_1(VAR_2->reset_idx);

 FUNC_6(VAR_2->lock, VAR_3);

 if (FUNC_0(VAR_1)) {
  FUNC_7(VAR_2->lock, VAR_3);
  return 0;
 }

 if (VAR_2->reset_idx >= 0) {

  FUNC_5(VAR_2->map, FUNC_3(VAR_2), VAR_5);

  FUNC_9(100);
 }


 if (VAR_2->flags & VAR_0) {

  FUNC_5(VAR_2->map, FUNC_2(VAR_2) + 0x04, VAR_4);
 } else {

  FUNC_5(VAR_2->map, FUNC_2(VAR_2), VAR_4);
 }

 if (VAR_2->reset_idx >= 0) {

  FUNC_4(10);

  FUNC_5(VAR_2->map, FUNC_3(VAR_2) + 0x4, VAR_5);
 }

 FUNC_7(VAR_2->lock, VAR_3);

 return 0;
}
