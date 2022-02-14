
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_clock {int pllcr; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pll_clock* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct pll_clock *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 1 << (FUNC_0(VAR_2->pllcr) & 3);

 return VAR_1 * VAR_3;
}
