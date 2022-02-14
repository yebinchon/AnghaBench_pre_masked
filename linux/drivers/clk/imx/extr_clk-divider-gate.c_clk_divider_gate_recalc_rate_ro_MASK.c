
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_divider {unsigned int shift; int width; int flags; int table; int reg; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,unsigned int,int ,int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 struct clk_divider* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
           unsigned long VAR_1)
{
 struct clk_divider *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;

 VAR_3 = FUNC_2(VAR_2->reg) >> VAR_2->shift;
 VAR_3 &= FUNC_0(VAR_2->width);
 if (!VAR_3)
  return 0;

 return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2->table,
       VAR_2->flags, VAR_2->width);
}
