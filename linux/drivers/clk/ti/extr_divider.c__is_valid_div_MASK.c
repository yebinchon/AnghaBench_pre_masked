
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_omap_divider {int flags; scalar_t__ table; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct clk_omap_divider *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_1(VAR_2);
 if (VAR_1->table)
  return FUNC_0(VAR_1->table, VAR_2);
 return 1;
}
