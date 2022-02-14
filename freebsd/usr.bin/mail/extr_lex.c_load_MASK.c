
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(char *VAR_3)
{
 FILE *VAR_4, *VAR_5;

 if ((VAR_4 = FUNC_1(VAR_3, "r")) == ((void*)0))
  return;
 VAR_5 = VAR_0;
 VAR_0 = VAR_4;
 VAR_1 = 1;
 VAR_2 = 1;
 FUNC_2();
 VAR_1 = 0;
 VAR_2 = 0;
 VAR_0 = VAR_5;
 (void)FUNC_0(VAR_4);
}
