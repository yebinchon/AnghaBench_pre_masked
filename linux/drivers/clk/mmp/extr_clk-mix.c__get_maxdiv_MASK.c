
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width_div; } ;
struct mmp_clk_mix {int div_flags; struct clk_div_table* div_table; TYPE_1__ reg_info; } ;
struct clk_div_table {int div; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct mmp_clk_mix *VAR_2)
{
 unsigned int VAR_3 = (1 << VAR_2->reg_info.width_div) - 1;
 unsigned int VAR_4 = 0;
 struct clk_div_table *VAR_5;

 if (VAR_2->div_flags & VAR_0)
  return VAR_3;
 if (VAR_2->div_flags & VAR_1)
  return 1 << VAR_3;
 if (VAR_2->div_table) {
  for (VAR_5 = VAR_2->div_table; VAR_5->div; VAR_5++)
   if (VAR_5->div > VAR_4)
    VAR_4 = VAR_5->div;
  return VAR_4;
 }
 return VAR_3 + 1;
}
