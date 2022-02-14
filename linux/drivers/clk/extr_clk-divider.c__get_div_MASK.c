
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int FUNC_0 (struct clk_div_table const*,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(const struct clk_div_table *VAR_3,
        unsigned int VAR_4, unsigned long VAR_5, u8 VAR_6)
{
 if (VAR_5 & VAR_1)
  return VAR_4;
 if (VAR_5 & VAR_2)
  return 1 << VAR_4;
 if (VAR_5 & VAR_0)
  return VAR_4 ? VAR_4 : FUNC_1(VAR_6) + 1;
 if (VAR_3)
  return FUNC_0(VAR_3, VAR_4);
 return VAR_4 + 1;
}
