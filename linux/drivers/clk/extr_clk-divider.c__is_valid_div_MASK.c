
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct clk_div_table const*,unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(const struct clk_div_table *VAR_1, unsigned int VAR_2,
     unsigned long VAR_3)
{
 if (VAR_3 & VAR_0)
  return FUNC_1(VAR_2);
 if (VAR_1)
  return FUNC_0(VAR_1, VAR_2);
 return 1;
}
