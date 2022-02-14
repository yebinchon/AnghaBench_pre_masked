
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct mmp_clk_mix_clk_table {scalar_t__ valid; scalar_t__ parent_index; int divisor; } ;
struct mmp_clk_mix {int table_size; struct mmp_clk_mix_clk_table* table; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mmp_clk_mix*,int ) ;
 scalar_t__ FUNC_1 (struct mmp_clk_mix*,scalar_t__) ;
 int FUNC_2 (struct mmp_clk_mix*,scalar_t__,scalar_t__,int,int) ;
 struct mmp_clk_mix* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct mmp_clk_mix *VAR_3 = FUNC_3(VAR_1);
 struct mmp_clk_mix_clk_table *VAR_4;
 int VAR_5;
 u32 VAR_6, VAR_7;

 if (VAR_3->table) {
  for (VAR_5 = 0; VAR_5 < VAR_3->table_size; VAR_5++) {
   VAR_4 = &VAR_3->table[VAR_5];
   if (VAR_4->valid == 0)
    continue;
   if (VAR_4->parent_index == VAR_2)
    break;
  }
  if (VAR_5 < VAR_3->table_size) {
   VAR_6 = FUNC_0(VAR_3, VAR_4->divisor);
   VAR_7 = FUNC_1(VAR_3, VAR_4->parent_index);
  } else
   return -VAR_0;
 } else {
  VAR_7 = FUNC_1(VAR_3, VAR_2);
  VAR_6 = 0;
 }

 return FUNC_2(VAR_3, VAR_7, VAR_6, 1, VAR_6 ? 1 : 0);
}
