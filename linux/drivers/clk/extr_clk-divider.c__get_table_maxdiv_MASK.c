
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_div_table {int div; unsigned int val; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct clk_div_table *VAR_0,
          u8 VAR_1)
{
 unsigned int VAR_2 = 0, VAR_3 = FUNC_0(VAR_1);
 const struct clk_div_table *VAR_4;

 for (VAR_4 = VAR_0; VAR_4->div; VAR_4++)
  if (VAR_4->div > VAR_2 && VAR_4->val <= VAR_3)
   VAR_2 = VAR_4->div;
 return VAR_2;
}
