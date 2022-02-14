
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_div_table {int div; } ;


 int FUNC_0 (int ,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct clk_div_table *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3)
{
 const struct clk_div_table *VAR_4;
 int VAR_5 = VAR_0;
 int VAR_6 = FUNC_0((u64)VAR_2, VAR_3);

 for (VAR_4 = VAR_1; VAR_4->div; VAR_4++) {
  if (VAR_4->div == VAR_6)
   return VAR_4->div;
  else if (VAR_4->div < VAR_6)
   continue;

  if ((VAR_4->div - VAR_6) < (VAR_5 - VAR_6))
   VAR_5 = VAR_4->div;
 }

 return VAR_5;
}
