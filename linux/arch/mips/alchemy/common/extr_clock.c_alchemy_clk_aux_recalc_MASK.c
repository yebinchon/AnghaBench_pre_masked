
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_auxpll_clk {int reg; } ;


 int FUNC_0 (int ) ;
 struct alchemy_auxpll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct alchemy_auxpll_clk *VAR_2 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_2->reg) & 0xff) * VAR_1;
}
