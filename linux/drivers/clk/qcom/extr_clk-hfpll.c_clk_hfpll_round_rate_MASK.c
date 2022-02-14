
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfpll_data {unsigned long max_rate; int min_rate; } ;
struct clk_hw {int dummy; } ;
struct clk_hfpll {struct hfpll_data* d; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ,unsigned long) ;
 struct clk_hfpll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 struct clk_hfpll *VAR_3 = FUNC_2(VAR_0);
 struct hfpll_data const *VAR_4 = VAR_3->d;
 unsigned long VAR_5;

 VAR_1 = FUNC_1(VAR_1, VAR_4->min_rate, VAR_4->max_rate);

 VAR_5 = FUNC_0(VAR_1, *VAR_2) * *VAR_2;
 if (VAR_5 > VAR_4->max_rate)
  VAR_5 -= *VAR_2;

 return VAR_5;
}
