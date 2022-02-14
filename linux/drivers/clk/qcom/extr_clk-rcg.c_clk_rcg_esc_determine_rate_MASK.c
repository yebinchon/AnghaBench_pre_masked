
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pre_div_width; } ;
struct clk_rcg {TYPE_1__ p; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; int best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 struct clk_rcg* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1,
  struct clk_rate_request *VAR_2)
{
 struct clk_rcg *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = FUNC_0(VAR_3->p.pre_div_width);
 int VAR_5;
 unsigned long VAR_6;

 if (VAR_2->rate == 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2->best_parent_hw);

 VAR_5 = VAR_6 / VAR_2->rate;

 if (VAR_5 >= 1 && VAR_5 <= VAR_4) {
  VAR_2->best_parent_rate = VAR_6;
  VAR_2->rate = VAR_6 / VAR_5;
  return 0;
 }

 return -VAR_0;
}
