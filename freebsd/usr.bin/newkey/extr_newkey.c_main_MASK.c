
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; } ;
struct hostent {char* h_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 () ;
 struct hostent* FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 struct passwd* FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,int,char*) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (int) ;

int
FUNC_21(int VAR_4, char *VAR_5[])
{
 char VAR_6[VAR_2 + 1];
 char VAR_7[VAR_0 + 1];
 char VAR_8[VAR_0 + 1];
 char VAR_9[VAR_0 + VAR_1 + 1];
 char VAR_10[VAR_0 + VAR_1 + 1];
 int VAR_11;
 char *VAR_12;
 struct passwd *VAR_13;




 if (VAR_4 != 3 || !(FUNC_14(VAR_5[1], "-u") == 0 ||
  FUNC_14(VAR_5[1], "-h") == 0)) {
  FUNC_15();
 }
 if (FUNC_5() != 0)
  FUNC_2(1, "must be superuser");





 if (FUNC_14(VAR_5[1], "-u") == 0) {
  VAR_13 = FUNC_8(VAR_5[2]);
  if (VAR_13 == ((void*)0))
   FUNC_2(1, "unknown user: %s", VAR_5[2]);
  (void)FUNC_16(VAR_6, (int)VAR_13->pw_uid, (char *)((void*)0));
 } else {






  (void)FUNC_9(VAR_6, VAR_5[2], (char *)((void*)0));

 }

 (void)FUNC_12("Adding new key for %s.\n", VAR_6);
 VAR_12 = FUNC_7("New password:");
 FUNC_4(VAR_7, VAR_8, VAR_12);

 FUNC_11(VAR_9, VAR_8, VAR_0);
 FUNC_11(VAR_9 + VAR_0, VAR_8, VAR_1);
 VAR_9[VAR_0 + VAR_1] = 0;
 FUNC_19(VAR_9, VAR_12);

 FUNC_11(VAR_10, VAR_9, VAR_0 + VAR_1 + 1);
 FUNC_18(VAR_10, FUNC_7("Retype password:"));
 if (FUNC_10(VAR_10, VAR_10 + VAR_0, VAR_1) != 0 ||
  FUNC_10(VAR_10, VAR_8, VAR_0) != 0)
  FUNC_2(1, "password incorrect");




 if ((VAR_11 = FUNC_13(VAR_6, VAR_7, VAR_9))) {




  FUNC_2(1, "unable to update publickey database (%u): %s",
   VAR_11, FUNC_1(VAR_11));

 }
 (void)FUNC_12("Your new key has been successfully stored away.\n");
 FUNC_3(0);

}
