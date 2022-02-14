
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_mix_clk_table {scalar_t__ valid; int parent_index; unsigned int divisor; } ;
struct mmp_clk_mix {int table_size; struct mmp_clk_mix_clk_table* table; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmp_clk_mix*,unsigned int) ;
 int FUNC_1 (struct mmp_clk_mix*,int) ;
 int FUNC_2 (struct mmp_clk_mix*,int ,int ,int,int) ;
 int FUNC_3 (struct clk_hw*) ;
 struct clk_hw* FUNC_4 (struct clk_hw*,int) ;
 unsigned long FUNC_5 (struct clk_hw*) ;
 struct mmp_clk_mix* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct mmp_clk_mix *VAR_4 = FUNC_6(VAR_1);
 struct mmp_clk_mix_clk_table *VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;
 struct clk_hw *VAR_8;
 int VAR_9;

 VAR_7 = VAR_3 / VAR_2;

 if (VAR_4->table) {
  for (VAR_9 = 0; VAR_9 < VAR_4->table_size; VAR_9++) {
   VAR_5 = &VAR_4->table[VAR_9];
   if (VAR_5->valid == 0)
    continue;
   VAR_8 = FUNC_4(VAR_1,
       VAR_5->parent_index);
   VAR_6 = FUNC_5(VAR_8);
   if (VAR_6 == VAR_3
    && VAR_5->divisor == VAR_7)
    break;
  }
  if (VAR_9 < VAR_4->table_size)
   return FUNC_2(VAR_4,
     FUNC_1(VAR_4, VAR_5->parent_index),
     FUNC_0(VAR_4, VAR_5->divisor),
     1, 1);
  else
   return -VAR_0;
 } else {
  for (VAR_9 = 0; VAR_9 < FUNC_3(VAR_1); VAR_9++) {
   VAR_8 = FUNC_4(VAR_1, VAR_9);
   VAR_6 = FUNC_5(VAR_8);
   if (VAR_6 == VAR_3)
    break;
  }
  if (VAR_9 < FUNC_3(VAR_1))
   return FUNC_2(VAR_4, FUNC_1(VAR_4, VAR_9),
     FUNC_0(VAR_4, VAR_7), 1, 1);
  else
   return -VAR_0;
 }
}
