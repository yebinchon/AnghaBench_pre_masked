
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_programmable_layout {int pres_mask; scalar_t__ is_pres_direct; } ;
struct clk_programmable {struct clk_programmable_layout* layout; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 unsigned long FUNC_2 (struct clk_hw*) ;
 struct clk_programmable* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1,
        struct clk_rate_request *VAR_2)
{
 struct clk_programmable *VAR_3 = FUNC_3(VAR_1);
 const struct clk_programmable_layout *VAR_4 = VAR_3->layout;
 struct clk_hw *VAR_5;
 long VAR_6 = -VAR_0;
 unsigned long VAR_7;
 unsigned long VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++) {
  VAR_5 = FUNC_1(VAR_1, VAR_10);
  if (!VAR_5)
   continue;

  VAR_7 = FUNC_2(VAR_5);
  if (VAR_4->is_pres_direct) {
   for (VAR_9 = 0; VAR_9 <= VAR_4->pres_mask; VAR_9++) {
    VAR_8 = VAR_7 / (VAR_9 + 1);
    if (VAR_8 <= VAR_2->rate)
     break;
   }
  } else {
   for (VAR_9 = 0; VAR_9 < VAR_4->pres_mask; VAR_9++) {
    VAR_8 = VAR_7 >> VAR_9;
    if (VAR_8 <= VAR_2->rate)
     break;
   }
  }

  if (VAR_8 > VAR_2->rate)
   continue;

  if (VAR_6 < 0 ||
      (VAR_2->rate - VAR_8) < (VAR_2->rate - VAR_6)) {
   VAR_6 = VAR_8;
   VAR_2->best_parent_rate = VAR_7;
   VAR_2->best_parent_hw = VAR_5;
  }

  if (!VAR_6)
   break;
 }

 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->rate = VAR_6;
 return 0;
}
