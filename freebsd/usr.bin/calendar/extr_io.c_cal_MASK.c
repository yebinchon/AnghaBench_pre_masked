
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char** VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;

void
FUNC_7(void)
{
 FILE *VAR_2;
 FILE *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_1[VAR_4] = (char *)FUNC_1(1, 20);


 if ((VAR_2 = FUNC_5()) == ((void*)0))
  return;

 if ((VAR_3 = FUNC_6()) == ((void*)0)) {
  FUNC_4(VAR_2);
  return;
 }

 if (FUNC_0(VAR_2, VAR_3))
  return;

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
}
