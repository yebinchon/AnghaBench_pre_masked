
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_factor_table {int div; unsigned int val; unsigned int mul; } ;



__attribute__((used)) static int FUNC_0(const struct clk_factor_table *VAR_0,
   unsigned int VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 const struct clk_factor_table *VAR_4;

 for (VAR_4 = VAR_0; VAR_4->div; VAR_4++) {
  if (VAR_4->val == VAR_1) {
   *VAR_2 = VAR_4->mul;
   *VAR_3 = VAR_4->div;
   return 1;
  }
 }

 return 0;
}
