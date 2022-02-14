
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {long tm_gmtoff; } ;
typedef scalar_t__ pid_t ;
typedef int login_cap_t ;
struct TYPE_5__ {int pw_uid; int pw_dir; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 long VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 void* VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int VAR_14 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct tm*,struct tm*) ;
 int FUNC_11 (int,char**,char*) ;
 TYPE_1__* FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__*,struct tm*) ;
 int * FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int * VAR_18 ;
 TYPE_1__* VAR_19 ;
 scalar_t__ FUNC_17 (char*,char*,int) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (scalar_t__,int,int,int,struct tm*,struct tm*) ;
 scalar_t__ FUNC_20 (int *,TYPE_1__*,int ,int ) ;
 int * FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (void*,int *) ;
 int FUNC_24 (void*,int *,int) ;
 int FUNC_25 (scalar_t__*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;

int
FUNC_28(int VAR_20, char *VAR_21[])
{
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 5;

 int VAR_25;
 struct tm VAR_26, VAR_27;

 (void)FUNC_18(VAR_4, "");

 while ((VAR_25 = FUNC_11(VAR_20, VAR_21, "-A:aB:D:dF:f:l:t:U:W:?")) != -1)
  switch (VAR_25) {
  case '-':
  case 'a':
   if (FUNC_13()) {
    VAR_14 = VAR_2;
    FUNC_6(1, ((void*)0));
   }
   VAR_13 = 1;
   break;

  case 'W':
   VAR_24 = -1;


  case 'A':
   VAR_22 = FUNC_1(VAR_16);
   if (VAR_22 < 0)
    FUNC_7(1, "number of days must be positive");
   break;

  case 'B':
   VAR_23 = FUNC_1(VAR_16);
   if (VAR_23 < 0)
    FUNC_7(1, "number of days must be positive");
   break;

  case 'D':
   VAR_1 = VAR_16;
   break;

  case 'd':
   VAR_12 = 1;
   break;

  case 'F':
   VAR_24 = FUNC_1(VAR_16);
   break;

  case 'f':
   VAR_11 = VAR_16;
   break;

  case 'l':
   VAR_3 = FUNC_24(VAR_16, ((void*)0), 10);
   break;

  case 't':
   VAR_15 = FUNC_0(VAR_16);
   break;

  case 'U':
   VAR_10 = FUNC_23(VAR_16, ((void*)0));
   break;

  case '?':
  default:
   FUNC_27();
  }

 VAR_20 -= VAR_17;
 VAR_21 += VAR_17;

 if (VAR_20)
  FUNC_27();


 if (VAR_15 <= 0)
  (void)FUNC_25(&VAR_15);


 {
  if (VAR_10 == VAR_9 &&
      VAR_3 == VAR_6) {

   time_t VAR_28;
   struct tm VAR_29;
   long VAR_30, VAR_31, VAR_32, VAR_33;
   double VAR_34;

   FUNC_25(&VAR_28);
   FUNC_14(&VAR_28, &VAR_29);
   VAR_30 = VAR_29.tm_gmtoff;

   VAR_31 = VAR_30 / VAR_7;
   VAR_30 %= VAR_7;
   VAR_32 = VAR_30 / VAR_8;
   VAR_30 %= VAR_8;
   VAR_33 = VAR_30;


   VAR_34 = VAR_32 + (100.0 * (VAR_33 / 60.0));
   VAR_34 /= 60.0 / 100.0;
   VAR_34 = VAR_31 + VAR_34 / 100;

   VAR_10 = VAR_34;
   VAR_3 = VAR_10 * 15;
  } else if (VAR_10 == VAR_9) {

   VAR_10 = VAR_3 / 15;
  } else if (VAR_3 == VAR_6) {

   VAR_3 = VAR_10 * 15;
  }
 }

 FUNC_19(VAR_15, VAR_23, VAR_22, VAR_24, &VAR_26, &VAR_27);
 FUNC_10(&VAR_26, &VAR_27);





 if (FUNC_17("TZ", "UTC", 1) != 0)
  FUNC_7(1, "setenv: %s", FUNC_22(VAR_14));
 FUNC_26();

 if (VAR_12)
  FUNC_5();

 if (VAR_1 != ((void*)0)) {
  FUNC_4(VAR_1);
  FUNC_8(0);
 }

 if (VAR_13)
  while ((VAR_19 = FUNC_12()) != ((void*)0)) {
   pid_t VAR_35;

   if (FUNC_3(VAR_19->pw_dir) == -1)
    continue;
   VAR_35 = FUNC_9();
   if (VAR_35 < 0)
    FUNC_6(1, "fork");
   if (VAR_35 == 0) {
    login_cap_t *VAR_36;

    VAR_36 = FUNC_15(VAR_19);
    if (FUNC_20(VAR_36, VAR_19, VAR_19->pw_uid,
        VAR_5) != 0)
     FUNC_7(1, "setusercontext");
    FUNC_2();
    FUNC_8(0);
   }
  }
 else {






  FUNC_2();
 }
 FUNC_8(0);
}
