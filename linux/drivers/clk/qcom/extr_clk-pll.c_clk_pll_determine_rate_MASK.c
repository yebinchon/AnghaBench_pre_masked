
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_freq_tbl {int freq; } ;
struct clk_rate_request {int rate; int best_parent_rate; } ;
struct clk_pll {int freq_tbl; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,int ) ;
 struct pll_freq_tbl* FUNC_1 (int ,int ) ;
 struct clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int
FUNC_3(struct clk_hw *VAR_0, struct clk_rate_request *VAR_1)
{
 struct clk_pll *VAR_2 = FUNC_2(VAR_0);
 const struct pll_freq_tbl *VAR_3;

 VAR_3 = FUNC_1(VAR_2->freq_tbl, VAR_1->rate);
 if (!VAR_3)
  VAR_1->rate = FUNC_0(VAR_0, VAR_1->best_parent_rate);
 else
  VAR_1->rate = VAR_3->freq;

 return 0;
}
