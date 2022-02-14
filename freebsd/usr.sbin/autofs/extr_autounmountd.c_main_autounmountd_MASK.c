
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct pidfh {int dummy; } ;
struct kevent {int dummy; } ;
typedef scalar_t__ pid_t ;
typedef int intmax_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (int,struct kevent*,int,int *,int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct pidfh* FUNC_16 (char const*,int,scalar_t__*) ;
 int FUNC_17 (struct pidfh*) ;
 int FUNC_18 (struct pidfh*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

int
FUNC_21(int VAR_9, char **VAR_10)
{
 struct kevent VAR_11;
 struct pidfh *VAR_12;
 pid_t VAR_13;
 const char *VAR_14 = VAR_0;
 int VAR_15, VAR_16 = 0, VAR_17, VAR_18;
 time_t VAR_19 = 600, VAR_20 = 600, VAR_21, VAR_22;
 bool VAR_23 = 0;

 while ((VAR_15 = FUNC_8(VAR_9, VAR_10, "dr:t:v")) != -1) {
  switch (VAR_15) {
  case 'd':
   VAR_23 = 1;
   VAR_16++;
   break;
  case 'r':
   VAR_20 = FUNC_2(VAR_7);
   break;
  case 't':
   VAR_19 = FUNC_2(VAR_7);
   break;
  case 'v':
   VAR_16++;
   break;
  case '?':
  default:
   FUNC_20();
  }
 }
 VAR_9 -= VAR_8;
 if (VAR_9 != 0)
  FUNC_20();

 if (VAR_20 <= 0)
  FUNC_13(1, "retry time must be greater than zero");
 if (VAR_19 <= 0)
  FUNC_13(1, "expiration time must be greater than zero");

 FUNC_14(VAR_16);

 VAR_12 = FUNC_16(VAR_14, 0600, &VAR_13);
 if (VAR_12 == ((void*)0)) {
  if (VAR_6 == VAR_1) {
   FUNC_13(1, "daemon already running, pid: %jd.",
       (intmax_t)VAR_13);
  }
  FUNC_12(1, "cannot open or create pidfile \"%s\"",
      VAR_14);
 }

 if (VAR_23 == 0) {
  if (FUNC_3(0, 0) == -1) {
   FUNC_15("cannot daemonize");
   FUNC_17(VAR_12);
   FUNC_6(1);
  }
 }

 FUNC_18(VAR_12);

 FUNC_1(&VAR_5);

 VAR_18 = FUNC_10();
 if (VAR_18 < 0)
  FUNC_12(1, "kqueue");

 FUNC_0(&VAR_11, 0, VAR_2, VAR_3 | VAR_4, 0, 0, ((void*)0));
 VAR_17 = FUNC_9(VAR_18, &VAR_11, 1, ((void*)0), 0, ((void*)0));
 if (VAR_17 < 0)
  FUNC_12(1, "kevent");

 for (;;) {
  FUNC_19();
  VAR_21 = FUNC_7(VAR_19);
  if (VAR_21 == -1) {
   VAR_22 = VAR_21;
   FUNC_11("no filesystems to expire");
  } else if (VAR_21 < VAR_19) {
   VAR_22 = FUNC_4(VAR_19, VAR_21);
   FUNC_11("some filesystems expire in %ld  seconds",
       (long)VAR_22);
  } else {
   VAR_22 = VAR_20;
   FUNC_11("some expired filesystems remain mounted, "
       "will retry in %ld  seconds", (long)VAR_22);
  }

  FUNC_5(VAR_18, VAR_22);
 }

 return (0);
}
