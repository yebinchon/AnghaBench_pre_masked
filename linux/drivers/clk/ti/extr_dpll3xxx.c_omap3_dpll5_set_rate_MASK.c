
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_hw*,unsigned long) ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long) ;

int FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 if (VAR_2 == VAR_0 * 8) {
  if (FUNC_0(VAR_1, VAR_3))
   return 0;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
