
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_omap_divider {int flags; scalar_t__ table; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct clk_omap_divider*) ;

__attribute__((used)) static unsigned int FUNC_2(struct clk_omap_divider *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_2);
 if (VAR_2->flags & VAR_1)
  return 1 << FUNC_1(VAR_2);
 if (VAR_2->table)
  return FUNC_0(VAR_2->table);
 return FUNC_1(VAR_2) + 1;
}
