
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (struct clk_hw*,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,int *,int *,int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2,
          struct clk_rate_request *VAR_3)
{
 struct clk_hw *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9 = 0, VAR_10, VAR_11 = 0;
 unsigned long VAR_12 = VAR_3->rate;


 VAR_7 = FUNC_1(VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_4 = FUNC_2(VAR_2, VAR_6);
  if (!VAR_4)
   continue;
  if (FUNC_0(VAR_2) & VAR_0)
   VAR_8 = FUNC_4(VAR_4, VAR_12);
  else
   VAR_8 = FUNC_3(VAR_4);

  VAR_10 = FUNC_5(VAR_12, ((void*)0), ((void*)0), VAR_6,
            VAR_8);

  if (VAR_10 <= VAR_12 && VAR_10 > VAR_11) {
   VAR_5 = VAR_4;
   VAR_9 = VAR_8;
   VAR_11 = VAR_10;
  }
 }

 if (!VAR_5)
  return -VAR_1;

 VAR_3->best_parent_hw = VAR_5;
 VAR_3->best_parent_rate = VAR_9;
 VAR_3->rate = VAR_11;

 return 0;
}
