
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 struct passwd* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,char**) ;

int
FUNC_16(int VAR_9, char **VAR_10)
{
 int VAR_11, VAR_12;
 char *VAR_13[3];
 struct passwd *VAR_14;
 static char VAR_15[] = "finger";

 if (FUNC_4() == 0 || FUNC_2() == 0) {
  VAR_4 = 1;
  if ((VAR_14 = FUNC_3(VAR_1)) && VAR_14->pw_uid > 0) {
   if (FUNC_9(VAR_14->pw_gid) != 0)
    FUNC_0(1, "setgid()");
   if (FUNC_12(VAR_14->pw_uid) != 0)
    FUNC_0(1, "setuid()");
  } else {
   if (FUNC_9(VAR_2) != 0)
    FUNC_0(1, "setgid()");
   if (FUNC_12(VAR_2) != 0)
    FUNC_0(1, "setuid()");
  }
 }

 (void) FUNC_10(VAR_0, "");


 VAR_7 = 1;




 if ((VAR_13[1] = FUNC_1("FINGER"))) {
  VAR_11 = 2;
  VAR_13[0] = VAR_15;
  VAR_13[2] = ((void*)0);
  (void) FUNC_7(VAR_11, VAR_13);
 }

 VAR_12 = FUNC_7(VAR_9, VAR_10);
 VAR_9 -= VAR_12;
 VAR_10 += VAR_12;

 (void)FUNC_14(&VAR_6);
 FUNC_11(1);
 if (!*VAR_10) {





  if (!VAR_5)
   VAR_8 = 1;
  FUNC_6();
  if (VAR_3 == 0)
   (void)FUNC_8("No one logged on.\n");
 } else {
  FUNC_15(VAR_9, VAR_10);





  if (!VAR_8)
   VAR_5 = 1;
 }
 if (VAR_3) {
  if (VAR_5)
   FUNC_5();
  else
   FUNC_13();
 }
 return (0);
}
