
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 unsigned long FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1,
       struct clk_rate_request *VAR_2)
{
 long VAR_3 = -VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  unsigned long VAR_5;
  unsigned long VAR_6;
  struct clk_hw *VAR_7;

  VAR_7 = FUNC_1(VAR_1, VAR_4);
  if (!VAR_7)
   continue;

  VAR_5 = FUNC_2(VAR_7);

  VAR_6 = FUNC_3(VAR_2->rate, VAR_5,
       ((void*)0), ((void*)0));

  if (VAR_3 < 0 ||
      (VAR_2->rate - VAR_6) < (VAR_2->rate - VAR_3)) {
   VAR_3 = VAR_6;
   VAR_2->best_parent_rate = VAR_5;
   VAR_2->best_parent_hw = VAR_7;
  }
 }

 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->rate = VAR_3;
 return 0;
}
