
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_div_table {int div; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct clk_div_table *VAR_1)
{
 unsigned int VAR_2 = VAR_0;
 const struct clk_div_table *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->div; VAR_3++)
  if (VAR_3->div < VAR_2)
   VAR_2 = VAR_3->div;
 return VAR_2;
}
