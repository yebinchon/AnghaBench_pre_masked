
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct factors_request {unsigned long rate; int parent_index; unsigned long parent_rate; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;
struct clk_factors {int (* get_factors ) (struct factors_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (struct clk_hw*,unsigned long) ;
 int FUNC_5 (struct factors_request*) ;
 struct clk_factors* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2,
          struct clk_rate_request *VAR_3)
{
 struct clk_factors *VAR_4 = FUNC_6(VAR_2);
 struct clk_hw *VAR_5, *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10 = 0, VAR_11, VAR_12 = 0;


 VAR_8 = FUNC_1(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct factors_request VAR_13 = {
   .rate = VAR_3->rate,
   .parent_index = VAR_7,
  };
  VAR_5 = FUNC_2(VAR_2, VAR_7);
  if (!VAR_5)
   continue;
  if (FUNC_0(VAR_2) & VAR_0)
   VAR_9 = FUNC_4(VAR_5, VAR_3->rate);
  else
   VAR_9 = FUNC_3(VAR_5);

  VAR_13.parent_rate = VAR_9;
  VAR_4->get_factors(&VAR_13);
  VAR_11 = VAR_13.rate;

  if (VAR_11 <= VAR_3->rate && VAR_11 > VAR_12) {
   VAR_6 = VAR_5;
   VAR_10 = VAR_9;
   VAR_12 = VAR_11;
  }
 }

 if (!VAR_6)
  return -VAR_1;

 VAR_3->best_parent_hw = VAR_6;
 VAR_3->best_parent_rate = VAR_10;
 VAR_3->rate = VAR_12;

 return 0;
}
