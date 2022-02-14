
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct aspeed_clk_gate {scalar_t__ clock_idx; scalar_t__ reset_idx; long flags; int lock; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 long VAR_2 ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 struct aspeed_clk_gate* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_3)
{
 struct aspeed_clk_gate *VAR_4 = FUNC_6(VAR_3);
 unsigned long VAR_5;
 u32 VAR_6 = FUNC_0(VAR_4->clock_idx);
 u32 VAR_7 = FUNC_0(VAR_4->reset_idx);
 u32 VAR_8;

 FUNC_4(VAR_4->lock, VAR_5);

 if (FUNC_1(VAR_3)) {
  FUNC_5(VAR_4->lock, VAR_5);
  return 0;
 }

 if (VAR_4->reset_idx >= 0) {

  FUNC_3(VAR_4->map, VAR_1, VAR_7, VAR_7);


  FUNC_7(100);
 }


 VAR_8 = (VAR_4->flags & VAR_2) ? 0 : VAR_6;
 FUNC_3(VAR_4->map, VAR_0, VAR_6, VAR_8);

 if (VAR_4->reset_idx >= 0) {

  FUNC_2(10);


  FUNC_3(VAR_4->map, VAR_1, VAR_7, 0);
 }

 FUNC_5(VAR_4->lock, VAR_5);

 return 0;
}
