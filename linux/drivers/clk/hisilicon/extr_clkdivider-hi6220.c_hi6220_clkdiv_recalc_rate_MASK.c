
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hi6220_clk_divider {unsigned int shift; int width; int table; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,unsigned int,int ,int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 struct hi6220_clk_divider* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 unsigned int VAR_3;
 struct hi6220_clk_divider *VAR_4 = FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_4->reg) >> VAR_4->shift;
 VAR_3 &= FUNC_0(VAR_4->width);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4->table,
       VAR_0, VAR_4->width);
}
