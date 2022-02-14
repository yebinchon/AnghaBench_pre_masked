
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;

int
FUNC_5(void)
{
 char VAR_1[32];

 FUNC_2("\nEnter integer value>");

 if (FUNC_1(VAR_1, sizeof(VAR_1), VAR_0) == ((void*)0))
  FUNC_0(1, "Cannot read input");

 if (FUNC_3(VAR_1, "x\n") == 0)
  return (-1);
 if (FUNC_3(VAR_1, "r\n") == 0)
  return (-2);

 return ((int)FUNC_4(VAR_1, 0, 0));
}
