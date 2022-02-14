
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static FILE *
FUNC_9(const char *VAR_3, const char *VAR_4, pid_t *VAR_5)
{
 FILE *VAR_6, *VAR_7;
 int VAR_8[2], VAR_9[2];
 char *VAR_10[4];
 pid_t VAR_11;
 char VAR_12[4];
 char VAR_13[1024];
 char VAR_14[4];

 if ((FUNC_7(VAR_4, "r") != 0) &&
     (FUNC_7(VAR_4, "w") != 0)) {
  VAR_2 = VAR_0;
  return(((void*)0));
 }
 if (FUNC_6(VAR_8) < 0)
  return (((void*)0));

 if (FUNC_6(VAR_9) < 0) {
  (void)FUNC_0(VAR_8[0]);
  (void)FUNC_0(VAR_8[1]);
  return (((void*)0));
 }
 FUNC_8(VAR_12, "sh");
 FUNC_8(VAR_14, "-c");
 FUNC_8(VAR_13, VAR_3);
 VAR_10[0] = VAR_12;
 VAR_10[1] = VAR_14;
 VAR_10[2] = VAR_13;
 VAR_10[3] = ((void*)0);

 switch (VAR_11 = FUNC_5()) {
 case -1:
  (void)FUNC_0(VAR_8[0]);
  (void)FUNC_0(VAR_8[1]);
  (void)FUNC_0(VAR_9[0]);
  (void)FUNC_0(VAR_9[1]);
  return (((void*)0));

 case 0:

  (void)FUNC_0(VAR_8[1]);
  (void)FUNC_0(VAR_9[0]);

  FUNC_0(0);
  (void)FUNC_1(VAR_8[0]);
  (void)FUNC_0(VAR_8[0]);

  FUNC_0(1);
  (void)FUNC_1(VAR_9[1]);

  FUNC_0(2);
  (void)FUNC_1(VAR_9[1]);
  (void)FUNC_0(VAR_9[1]);

  FUNC_2("/bin/sh", VAR_10, VAR_1);
  FUNC_3(127);

 }


 *VAR_5 = VAR_11;
 if (FUNC_7(VAR_4, "r") != 0) {
  VAR_6 = FUNC_4(VAR_8[1], "w");
  (void)FUNC_0(VAR_8[0]);
  (void)FUNC_0(VAR_9[0]);
  (void)FUNC_0(VAR_9[1]);
  return(VAR_6);
  } else {

  VAR_7 = FUNC_4(VAR_9[0], "r");
  (void)FUNC_0(VAR_9[1]);
  (void)FUNC_0(VAR_8[0]);
  (void)FUNC_0(VAR_8[1]);
  return (VAR_7);
 }
}
