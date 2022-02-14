
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct clk *VAR_0;
 int VAR_1;

 VAR_0 = FUNC_2(((void*)0), "extal");
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);
 VAR_1 = FUNC_4(VAR_0, 33333000);
 FUNC_3(VAR_0);

 return VAR_1;
}
