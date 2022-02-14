
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider_gate {int cached_val; } ;
struct clk_divider {int shift; int lock; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct clk_divider* FUNC_5 (struct clk_hw*) ;
 struct clk_divider_gate* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_1)
{
 struct clk_divider_gate *VAR_2 = FUNC_6(VAR_1);
 struct clk_divider *VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4 = 0;
 u32 VAR_5;

 if (!VAR_2->cached_val) {
  FUNC_1("%s: no valid preset rate\n", FUNC_0(VAR_1));
  return -VAR_0;
 }

 FUNC_3(VAR_3->lock, VAR_4);

 VAR_5 = FUNC_2(VAR_3->reg);
 VAR_5 |= VAR_2->cached_val << VAR_3->shift;
 FUNC_7(VAR_5, VAR_3->reg);

 FUNC_4(VAR_3->lock, VAR_4);

 return 0;
}
