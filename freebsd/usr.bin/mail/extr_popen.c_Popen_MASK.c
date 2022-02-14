
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef scalar_t__ pid_t ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int * FUNC_2 (int,char const*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int *,int,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,int,int,char*,char*,int *) ;
 int FUNC_7 (char*) ;

FILE *
FUNC_8(char *VAR_3, const char *VAR_4)
{
 int VAR_5[2];
 int VAR_6, VAR_7, VAR_8, VAR_9;
 pid_t VAR_10;
 sigset_t VAR_11;
 FILE *VAR_12;

 if (FUNC_3(VAR_5) < 0)
  return (((void*)0));
 (void)FUNC_1(VAR_5[VAR_1], VAR_0, 1);
 (void)FUNC_1(VAR_5[VAR_2], VAR_0, 1);
 if (*VAR_4 == 'r') {
  VAR_6 = VAR_5[VAR_1];
  VAR_7 = VAR_8 = VAR_9 = VAR_5[VAR_2];
 } else {
  VAR_6 = VAR_5[VAR_2];
  VAR_7 = VAR_8 = VAR_5[VAR_1];
  VAR_9 = -1;
 }
 (void)FUNC_5(&VAR_11);
 VAR_10 = FUNC_6(FUNC_7("SHELL"), &VAR_11, VAR_8, VAR_9, "-c", VAR_3, ((void*)0));
 if (VAR_10 < 0) {
  (void)FUNC_0(VAR_5[VAR_1]);
  (void)FUNC_0(VAR_5[VAR_2]);
  return (((void*)0));
 }
 (void)FUNC_0(VAR_7);
 if ((VAR_12 = FUNC_2(VAR_6, VAR_4)) != ((void*)0))
  FUNC_4(VAR_12, 1, VAR_10);
 return (VAR_12);
}
