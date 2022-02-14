
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int,char*) ;
 struct clk* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int VAR_0 ;

void FUNC_5(void)
{
 struct clk *VAR_1;

 VAR_1 = FUNC_2(((void*)0), "sys_ck");
 if (FUNC_0(VAR_1)) {
  FUNC_1(1, "could not locate sys_ck\n");
 } else {
  VAR_0 = FUNC_3(VAR_1);
  FUNC_4(VAR_1);
 }
}
