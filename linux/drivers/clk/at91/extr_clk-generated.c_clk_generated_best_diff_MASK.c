
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_rate_request {unsigned long best_parent_rate; struct clk_hw* best_parent_hw; scalar_t__ rate; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct clk_rate_request *VAR_0,
        struct clk_hw *VAR_1,
        unsigned long VAR_2, u32 VAR_3,
        int *VAR_4, long *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_3)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_2 / VAR_3;
 VAR_7 = FUNC_0(VAR_0->rate - VAR_6);

 if (*VAR_4 < 0 || *VAR_4 > VAR_7) {
  *VAR_5 = VAR_6;
  *VAR_4 = VAR_7;
  VAR_0->best_parent_rate = VAR_2;
  VAR_0->best_parent_hw = VAR_1;
 }
}
