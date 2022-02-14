
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long *VAR_2)
{
 *VAR_2 = FUNC_2(FUNC_1(VAR_0), VAR_1 * 2);
 return FUNC_0(*VAR_2, 2);
}
