
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_mix_clk_table {unsigned long rate; int valid; unsigned long divisor; int parent_index; } ;
struct clk_hw {int dummy; } ;
struct mmp_clk_mix {struct clk_hw hw; } ;


 struct clk_hw* FUNC_0 (struct clk_hw*,int ) ;
 unsigned long FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct mmp_clk_mix *VAR_0,
    struct mmp_clk_mix_clk_table *VAR_1,
    unsigned int VAR_2)
{
 int VAR_3;
 struct mmp_clk_mix_clk_table *VAR_4;
 struct clk_hw *VAR_5, *VAR_6;
 unsigned long VAR_7;

 VAR_6 = &VAR_0->hw;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = &VAR_1[VAR_3];
  VAR_5 = FUNC_0(VAR_6, VAR_4->parent_index);
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 % VAR_4->rate) {
   VAR_4->valid = 0;
  } else {
   VAR_4->divisor = VAR_7 / VAR_4->rate;
   VAR_4->valid = 1;
  }
 }
}
