
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned int rate; unsigned int best_parent_rate; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_1,
  struct clk_rate_request *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->rate == 0)
  return -VAR_0;
 if (VAR_2->rate == VAR_2->best_parent_rate)
  return 0;

 VAR_3 = FUNC_0(VAR_2->best_parent_rate, VAR_2->rate);
 if (VAR_3 < 2)
  VAR_2->rate = VAR_2->best_parent_rate;

 if (VAR_3 > 256)
  VAR_3 = 256;

 VAR_2->rate = VAR_2->best_parent_rate / VAR_3;

 return 0;
}
