
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0,
     struct clk_rate_request *VAR_1)
{
 unsigned long VAR_2 = VAR_1->rate;
 unsigned long VAR_3 = 0;
 struct clk_hw *VAR_4 = ((void*)0);
 struct clk_hw *VAR_5;
 int VAR_6 = 1;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_0); VAR_8++) {
  VAR_5 = FUNC_2(VAR_0, VAR_8);
  if (!VAR_5)
   continue;

  for (VAR_7 = 1; VAR_7 <= 16; VAR_7++) {
   unsigned long VAR_9 = VAR_2 * VAR_7;
   unsigned long VAR_10;

   VAR_10 = FUNC_3(VAR_5, VAR_9);

   if (VAR_10 == VAR_9) {
    VAR_3 = VAR_10;
    VAR_6 = VAR_7;
    VAR_4 = VAR_5;
    break;
   }

   if (!VAR_3 ||
       FUNC_0(VAR_2 - VAR_10 / VAR_7) <
       FUNC_0(VAR_2 - VAR_3 / VAR_6)) {
    VAR_3 = VAR_10;
    VAR_6 = VAR_7;
    VAR_4 = VAR_5;
   }
  }

  if (VAR_3 / VAR_6 == VAR_2)
   break;
 }

 VAR_1->rate = VAR_3 / VAR_6;
 VAR_1->best_parent_rate = VAR_3;
 VAR_1->best_parent_hw = VAR_4;

 return 0;
}
