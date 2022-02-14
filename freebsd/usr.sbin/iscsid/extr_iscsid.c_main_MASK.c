
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
struct iscsi_daemon_request {int dummy; } ;
typedef int request ;
typedef scalar_t__ pid_t ;
typedef int intmax_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int,struct iscsi_daemon_request*,int) ;
 int FUNC_7 (int,int ,struct iscsi_daemon_request*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int,char*,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct iscsi_daemon_request*,int ,int) ;
 int VAR_8 ;
 int FUNC_15 (int ,int ) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (struct pidfh*) ;
 struct pidfh* FUNC_17 (char const*,int,scalar_t__*) ;
 int FUNC_18 (struct pidfh*) ;
 int FUNC_19 (struct pidfh*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (int) ;

int
FUNC_23(int VAR_11, char **VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15, VAR_16, VAR_17 = 30, VAR_18, VAR_19,
     VAR_20 = 60;
 bool VAR_21 = 0;
 struct pidfh *VAR_22;
 pid_t VAR_23, VAR_24;
 const char *VAR_25 = VAR_0;
 struct iscsi_daemon_request VAR_26;

 while ((VAR_13 = FUNC_5(VAR_11, VAR_12, "P:dl:m:t:")) != -1) {
  switch (VAR_13) {
  case 'P':
   VAR_25 = VAR_9;
   break;
  case 'd':
   VAR_21 = 1;
   VAR_14++;
   break;
  case 'l':
   VAR_14 = FUNC_1(VAR_9);
   break;
  case 'm':
   VAR_17 = FUNC_1(VAR_9);
   break;
  case 't':
   VAR_20 = FUNC_1(VAR_9);
   break;
  case '?':
  default:
   FUNC_21();
  }
 }
 VAR_11 -= VAR_10;
 if (VAR_11 != 0)
  FUNC_21();

 FUNC_12(VAR_14);

 VAR_22 = FUNC_17(VAR_25, 0600, &VAR_24);
 if (VAR_22 == ((void*)0)) {
  if (VAR_7 == VAR_1)
   FUNC_11(1, "daemon already running, pid: %jd.",
       (intmax_t)VAR_24);
  FUNC_10(1, "cannot open or create pidfile \"%s\"",
      VAR_25);
 }

 VAR_16 = FUNC_15(VAR_5, VAR_6);
 if (VAR_16 < 0 && VAR_7 == VAR_3) {
  VAR_19 = VAR_7;
  VAR_18 = FUNC_8("iscsi");
  if (VAR_18 != -1)
   VAR_16 = FUNC_15(VAR_5, VAR_6);
  else
   VAR_7 = VAR_19;
 }
 if (VAR_16 < 0)
  FUNC_10(1, "failed to open %s", VAR_5);

 if (VAR_21 == 0) {
  if (FUNC_2(0, 0) == -1) {
   FUNC_13("cannot daemonize");
   FUNC_18(VAR_22);
   FUNC_3(1);
  }
 }

 FUNC_19(VAR_22);

 FUNC_20();

 for (;;) {
  FUNC_9("waiting for request from the kernel");

  FUNC_14(&VAR_26, 0, sizeof(VAR_26));
  VAR_15 = FUNC_7(VAR_16, VAR_4, &VAR_26);
  if (VAR_15 != 0) {
   if (VAR_7 == VAR_2) {
    VAR_8 -= FUNC_22(0);
    FUNC_0(VAR_8 >= 0);
    continue;
   }

   FUNC_10(1, "ISCSIDWAIT");
  }

  if (VAR_21) {
   FUNC_9("not forking due to -d flag; "
       "will exit after servicing a single request");
  } else {
   VAR_8 -= FUNC_22(0);
   FUNC_0(VAR_8 >= 0);

   while (VAR_17 > 0 && VAR_8 >= VAR_17) {
    FUNC_9("maxproc limit of %d child processes hit; "
        "waiting for child process to exit", VAR_17);
    VAR_8 -= FUNC_22(1);
    FUNC_0(VAR_8 >= 0);
   }
   FUNC_9("incoming connection; forking child process #%d",
       VAR_8);
   VAR_8++;

   VAR_23 = FUNC_4();
   if (VAR_23 < 0)
    FUNC_10(1, "fork");
   if (VAR_23 > 0)
    continue;
  }

  FUNC_16(VAR_22);
  FUNC_6(VAR_16, &VAR_26, VAR_20);
 }

 return (0);
}
