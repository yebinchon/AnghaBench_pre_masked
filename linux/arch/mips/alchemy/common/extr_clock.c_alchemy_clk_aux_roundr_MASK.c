
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_auxpll_clk {unsigned long maxmult; } ;


 struct alchemy_auxpll_clk* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0,
         unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct alchemy_auxpll_clk *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;

 if (!VAR_1 || !*VAR_2)
  return 0;

 VAR_4 = VAR_1 / (*VAR_2);

 if (VAR_4 && (VAR_4 < 7))
  VAR_4 = 7;
 if (VAR_4 > VAR_3->maxmult)
  VAR_4 = VAR_3->maxmult;

 return (*VAR_2) * VAR_4;
}
