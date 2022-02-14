
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct owl_pll_hw {scalar_t__ width; long bfreq; scalar_t__ table; } ;
struct owl_pll {struct owl_pll_hw pll_hw; } ;
struct clk_pll_table {long rate; } ;
struct clk_hw {int dummy; } ;


 struct clk_pll_table* FUNC_0 (scalar_t__,unsigned long) ;
 struct owl_pll* FUNC_1 (struct clk_hw*) ;
 long FUNC_2 (struct owl_pll_hw*,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 struct owl_pll *VAR_3 = FUNC_1(VAR_0);
 struct owl_pll_hw *VAR_4 = &VAR_3->pll_hw;
 const struct clk_pll_table *VAR_5;
 u32 VAR_6;

 if (VAR_4->table) {
  VAR_5 = FUNC_0(VAR_4->table, VAR_1);
  return VAR_5->rate;
 }


 if (VAR_4->width == 0)
  return VAR_4->bfreq;

 VAR_6 = FUNC_2(VAR_4, VAR_1);

 return VAR_4->bfreq * VAR_6;
}
