
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_mix {int div_flags; struct clk_div_table* div_table; } ;
struct clk_div_table {int div; unsigned int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct mmp_clk_mix *VAR_2, unsigned int VAR_3)
{
 struct clk_div_table *VAR_4;

 if (VAR_2->div_flags & VAR_0)
  return VAR_3;
 if (VAR_2->div_flags & VAR_1)
  return FUNC_0(VAR_3);
 if (VAR_2->div_table) {
  for (VAR_4 = VAR_2->div_table; VAR_4->div; VAR_4++)
   if (VAR_4->div == VAR_3)
    return VAR_4->val;
  if (VAR_4->div == 0)
   return 0;
 }

 return VAR_3 - 1;
}
