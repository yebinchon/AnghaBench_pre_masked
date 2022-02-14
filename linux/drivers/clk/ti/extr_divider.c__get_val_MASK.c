
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct clk_omap_divider {int flags; scalar_t__ table; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct clk_omap_divider *VAR_2, u8 VAR_3)
{
 if (VAR_2->flags & VAR_0)
  return VAR_3;
 if (VAR_2->flags & VAR_1)
  return FUNC_0(VAR_3);
 if (VAR_2->table)
  return FUNC_1(VAR_2->table, VAR_3);
 return VAR_3 - 1;
}
