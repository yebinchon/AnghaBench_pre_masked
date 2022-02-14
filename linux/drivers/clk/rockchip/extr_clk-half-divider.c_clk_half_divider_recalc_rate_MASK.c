
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_divider {unsigned int shift; int width; int reg; } ;


 unsigned long FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 struct clk_divider* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct clk_divider *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;

 VAR_3 = FUNC_2(VAR_2->reg) >> VAR_2->shift;
 VAR_3 &= FUNC_1(VAR_2->width);
 VAR_3 = VAR_3 * 2 + 3;

 return FUNC_0(((u64)VAR_1 * 2), VAR_3);
}
