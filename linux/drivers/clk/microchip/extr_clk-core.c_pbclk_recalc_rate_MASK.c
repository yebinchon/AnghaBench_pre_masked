
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_periph_clk {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct pic32_periph_clk* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct pic32_periph_clk*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
           unsigned long VAR_1)
{
 struct pic32_periph_clk *VAR_2 = FUNC_0(VAR_0);

 return VAR_1 / FUNC_1(VAR_2);
}
