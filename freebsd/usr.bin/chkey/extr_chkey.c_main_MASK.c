
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {int pw_passwd; } ;
typedef int newline ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,int ) ;
 int VAR_8 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int,char**,char*) ;
 char* FUNC_6 (char*) ;
 struct passwd* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,int *,int *) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int ,int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,char*,char*) ;
 scalar_t__ FUNC_16 (char*,int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (char*,scalar_t__,int *) ;
 int FUNC_20 (char*,int ) ;
 scalar_t__ FUNC_21 (int,char*,int) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int ,int ,char**) ;
 int FUNC_26 (int) ;
 struct passwd* FUNC_27 (scalar_t__) ;

int
FUNC_28(int VAR_10, char **VAR_11)
{
 char VAR_12[VAR_2+1];
 char VAR_13[VAR_0 + 1];
 char VAR_14[VAR_0 + 1];
 char VAR_15[VAR_0 + VAR_1 + 1];
 char VAR_16[VAR_0 + VAR_1 + 1];
 int VAR_17;
 char *VAR_18;
 struct passwd *VAR_19;
 uid_t VAR_20;
 int VAR_21 = 0;
 int VAR_22;







 while ((VAR_22 = FUNC_5(VAR_10, VAR_11, "f")) != -1)
  switch(VAR_22) {
  case 'f':
   VAR_21 = 1;
   break;
  default:
   FUNC_18();
  }
 VAR_10 -= VAR_9;
 VAR_11 += VAR_9;

 if (VAR_10 != 0)
  FUNC_18();






 VAR_20 = FUNC_8() ;
 if (VAR_20 == 0) {
  if (FUNC_9(VAR_12, ((void*)0), ((void*)0)) == 0)
   FUNC_2(1, "cannot convert hostname to netname");
 } else {
  if (FUNC_19(VAR_12, VAR_20, ((void*)0)) == 0)
   FUNC_2(1, "cannot convert username to netname");
 }
 (void)FUNC_14("Generating new key for %s.\n", VAR_12);

 if (!VAR_21) {
  if (VAR_20 != 0) {



   VAR_19 = FUNC_7(VAR_20);

   if (VAR_19 == ((void*)0)) {




    FUNC_2(1,
   "no password entry found: can't change key");

   }
  } else {
   VAR_19 = FUNC_7(0);
   if (VAR_19 == ((void*)0))
     FUNC_2(1, "no password entry found: can't change key");
  }
 }
 VAR_18 = FUNC_6("Password:");







 VAR_21 = 1;

 FUNC_4(VAR_13, VAR_14, VAR_18);

 FUNC_12(VAR_15, VAR_14, VAR_0);
 FUNC_12(VAR_15 + VAR_0, VAR_14, VAR_1);
 VAR_15[VAR_0 + VAR_1] = 0;
 FUNC_23(VAR_15, VAR_18);

 if (VAR_21) {
  FUNC_12(VAR_16, VAR_15, VAR_0 + VAR_1 + 1);
  FUNC_22(VAR_16, FUNC_6("Retype password:"));
  if (FUNC_11(VAR_16, VAR_16 + VAR_0, VAR_1) != 0
   || FUNC_11(VAR_16, VAR_14, VAR_0) != 0)
   FUNC_2(1, "password incorrect");
 }




 VAR_17 = FUNC_15(VAR_12, VAR_13, VAR_15);
 if (VAR_17 != 0) {




  FUNC_2(1, "unable to update publickey database");

 }

 if (VAR_20 == 0) {







  int VAR_23;

  VAR_23 = FUNC_13(VAR_7, VAR_5|VAR_4|VAR_3, 0);
  if (VAR_23 < 0) {
   FUNC_20("%s", VAR_7);
  } else {
   char VAR_24 = '\n';

   if (FUNC_21(VAR_23, VAR_14, FUNC_17(VAR_14)) < 0 ||
       FUNC_21(VAR_23, &VAR_24, sizeof(VAR_24)) < 0)
    FUNC_20("%s: write", VAR_7);
  }
  FUNC_0(VAR_23);
 }

 if (FUNC_10(VAR_14) < 0)
  FUNC_2(1, "unable to login with new secret key");
 (void)FUNC_14("Done.\n");
 FUNC_3(0);

}
