
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tmds {int div_offset; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;
 struct sun4i_tmds* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1,
         struct clk_rate_request *VAR_2)
{
 struct sun4i_tmds *VAR_3 = FUNC_4(VAR_1);
 struct clk_hw *VAR_4 = ((void*)0);
 unsigned long VAR_5 = 0;
 unsigned long VAR_6 = VAR_2->rate;
 int VAR_7 = 1, VAR_8 = 1;
 int VAR_9, VAR_10, VAR_11;







 for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_1); VAR_11++) {
  VAR_4 = FUNC_2(VAR_1, VAR_11);
  if (!VAR_4)
   continue;

  for (VAR_9 = 1; VAR_9 < 3; VAR_9++) {
   for (VAR_10 = VAR_3->div_offset ?: 1;
        VAR_10 < (16 + VAR_3->div_offset); VAR_10++) {
    unsigned long VAR_12 = VAR_6 * VAR_9 * VAR_10;
    unsigned long VAR_13;

    VAR_13 = FUNC_3(VAR_4, VAR_12);

    if (VAR_13 == VAR_12) {
     VAR_5 = VAR_13;
     VAR_8 = VAR_9;
     VAR_7 = VAR_10;
     goto out;
    }

    if (!VAR_5 ||
        FUNC_0(VAR_6 - VAR_13 / VAR_9 / VAR_10) <
        FUNC_0(VAR_6 - VAR_5 / VAR_8 /
     VAR_7)) {
     VAR_5 = VAR_13;
     VAR_8 = VAR_9;
     VAR_7 = VAR_10;
    }
   }
  }
 }

 if (!VAR_4)
  return -VAR_0;

out:
 VAR_2->rate = VAR_5 / VAR_8 / VAR_7;
 VAR_2->best_parent_rate = VAR_5;
 VAR_2->best_parent_hw = VAR_4;

 return 0;
}
