
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long best_parent_rate; long rate; struct clk_hw* best_parent_hw; } ;
struct clk_ops {int (* determine_rate ) (struct clk_hw*,struct clk_rate_request*) ;long (* round_rate ) (struct clk_hw*,long,unsigned long*) ;scalar_t__ set_parent; } ;
struct clk_hw {int dummy; } ;
struct clk_composite {struct clk_hw* mux_hw; struct clk_hw* rate_hw; struct clk_ops* mux_ops; struct clk_ops* rate_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 unsigned long FUNC_1 (long) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 struct clk_hw* FUNC_4 (struct clk_hw*) ;
 struct clk_hw* FUNC_5 (struct clk_hw*,int) ;
 void* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct clk_hw*,struct clk_rate_request*) ;
 long FUNC_9 (struct clk_hw*,long,unsigned long*) ;
 long FUNC_10 (struct clk_hw*,long,unsigned long*) ;
 int FUNC_11 (struct clk_hw*,struct clk_rate_request*) ;
 struct clk_composite* FUNC_12 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_13(struct clk_hw *VAR_3,
     struct clk_rate_request *VAR_4)
{
 struct clk_composite *VAR_5 = FUNC_12(VAR_3);
 const struct clk_ops *VAR_6 = VAR_5->rate_ops;
 const struct clk_ops *VAR_7 = VAR_5->mux_ops;
 struct clk_hw *VAR_8 = VAR_5->rate_hw;
 struct clk_hw *VAR_9 = VAR_5->mux_hw;
 struct clk_hw *VAR_10;
 unsigned long VAR_11;
 long VAR_12, VAR_13 = 0;
 unsigned long VAR_14;
 unsigned long VAR_15 = VAR_2;
 long VAR_16;
 int VAR_17;

 if (VAR_8 && VAR_6 && VAR_6->determine_rate) {
  FUNC_0(VAR_8, VAR_3);
  return VAR_6->determine_rate(VAR_8, VAR_4);
 } else if (VAR_8 && VAR_6 && VAR_6->round_rate &&
     VAR_9 && VAR_7 && VAR_7->set_parent) {
  VAR_4->best_parent_hw = ((void*)0);

  if (FUNC_2(VAR_3) & VAR_0) {
   VAR_10 = FUNC_4(VAR_9);
   VAR_4->best_parent_hw = VAR_10;
   VAR_4->best_parent_rate = FUNC_6(VAR_10);

   VAR_16 = VAR_6->round_rate(VAR_8, VAR_4->rate,
          &VAR_4->best_parent_rate);
   if (VAR_16 < 0)
    return VAR_16;

   VAR_4->rate = VAR_16;
   return 0;
  }

  for (VAR_17 = 0; VAR_17 < FUNC_3(VAR_9); VAR_17++) {
   VAR_10 = FUNC_5(VAR_9, VAR_17);
   if (!VAR_10)
    continue;

   VAR_11 = FUNC_6(VAR_10);

   VAR_12 = VAR_6->round_rate(VAR_8, VAR_4->rate,
       &VAR_11);
   if (VAR_12 < 0)
    continue;

   VAR_14 = FUNC_1(VAR_4->rate - VAR_12);

   if (!VAR_14 || !VAR_4->best_parent_hw
           || VAR_15 > VAR_14) {
    VAR_4->best_parent_hw = VAR_10;
    VAR_4->best_parent_rate = VAR_11;
    VAR_15 = VAR_14;
    VAR_13 = VAR_12;
   }

   if (!VAR_14)
    return 0;
  }

  VAR_4->rate = VAR_13;
  return 0;
 } else if (VAR_9 && VAR_7 && VAR_7->determine_rate) {
  FUNC_0(VAR_9, VAR_3);
  return VAR_7->determine_rate(VAR_9, VAR_4);
 } else {
  FUNC_7("clk: clk_composite_determine_rate function called, but no mux or rate callback set!\n");
  return -VAR_1;
 }
}
