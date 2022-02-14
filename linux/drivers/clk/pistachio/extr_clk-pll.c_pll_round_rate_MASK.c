
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pistachio_clk_pll {unsigned int nr_rates; TYPE_1__* rates; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long fref; unsigned long fout; } ;


 struct pistachio_clk_pll* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long *VAR_2)
{
 struct pistachio_clk_pll *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_rates; VAR_4++) {
  if (VAR_4 > 0 && VAR_3->rates[VAR_4].fref == *VAR_2 &&
      VAR_3->rates[VAR_4].fout <= VAR_1)
   return VAR_3->rates[VAR_4 - 1].fout;
 }

 return VAR_3->rates[0].fout;
}
