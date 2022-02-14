
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_div_table {int div; } ;


 int FUNC_0 (struct clk_div_table const*) ;

__attribute__((used)) static int FUNC_1(const struct clk_div_table *VAR_0, int VAR_1)
{
 const struct clk_div_table *VAR_2;
 int VAR_3 = FUNC_0(VAR_0);

 for (VAR_2 = VAR_0; VAR_2->div; VAR_2++) {
  if (VAR_2->div == VAR_1)
   return VAR_2->div;
  else if (VAR_2->div > VAR_1)
   continue;

  if ((VAR_1 - VAR_2->div) < (VAR_1 - VAR_3))
   VAR_3 = VAR_2->div;
 }

 return VAR_3;
}
