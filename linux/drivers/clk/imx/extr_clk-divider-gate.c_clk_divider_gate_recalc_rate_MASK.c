
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_divider_gate {unsigned int cached_val; } ;
struct clk_divider {unsigned int shift; int width; int flags; int table; int lock; int reg; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (struct clk_hw*,unsigned long,unsigned int,int ,int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 struct clk_divider* FUNC_6 (struct clk_hw*) ;
 struct clk_divider_gate* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_8(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct clk_divider_gate *VAR_2 = FUNC_7(VAR_0);
 struct clk_divider *VAR_3 = FUNC_6(VAR_0);
 unsigned long VAR_4 = 0;
 unsigned int VAR_5;

 FUNC_4(VAR_3->lock, VAR_4);

 if (!FUNC_1(VAR_0)) {
  VAR_5 = VAR_2->cached_val;
 } else {
  VAR_5 = FUNC_3(VAR_3->reg) >> VAR_3->shift;
  VAR_5 &= FUNC_0(VAR_3->width);
 }

 FUNC_5(VAR_3->lock, VAR_4);

 if (!VAR_5)
  return 0;

 return FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3->table,
       VAR_3->flags, VAR_3->width);
}
