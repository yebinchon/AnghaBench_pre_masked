
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int outfd; int dosyslog; int logpri; int noclose; int sa_mask; int sa_handler; } ;
struct pidfh {int dummy; } ;
struct log_params {int outfd; int dosyslog; int logpri; int noclose; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef int logpar ;
typedef int act_term ;
typedef int act_chld ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (int) ;
 int VAR_17 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int,char**,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int,struct sigaction*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (struct sigaction*,int ,int) ;
 int FUNC_15 (char const*,int,int) ;
 int FUNC_16 (char const*,char const*,struct pidfh**,struct pidfh**) ;
 int FUNC_17 (char const*,int,int) ;
 char* VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_18 (struct pidfh*) ;
 int FUNC_19 (struct pidfh*) ;
 scalar_t__ FUNC_20 (int*) ;
 int VAR_23 ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (char*,char const*,int) ;
 int FUNC_23 (int ,struct sigaction*,int *) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ,int *,int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*,char**,int) ;
 scalar_t__ VAR_24 ;
 int FUNC_29 () ;
 int FUNC_30 (char*) ;

int
FUNC_31(int VAR_25, char *VAR_26[])
{
 const char *VAR_27, *VAR_28, *VAR_29, *VAR_30, *VAR_31, *VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
 sigset_t VAR_39, VAR_40, VAR_41, VAR_42;
 struct log_params VAR_43;
 int VAR_44[2] = { -1, -1 }, VAR_45 = -1;
 int VAR_46, VAR_47, VAR_48;
 struct pidfh *VAR_49, *VAR_50;
 char *VAR_51;

 FUNC_14(&VAR_43, 0, sizeof(VAR_43));
 VAR_46 = VAR_15 | VAR_14;
 VAR_28 = VAR_27 = VAR_30 = ((void*)0);
 VAR_34 = VAR_35 = 1;
 VAR_47 = VAR_2;
 VAR_48 = VAR_0;
 VAR_32 = "daemon";
 VAR_36 = 0;
 VAR_37 = 0;
 VAR_31 = ((void*)0);
 VAR_29 = ((void*)0);
 while ((VAR_33 = FUNC_11(VAR_25, VAR_26, "cfSp:P:ru:o:s:l:t:l:m:R:T:")) != -1) {
  switch (VAR_33) {
  case 'c':
   VAR_34 = 0;
   break;
  case 'f':
   VAR_35 = 0;
   break;
  case 'l':
   VAR_48 = FUNC_10(VAR_20, VAR_17);
   if (VAR_48 == -1)
    FUNC_6(5, "unrecognized syslog facility");
   VAR_37 = 1;
   break;
  case 'm':
   VAR_46 = FUNC_28(VAR_20, &VAR_51, 10);
   if (VAR_51 == VAR_20 || VAR_46 < 0 || VAR_46 > 3)
    FUNC_6(6, "unrecognized listening mask");
   break;
  case 'o':
   VAR_31 = VAR_20;
   break;
  case 'p':
   VAR_27 = VAR_20;
   break;
  case 'P':
   VAR_28 = VAR_20;
   break;
  case 'r':
   VAR_36 = 1;
   break;
  case 'R':
   VAR_36 = FUNC_28(VAR_20, &VAR_51, 0);
   if (VAR_51 == VAR_20 || VAR_36 < 1)
    FUNC_6(6, "invalid restart delay");
   break;
  case 's':
   VAR_47 = FUNC_10(VAR_20, VAR_23);
   if (VAR_47 == -1)
    FUNC_6(4, "unrecognized syslog priority");
   VAR_37 = 1;
   break;
  case 'S':
   VAR_37 = 1;
   break;
  case 't':
   VAR_29 = VAR_20;
   break;
  case 'T':
   VAR_32 = VAR_20;
   VAR_37 = 1;
   break;
  case 'u':
   VAR_30 = VAR_20;
   break;
  default:
   FUNC_29();
  }
 }
 VAR_25 -= VAR_21;
 VAR_26 += VAR_21;

 if (VAR_25 == 0)
  FUNC_29();

 if (!VAR_29)
  VAR_29 = VAR_26[0];

 if (VAR_31) {
  VAR_45 = FUNC_15(VAR_31, VAR_7 | VAR_8 | VAR_5 | VAR_6, 0600);
  if (VAR_45 == -1)
   FUNC_5(7, "open");
 }

 if (VAR_37)
  FUNC_17(VAR_32, VAR_3 | VAR_1, VAR_48);

 VAR_49 = VAR_50 = ((void*)0);




 FUNC_16(VAR_27, VAR_28, &VAR_50, &VAR_49);
 if (FUNC_2(VAR_34, VAR_35) == -1) {
  FUNC_30("daemon");
  goto exit;
 }

 FUNC_19(VAR_49);
 VAR_22 = -1;
 if (VAR_27 || VAR_28 || VAR_36 || VAR_45 != -1 || VAR_37) {
  struct sigaction VAR_52, VAR_53;


  FUNC_14(&VAR_52, 0, sizeof(VAR_52));
  VAR_52.sa_handler = VAR_19;
  FUNC_25(&VAR_52.sa_mask);
  FUNC_24(&VAR_52.sa_mask, VAR_9);

  FUNC_14(&VAR_53, 0, sizeof(VAR_53));
  VAR_53.sa_handler = VAR_18;
  FUNC_25(&VAR_53.sa_mask);
  FUNC_24(&VAR_53.sa_mask, VAR_10);


  FUNC_25(&VAR_39);
  FUNC_24(&VAR_39, VAR_10);
  FUNC_24(&VAR_39, VAR_9);

  FUNC_25(&VAR_42);
  FUNC_24(&VAR_42, VAR_10);





  FUNC_25(&VAR_41);
  FUNC_24(&VAR_41, VAR_9);

  if (FUNC_26(VAR_11, &VAR_42, &VAR_40)) {
   FUNC_30("sigprocmask");
   goto exit;
  }
  if (FUNC_23(VAR_10, &VAR_52, ((void*)0)) == -1) {
   FUNC_30("sigaction");
   goto exit;
  }
  if (FUNC_23(VAR_9, &VAR_53, ((void*)0)) == -1) {
   FUNC_30("sigaction");
   goto exit;
  }





  (void)FUNC_13(((void*)0), 0, VAR_4);
  VAR_43.outfd = VAR_45;
  VAR_43.dosyslog = VAR_37;
  VAR_43.logpri = VAR_47;
  VAR_43.noclose = VAR_35;
restart:
  if (FUNC_20(VAR_44))
   FUNC_5(1, "pipe");



  VAR_16 = 0;
  VAR_22 = FUNC_9();
  if (VAR_22 == -1) {
   FUNC_30("fork");
   goto exit;
  } else if (VAR_22 > 0) {




   if (FUNC_26(VAR_13, &VAR_42, ((void*)0))) {
    FUNC_30("sigprocmask");
    goto exit;
   }
   FUNC_0(VAR_44[1]);
   VAR_44[1] = -1;
  }
 }
 if (VAR_22 <= 0) {

  FUNC_19(VAR_50);

  if (VAR_30 != ((void*)0))
   FUNC_21(VAR_30);




  if (VAR_22 == 0) {
   FUNC_0(VAR_44[0]);
   if (FUNC_26(VAR_12, &VAR_40, ((void*)0)))
    FUNC_5(1, "sigprogmask");
   if (VAR_46 & VAR_14) {
    if (FUNC_4(VAR_44[1], VAR_14) == -1)
     FUNC_5(1, "dup2");
   }
   if (VAR_46 & VAR_15) {
    if (FUNC_4(VAR_44[1], VAR_15) == -1)
     FUNC_5(1, "dup2");
   }
   if (VAR_44[1] != VAR_14 &&
       VAR_44[1] != VAR_15)
    FUNC_0(VAR_44[1]);
  }
  FUNC_7(VAR_26[0], VAR_26);




  FUNC_5(1, "%s", VAR_26[0]);
 }
 FUNC_22("%s[%d]", VAR_29, (int)VAR_22);






 VAR_38 = 0;
 for (;;) {
  if (VAR_16 && VAR_38) {
   break;
  } else if (VAR_24) {
   goto exit;
  } else if (!VAR_38) {
   if (FUNC_26(VAR_11, &VAR_41, ((void*)0))) {
    FUNC_30("sigprocmask");
    goto exit;
   }
   VAR_38 = !FUNC_12(VAR_44[0], &VAR_43);
   if (FUNC_26(VAR_13, &VAR_41, ((void*)0))) {
    FUNC_30("sigprocmask");
    goto exit;
   }
  } else {
   if (FUNC_26(VAR_11, &VAR_39, ((void*)0))) {
    FUNC_30("sigprocmask");
     goto exit;
   }
   while (!VAR_24 && !VAR_16)
    FUNC_27(&VAR_40);
   if (FUNC_26(VAR_13, &VAR_39, ((void*)0))) {
    FUNC_30("sigprocmask");
    goto exit;
   }
  }
 }
 if (VAR_36 && !VAR_24)
  FUNC_3(VAR_36, 0);
 if (FUNC_26(VAR_11, &VAR_42, ((void*)0))) {
  FUNC_30("sigprocmask");
  goto exit;
 }
 if (VAR_36 && !VAR_24) {
  FUNC_0(VAR_44[0]);
  VAR_44[0] = -1;
  goto restart;
 }
exit:
 FUNC_0(VAR_45);
 FUNC_0(VAR_44[0]);
 FUNC_0(VAR_44[1]);
 if (VAR_37)
  FUNC_1();
 FUNC_18(VAR_50);
 FUNC_18(VAR_49);
 FUNC_8(1);
}
