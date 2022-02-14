
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned int FUNC_0 (struct clk_div_table const*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct clk_div_table *VAR_1,
        unsigned int VAR_2, unsigned long VAR_3, u8 VAR_4)
{
 if (VAR_3 & VAR_0)
  return VAR_2;
 if (VAR_1)
  return FUNC_0(VAR_1, VAR_2);
 return VAR_2 + 1;
}
