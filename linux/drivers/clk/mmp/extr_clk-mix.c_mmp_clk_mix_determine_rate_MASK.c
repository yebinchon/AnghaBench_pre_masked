
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_clk_mix_clk_table {scalar_t__ valid; int parent_index; unsigned long divisor; } ;
struct mmp_clk_mix {int table_size; struct mmp_clk_mix_clk_table* table; } ;
struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (struct mmp_clk_mix*,int) ;
 int FUNC_1 (struct mmp_clk_mix*) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (struct clk_hw*) ;
 struct clk_hw* FUNC_4 (struct clk_hw*,int) ;
 unsigned long FUNC_5 (struct clk_hw*) ;
 struct mmp_clk_mix* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2,
          struct clk_rate_request *VAR_3)
{
 struct mmp_clk_mix *VAR_4 = FUNC_6(VAR_2);
 struct mmp_clk_mix_clk_table *VAR_5;
 struct clk_hw *VAR_6, *VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 u32 VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17;


 VAR_10 = 0;
 VAR_11 = 0;
 VAR_13 = VAR_1;
 VAR_7 = ((void*)0);

 if (VAR_4->table) {
  for (VAR_16 = 0; VAR_16 < VAR_4->table_size; VAR_16++) {
   VAR_5 = &VAR_4->table[VAR_16];
   if (VAR_5->valid == 0)
    continue;
   VAR_6 = FUNC_4(VAR_2,
       VAR_5->parent_index);
   VAR_8 = FUNC_5(VAR_6);
   VAR_9 = VAR_8 / VAR_5->divisor;
   VAR_12 = FUNC_2(VAR_9 - VAR_3->rate);
   if (!VAR_7 || VAR_12 < VAR_13) {
    VAR_7 = VAR_6;
    VAR_11 = VAR_8;
    VAR_10 = VAR_9;
    VAR_13 = VAR_12;
    if (VAR_13 == 0)
     goto found;
   }
  }
 } else {
  for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_2); VAR_16++) {
   VAR_6 = FUNC_4(VAR_2, VAR_16);
   VAR_8 = FUNC_5(VAR_6);
   VAR_14 = FUNC_1(VAR_4);
   for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
    VAR_15 = FUNC_0(VAR_4, VAR_17);
    VAR_9 = VAR_8 / VAR_15;
    VAR_12 = FUNC_2(VAR_9 - VAR_3->rate);
    if (!VAR_7 || VAR_12 < VAR_13) {
     VAR_7 = VAR_6;
     VAR_11 = VAR_8;
     VAR_10 = VAR_9;
     VAR_13 = VAR_12;
     if (VAR_13 == 0)
      goto found;
    }
   }
  }
 }

found:
 if (!VAR_7)
  return -VAR_0;

 VAR_3->best_parent_rate = VAR_11;
 VAR_3->best_parent_hw = VAR_7;
 VAR_3->rate = VAR_10;

 return 0;
}
