
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;



__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;

 return (VAR_1 >= VAR_3 * 22) ? VAR_3 * 22 :
         VAR_3 * 20;
}
