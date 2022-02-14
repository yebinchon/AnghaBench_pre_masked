
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (struct clk_div_table const*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(const struct clk_div_table *VAR_2, u8 VAR_3,
    unsigned long VAR_4)
{
 if (VAR_4 & VAR_0)
  return FUNC_1(VAR_3);
 if (VAR_4 & VAR_1)
  return 1 << FUNC_1(VAR_3);
 if (VAR_2)
  return FUNC_0(VAR_2, VAR_3);
 return FUNC_1(VAR_3) + 1;
}
