
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (char*,int *) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,int *,char*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(void)
{
 struct clk *VAR_1;

 FUNC_4(&VAR_0);


 VAR_1 = FUNC_1("pxa2xx-pcmcia", ((void*)0));
 if (!FUNC_0(VAR_1)) {
  FUNC_3(VAR_1, ((void*)0), "1800");
  FUNC_2(VAR_1);
 }
}
