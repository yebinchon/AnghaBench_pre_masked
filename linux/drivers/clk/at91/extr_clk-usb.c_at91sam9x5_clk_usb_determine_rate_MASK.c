
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2,
          struct clk_rate_request *VAR_3)
{
 struct clk_hw *VAR_4;
 long VAR_5 = -VAR_0;
 unsigned long VAR_6;
 int VAR_7 = -1;
 int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_2); VAR_9++) {
  int VAR_10;

  VAR_4 = FUNC_2(VAR_2, VAR_9);
  if (!VAR_4)
   continue;

  for (VAR_10 = 1; VAR_10 < VAR_1 + 2; VAR_10++) {
   unsigned long VAR_11;

   VAR_11 = VAR_3->rate * VAR_10;
   VAR_11 = FUNC_3(VAR_4,
          VAR_11);
   VAR_6 = FUNC_0(VAR_11, VAR_10);
   if (VAR_6 < VAR_3->rate)
    VAR_8 = VAR_3->rate - VAR_6;
   else
    VAR_8 = VAR_6 - VAR_3->rate;

   if (VAR_7 < 0 || VAR_7 > VAR_8) {
    VAR_5 = VAR_6;
    VAR_7 = VAR_8;
    VAR_3->best_parent_rate = VAR_11;
    VAR_3->best_parent_hw = VAR_4;
   }

   if (!VAR_7 || VAR_6 < VAR_3->rate)
    break;
  }

  if (!VAR_7)
   break;
 }

 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->rate = VAR_5;
 return 0;
}
