
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
struct autofs_daemon_request {int dummy; } ;
typedef int request ;
typedef scalar_t__ pid_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 char* FUNC_2 (char*,char,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (struct autofs_daemon_request*,char*,int) ;
 int FUNC_10 (scalar_t__,int ,struct autofs_daemon_request*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int,char*,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct autofs_daemon_request*,int ,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_19 (int ,int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_20 (struct pidfh*) ;
 struct pidfh* FUNC_21 (char const*,int,scalar_t__*) ;
 int FUNC_22 (struct pidfh*) ;
 int FUNC_23 (struct pidfh*) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 scalar_t__ FUNC_26 (int) ;

int
FUNC_27(int VAR_13, char **VAR_14)
{
 struct pidfh *VAR_15;
 pid_t VAR_16, VAR_17;
 const char *VAR_18 = VAR_2;
 char *VAR_19 = ((void*)0);
 struct autofs_daemon_request VAR_20;
 int VAR_21, VAR_22 = 0, VAR_23, VAR_24 = 30, VAR_25, VAR_26;
 bool VAR_27 = 0, VAR_28 = 0;

 FUNC_4();

 while ((VAR_21 = FUNC_8(VAR_13, VAR_14, "D:Tdim:o:v")) != -1) {
  switch (VAR_21) {
  case 'D':
   FUNC_5(VAR_11);
   break;
  case 'T':




   VAR_22++;
   break;
  case 'd':
   VAR_27 = 1;
   VAR_22++;
   break;
  case 'i':
   VAR_28 = 1;
   break;
  case 'm':
   VAR_24 = FUNC_1(VAR_11);
   break;
  case 'o':
   VAR_19 = FUNC_2(VAR_19, ',', VAR_11);
   break;
  case 'v':
   VAR_22++;
   break;
  case '?':
  default:
   FUNC_25();
  }
 }
 VAR_13 -= VAR_12;
 if (VAR_13 != 0)
  FUNC_25();

 FUNC_16(VAR_22);

 VAR_15 = FUNC_21(VAR_18, 0600, &VAR_17);
 if (VAR_15 == ((void*)0)) {
  if (VAR_9 == VAR_3) {
   FUNC_15(1, "daemon already running, pid: %jd.",
       (intmax_t)VAR_17);
  }
  FUNC_14(1, "cannot open or create pidfile \"%s\"",
      VAR_18);
 }

 VAR_8 = FUNC_19(VAR_1, VAR_7 | VAR_6);
 if (VAR_8 < 0 && VAR_9 == VAR_5) {
  VAR_26 = VAR_9;
  VAR_25 = FUNC_11("autofs");
  if (VAR_25 != -1)
   VAR_8 = FUNC_19(VAR_1, VAR_7 | VAR_6);
  else
   VAR_9 = VAR_26;
 }
 if (VAR_8 < 0)
  FUNC_14(1, "failed to open %s", VAR_1);

 if (VAR_27 == 0) {
  if (FUNC_3(0, 0) == -1) {
   FUNC_17("cannot daemonize");
   FUNC_22(VAR_15);
   FUNC_6(1);
  }
 } else {
  FUNC_12();
 }

 FUNC_23(VAR_15);

 FUNC_24();

 for (;;) {
  FUNC_13("waiting for request from the kernel");

  FUNC_18(&VAR_20, 0, sizeof(VAR_20));
  VAR_23 = FUNC_10(VAR_8, VAR_0, &VAR_20);
  if (VAR_23 != 0) {
   if (VAR_9 == VAR_4) {
    VAR_10 -= FUNC_26(0);
    FUNC_0(VAR_10 >= 0);
    continue;
   }

   FUNC_14(1, "AUTOFSREQUEST");
  }

  if (VAR_27) {
   FUNC_13("not forking due to -d flag; "
       "will exit after servicing a single request");
  } else {
   VAR_10 -= FUNC_26(0);
   FUNC_0(VAR_10 >= 0);

   while (VAR_24 > 0 && VAR_10 >= VAR_24) {
    FUNC_13("maxproc limit of %d child processes hit; "
        "waiting for child process to exit", VAR_24);
    VAR_10 -= FUNC_26(1);
    FUNC_0(VAR_10 >= 0);
   }
   FUNC_13("got request; forking child process #%d",
       VAR_10);
   VAR_10++;

   VAR_16 = FUNC_7();
   if (VAR_16 < 0)
    FUNC_14(1, "fork");
   if (VAR_16 > 0)
    continue;
  }

  FUNC_20(VAR_15);
  FUNC_9(&VAR_20, VAR_19, VAR_28);
 }

 FUNC_20(VAR_15);

 return (0);
}
