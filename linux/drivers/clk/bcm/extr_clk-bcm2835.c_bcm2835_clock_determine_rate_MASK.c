
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*,size_t,unsigned long,int *,unsigned long*,unsigned long*) ;
 size_t FUNC_2 (struct clk_hw*) ;
 struct clk_hw* FUNC_3 (struct clk_hw*) ;
 struct clk_hw* FUNC_4 (struct clk_hw*,size_t) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1,
     struct clk_rate_request *VAR_2)
{
 struct clk_hw *VAR_3, *VAR_4 = ((void*)0);
 bool VAR_5;
 unsigned long VAR_6, VAR_7 = 0;
 unsigned long VAR_8, VAR_9 = 0;
 unsigned long VAR_10, VAR_11 = 0;
 size_t VAR_12;
 u32 VAR_13;

 VAR_5 = FUNC_0(FUNC_3(VAR_1));




 for (VAR_12 = 0; VAR_12 < FUNC_2(VAR_1); ++VAR_12) {
  VAR_3 = FUNC_4(VAR_1, VAR_12);
  if (!VAR_3)
   continue;
  if (FUNC_0(VAR_3) && !VAR_5)
   continue;

  VAR_6 = FUNC_1(VAR_1, VAR_12, VAR_2->rate,
         &VAR_13, &VAR_8,
         &VAR_10);
  if (VAR_6 > VAR_7 && VAR_6 <= VAR_2->rate) {
   VAR_4 = VAR_3;
   VAR_9 = VAR_8;
   VAR_7 = VAR_6;
   VAR_11 = VAR_10;
  }
 }

 if (!VAR_4)
  return -VAR_0;

 VAR_2->best_parent_hw = VAR_4;
 VAR_2->best_parent_rate = VAR_9;

 VAR_2->rate = VAR_11;

 return 0;
}
