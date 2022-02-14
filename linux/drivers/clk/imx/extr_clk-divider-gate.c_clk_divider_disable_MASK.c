
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider_gate {int cached_val; } ;
struct clk_divider {int shift; int lock; int reg; int width; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct clk_divider* FUNC_4 (struct clk_hw*) ;
 struct clk_divider_gate* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct clk_hw *VAR_0)
{
 struct clk_divider_gate *VAR_1 = FUNC_5(VAR_0);
 struct clk_divider *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3 = 0;
 u32 VAR_4;

 FUNC_2(VAR_2->lock, VAR_3);


 VAR_4 = FUNC_1(VAR_2->reg) >> VAR_2->shift;
 VAR_4 &= FUNC_0(VAR_2->width);
 VAR_1->cached_val = VAR_4;
 FUNC_6(0, VAR_2->reg);

 FUNC_3(VAR_2->lock, VAR_3);
}
