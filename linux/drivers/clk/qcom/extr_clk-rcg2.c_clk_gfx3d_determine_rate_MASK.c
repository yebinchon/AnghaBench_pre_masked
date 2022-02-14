
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,struct clk_rate_request*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 unsigned long FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0,
        struct clk_rate_request *VAR_1)
{
 struct clk_rate_request VAR_2 = { };
 struct clk_hw *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_0, 0);
 if (VAR_1->rate == FUNC_2(VAR_6)) {
  VAR_1->best_parent_hw = VAR_6;
  return 0;
 }

 VAR_5 = FUNC_1(VAR_0, 2);
 VAR_3 = FUNC_1(VAR_0, 3);
 VAR_4 = FUNC_1(VAR_0, 4);


 VAR_7 = FUNC_2(VAR_5);

 VAR_2.rate = VAR_1->rate = FUNC_3(VAR_1->rate, VAR_7);
 if (VAR_1->rate == VAR_7) {
  VAR_1->rate = VAR_1->best_parent_rate = VAR_7;
  VAR_1->best_parent_hw = VAR_5;
  return 0;
 }

 if (VAR_1->best_parent_hw == VAR_5) {

  if (FUNC_2(VAR_4) == VAR_1->rate)
   VAR_1->best_parent_hw = VAR_4;
  else
   VAR_1->best_parent_hw = VAR_3;
 } else if (VAR_1->best_parent_hw == VAR_4) {
  VAR_1->best_parent_hw = VAR_3;
 } else {
  VAR_1->best_parent_hw = VAR_4;
 }

 VAR_8 = FUNC_0(VAR_1->best_parent_hw, &VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_1->rate = VAR_1->best_parent_rate = VAR_2.rate;

 return 0;
}
