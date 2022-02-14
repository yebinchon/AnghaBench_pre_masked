
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(void)
{
 int VAR_2;
 FILE *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, "r")) == ((void*)0)) {
  FUNC_4("%s", VAR_1);
  return (1);
 }
 while ((VAR_2 = FUNC_2(VAR_3)) != VAR_0)
  FUNC_3(VAR_2);
 (void)FUNC_0(VAR_3);
 return (0);
}
