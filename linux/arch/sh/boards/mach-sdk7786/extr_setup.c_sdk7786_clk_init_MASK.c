
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct clk*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct clk *VAR_4;
 int VAR_5;





 if (FUNC_8(VAR_1))
  return -VAR_0;

 VAR_4 = FUNC_2(((void*)0), "extal");
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_5 = FUNC_5(VAR_4, 33333333);
 FUNC_3(VAR_4);




 VAR_5 = FUNC_4(&VAR_3);
 if (FUNC_9(VAR_5)) {
  FUNC_7("FPGA clock registration failed\n");
  return VAR_5;
 }

 FUNC_6(&VAR_2);

 return 0;
}
