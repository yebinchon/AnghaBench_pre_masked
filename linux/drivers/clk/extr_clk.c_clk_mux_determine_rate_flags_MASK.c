
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; int * best_parent_hw; } ;
struct clk_hw {struct clk_core* core; } ;
struct clk_core {int flags; int num_parents; int * hw; struct clk_core* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct clk_rate_request*) ;
 struct clk_core* FUNC_1 (struct clk_core*,int) ;
 void* FUNC_2 (struct clk_core*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long,unsigned long,unsigned long) ;

int FUNC_4(struct clk_hw *VAR_3,
     struct clk_rate_request *VAR_4,
     unsigned long VAR_5)
{
 struct clk_core *VAR_6 = VAR_3->core, *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12 = 0;
 struct clk_rate_request VAR_13 = *VAR_4;


 if (VAR_6->flags & VAR_0) {
  VAR_7 = VAR_6->parent;
  if (VAR_6->flags & VAR_1) {
   VAR_11 = FUNC_0(VAR_7 ? VAR_7->hw : ((void*)0),
         &VAR_13);
   if (VAR_11)
    return VAR_11;

   VAR_12 = VAR_13.rate;
  } else if (VAR_7) {
   VAR_12 = FUNC_2(VAR_7);
  } else {
   VAR_12 = FUNC_2(VAR_6);
  }

  goto out;
 }


 VAR_10 = VAR_6->num_parents;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_7 = FUNC_1(VAR_6, VAR_9);
  if (!VAR_7)
   continue;

  if (VAR_6->flags & VAR_1) {
   VAR_13 = *VAR_4;
   VAR_11 = FUNC_0(VAR_7->hw, &VAR_13);
   if (VAR_11)
    continue;
  } else {
   VAR_13.rate = FUNC_2(VAR_7);
  }

  if (FUNC_3(VAR_4->rate, VAR_13.rate,
           VAR_12, VAR_5)) {
   VAR_8 = VAR_7;
   VAR_12 = VAR_13.rate;
  }
 }

 if (!VAR_8)
  return -VAR_2;

out:
 if (VAR_8)
  VAR_4->best_parent_hw = VAR_8->hw;
 VAR_4->best_parent_rate = VAR_12;
 VAR_4->rate = VAR_12;

 return 0;
}
