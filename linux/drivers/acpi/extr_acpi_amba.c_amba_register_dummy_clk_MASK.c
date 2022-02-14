
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (struct clk*,char*,int *) ;
 struct clk* FUNC_1 (int *,char*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 static struct clk *VAR_0;


 if (VAR_0)
  return;

 VAR_0 = FUNC_1(((void*)0), "apb_pclk", ((void*)0), 0, 0);
 FUNC_0(VAR_0, "apb_pclk", ((void*)0));
}
