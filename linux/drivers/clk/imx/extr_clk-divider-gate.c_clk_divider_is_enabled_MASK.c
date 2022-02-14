
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider {int shift; int width; int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clk_divider* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_divider *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->reg) >> VAR_1->shift;
 VAR_2 &= FUNC_0(VAR_1->width);

 return VAR_2 ? 1 : 0;
}
