
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct aspeed_clk_gate {long flags; int lock; int map; int clock_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 long VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct aspeed_clk_gate* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_2)
{
 struct aspeed_clk_gate *VAR_3 = FUNC_4(VAR_2);
 unsigned long VAR_4;
 u32 VAR_5 = FUNC_0(VAR_3->clock_idx);
 u32 VAR_6;

 FUNC_2(VAR_3->lock, VAR_4);

 VAR_6 = (VAR_3->flags & VAR_1) ? VAR_5 : 0;
 FUNC_1(VAR_3->map, VAR_0, VAR_5, VAR_6);

 FUNC_3(VAR_3->lock, VAR_4);
}
