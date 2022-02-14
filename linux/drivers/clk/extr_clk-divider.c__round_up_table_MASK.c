
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_div_table {int div; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct clk_div_table *VAR_1, int VAR_2)
{
 const struct clk_div_table *VAR_3;
 int VAR_4 = VAR_0;

 for (VAR_3 = VAR_1; VAR_3->div; VAR_3++) {
  if (VAR_3->div == VAR_2)
   return VAR_3->div;
  else if (VAR_3->div < VAR_2)
   continue;

  if ((VAR_3->div - VAR_2) < (VAR_4 - VAR_2))
   VAR_4 = VAR_3->div;
 }

 return VAR_4;
}
