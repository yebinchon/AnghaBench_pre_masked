
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_rate {long rate; } ;
struct clk_hw {int dummy; } ;


 struct pll_rate* FUNC_0 (unsigned long) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 const struct pll_rate *VAR_3 = FUNC_0(VAR_1);

 return VAR_3->rate;
}
