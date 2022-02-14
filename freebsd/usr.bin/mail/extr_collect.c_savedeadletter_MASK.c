
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 () ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

void
FUNC_8(FILE *VAR_1)
{
 FILE *VAR_2;
 int VAR_3;
 char *VAR_4;

 if (FUNC_2(VAR_1) == 0)
  return;
 VAR_4 = FUNC_4();
 VAR_3 = FUNC_7(077);
 VAR_2 = FUNC_1(VAR_4, "a");
 (void)FUNC_7(VAR_3);
 if (VAR_2 == ((void*)0))
  return;
 while ((VAR_3 = FUNC_3(VAR_1)) != VAR_0)
  (void)FUNC_5(VAR_3, VAR_2);
 (void)FUNC_0(VAR_2);
 FUNC_6(VAR_1);
}
