
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rpm {scalar_t__ active_only; } ;



__attribute__((used)) static void FUNC_0(struct clk_rpm *VAR_0, unsigned long VAR_1,
       unsigned long *VAR_2, unsigned long *VAR_3)
{
 *VAR_2 = VAR_1;





 if (VAR_0->active_only)
  *VAR_3 = 0;
 else
  *VAR_3 = *VAR_2;
}
