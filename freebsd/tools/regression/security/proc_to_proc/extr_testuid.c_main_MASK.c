
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

int
FUNC_4(int VAR_1, char *VAR_2[])
{
 int VAR_3;

 FUNC_1(VAR_0, "test capabilities: ");
 FUNC_1(VAR_0, "\n");

 VAR_3 = FUNC_3(1);
 if (VAR_3) {
  FUNC_2("setugid");
  FUNC_1(VAR_0,
      "This test suite requires options REGRESSION\n");
  return (-1);
 }

 FUNC_0();

 return (0);
}
