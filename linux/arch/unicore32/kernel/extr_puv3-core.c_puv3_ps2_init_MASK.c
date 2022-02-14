
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(void)
{
 struct clk *VAR_1;

 VAR_1 = FUNC_0(((void*)0), "BUS32_CLK");
 FUNC_2(FUNC_1(VAR_1) / 200000, VAR_0);
}
