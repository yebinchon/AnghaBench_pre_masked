
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_mux_div {int hid_width; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,unsigned int) ;
 unsigned long FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (struct clk_hw*,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,int,unsigned int) ;
 struct clk_regmap_mux_div* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_1,
      struct clk_rate_request *VAR_2)
{
 struct clk_regmap_mux_div *VAR_3 = FUNC_7(VAR_1);
 unsigned int VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8 = 0;
 unsigned long VAR_9 = VAR_2->rate;

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++) {
  struct clk_hw *VAR_10 = FUNC_2(VAR_1, VAR_4);
  unsigned long VAR_11 = FUNC_3(VAR_10);

  VAR_6 = FUNC_0(VAR_3->hid_width) - 1;
  for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
   VAR_11 = FUNC_6(VAR_9, VAR_5, 2);
   VAR_11 = FUNC_4(VAR_10, VAR_11);
   VAR_7 = FUNC_6(VAR_11, 2, VAR_5);

   if (FUNC_5(VAR_9, VAR_8, VAR_7)) {
    VAR_8 = VAR_7;
    VAR_2->rate = VAR_8;
    VAR_2->best_parent_rate = VAR_11;
    VAR_2->best_parent_hw = VAR_10;
   }

   if (VAR_7 < VAR_9 || VAR_8 <= VAR_9)
    break;
  }
 }

 if (!VAR_8)
  return -VAR_0;

 return 0;
}
