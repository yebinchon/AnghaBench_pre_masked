
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int mode_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*,int,int,int *) ;
 char* VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(char VAR_2[], FILE *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;
 time_t VAR_7;
 mode_t VAR_8;

 VAR_8 = FUNC_10(077);
 VAR_4 = FUNC_1(VAR_2, "a");
 FUNC_10(VAR_8);

 if (VAR_4 == ((void*)0)) {
  FUNC_11("%s", VAR_2);
  return (-1);
 }
 (void)FUNC_9(&VAR_7);
 FUNC_5(VAR_4, "From %s %s", VAR_1, FUNC_2(&VAR_7));
 while ((VAR_6 = FUNC_6(VAR_5, 1, sizeof(VAR_5), VAR_3)) > 0)
  (void)FUNC_7(VAR_5, 1, VAR_6, VAR_4);
 FUNC_5(VAR_4, "\n");
 (void)FUNC_4(VAR_4);
 if (FUNC_3(VAR_4))
  FUNC_11("%s", VAR_2);
 (void)FUNC_0(VAR_4);
 FUNC_8(VAR_3);
 return (0);
}
