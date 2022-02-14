
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (char*,char**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int,char**,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (int ,struct sigaction*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,char**,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,int*,int ) ;
 int FUNC_20 (char*,char*) ;

int
FUNC_21(int VAR_20, char **VAR_21)
{
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 pid_t VAR_27;

 VAR_24 = VAR_12 = 0;
 VAR_23 = VAR_4;
 VAR_26 = -1;
 while ((VAR_22 = FUNC_12(VAR_20, VAR_21, "sknt:")) != -1) {
  switch (VAR_22) {
  case 'k':
   VAR_12 = 1;
   break;
  case 'n':
   VAR_23 &= ~VAR_4;
   break;
  case 's':
   VAR_24 = 1;
   break;
  case 't':
  {
   char *VAR_28;
   VAR_26 = FUNC_16(VAR_16, &VAR_28, 0);
   if (*VAR_16 == '\0' || *VAR_28 != '\0' || VAR_26 < 0)
    FUNC_8(VAR_3,
        "invalid timeout \"%s\"", VAR_16);
  }
   break;
  default:
   FUNC_17();
  }
 }
 if (VAR_20 - VAR_17 < 2)
  FUNC_17();
 VAR_15 = VAR_21[VAR_17++];
 VAR_20 -= VAR_17;
 VAR_21 += VAR_17;
 if (VAR_26 > 0) {
  struct sigaction VAR_29;

  VAR_29.sa_handler = VAR_19;
  FUNC_14(&VAR_29.sa_mask);
  VAR_29.sa_flags = 0;
  FUNC_13(VAR_6, &VAR_29, ((void*)0));
  FUNC_4(VAR_26);
 }
 VAR_14 = FUNC_3(VAR_15, VAR_23 | VAR_5);
 while (VAR_14 == -1 && !VAR_18 && VAR_26 != 0) {
  if (VAR_12)
   VAR_14 = FUNC_3(VAR_15, VAR_23);
  else {
   FUNC_18(VAR_15);
   VAR_14 = FUNC_3(VAR_15, VAR_23 | VAR_5);
  }
 }
 if (VAR_26 > 0)
  FUNC_4(0);
 if (VAR_14 == -1) {
  if (VAR_24)
   FUNC_10(VAR_2);
  FUNC_8(VAR_2, "%s: already locked", VAR_15);
 }

 if (FUNC_5(VAR_11) == -1)
  FUNC_7(VAR_0, "atexit failed");
 if ((VAR_27 = FUNC_11()) == -1)
  FUNC_7(VAR_0, "cannot fork");
 if (VAR_27 == 0) {
  FUNC_6(VAR_14);
  FUNC_9(VAR_21[0], VAR_21);
  FUNC_20("%s", VAR_21[0]);
  FUNC_2(1);
 }

 FUNC_15(VAR_7, VAR_10);
 FUNC_15(VAR_8, VAR_10);
 FUNC_15(VAR_9, VAR_13);
 if (FUNC_19(VAR_27, &VAR_25, 0) == -1)
  FUNC_7(VAR_0, "waitpid failed");
 return (FUNC_1(VAR_25) ? FUNC_0(VAR_25) : VAR_1);
}
