
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int rate; int best_parent_rate; } ;
struct clk_mmc {scalar_t__ id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct clk_mmc* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_2,
      struct clk_rate_request *VAR_3)
{
 struct clk_mmc *VAR_4 = FUNC_0(VAR_2);

 if ((VAR_3->rate <= 13000000) && (VAR_4->id == VAR_1)) {
  VAR_3->rate = 13000000;
  VAR_3->best_parent_rate = 26000000;
 } else if (VAR_3->rate <= 26000000) {
  VAR_3->rate = 25000000;
  VAR_3->best_parent_rate = 180000000;
 } else if (VAR_3->rate <= 52000000) {
  VAR_3->rate = 50000000;
  VAR_3->best_parent_rate = 360000000;
 } else if (VAR_3->rate <= 100000000) {
  VAR_3->rate = 100000000;
  VAR_3->best_parent_rate = 720000000;
 } else {

  VAR_3->rate = 180000000;
  VAR_3->best_parent_rate = 1440000000;
 }
 return -VAR_0;
}
