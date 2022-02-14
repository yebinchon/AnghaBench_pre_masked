
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct clk_sysctrl {size_t parent_index; int * reg_bits; int * reg_mask; scalar_t__* reg_sel; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 struct clk_sysctrl* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_sysctrl *VAR_2 = FUNC_2(VAR_0);
 u8 VAR_3 = VAR_2->parent_index;
 int VAR_4 = 0;

 if (VAR_2->reg_sel[VAR_3]) {
  VAR_4 = FUNC_0(VAR_2->reg_sel[VAR_3],
     VAR_2->reg_mask[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_2->reg_sel[VAR_1]) {
  VAR_4 = FUNC_1(VAR_2->reg_sel[VAR_1],
     VAR_2->reg_mask[VAR_1],
     VAR_2->reg_bits[VAR_1]);
  if (VAR_4) {
   if (VAR_2->reg_sel[VAR_3])
    FUNC_1(VAR_2->reg_sel[VAR_3],
      VAR_2->reg_mask[VAR_3],
      VAR_2->reg_bits[VAR_3]);
   return VAR_4;
  }
 }
 VAR_2->parent_index = VAR_1;

 return VAR_4;
}
