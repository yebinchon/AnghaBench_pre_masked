
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 struct clk* FUNC_0 (int *,char*) ;
 unsigned long FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_0, unsigned long VAR_1)
{
 struct clk *VAR_2 = FUNC_0(((void*)0), "bus_clk");
 unsigned long VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 if (VAR_1 > VAR_3)
  return 1;
 if (VAR_1 > 66000000)
  return 1;

 return 0;
}
