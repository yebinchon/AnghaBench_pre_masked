
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct timespec {int dummy; } ;
struct TYPE_5__ {int tv_sec; int tv_usec; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct rusage {int ru_maxrss; int ru_ixrss; int ru_idrss; int ru_isrss; int ru_minflt; int ru_majflt; int ru_nswap; int ru_inblock; int ru_oublock; int ru_msgsnd; int ru_msgrcv; int ru_nsignals; int ru_nvcsw; int ru_nivcsw; TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
typedef scalar_t__ pid_t ;
struct TYPE_6__ {int * decimal_point; } ;
typedef int FILE ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 struct timespec VAR_13 ;
 scalar_t__ FUNC_4 (int ,struct timespec*) ;
 int VAR_14 ;
 int FUNC_5 (int,char*,...) ;
 int VAR_15 ;
 int FUNC_6 (char*,char**) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *,char*,int,char*) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,struct rusage*) ;
 int FUNC_14 () ;
 int VAR_16 ;
 int FUNC_15 (int ,int) ;
 TYPE_3__* FUNC_16 () ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,struct rlimit*) ;
 int FUNC_19 (int *,char*,int ,size_t) ;
 int FUNC_20 (int *,struct timespec*,struct timespec*,struct rusage*) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_21 (int,int) ;
 scalar_t__ FUNC_22 (int,int ) ;
 int * VAR_22 ;
 int * VAR_23 ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 (scalar_t__,int*,int ,struct rusage*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*) ;

int
FUNC_27(int VAR_24, char **VAR_25)
{
 int VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30;
 pid_t VAR_31;
 struct rlimit VAR_32;
 struct rusage VAR_33;
 struct timespec VAR_34;
 char *VAR_35 = ((void*)0);
 FILE *VAR_36 = VAR_22;

 (void) FUNC_17(VAR_3, "");
 VAR_14 = FUNC_16()->decimal_point[0];

 VAR_26 = VAR_16 = VAR_28 = VAR_19 = 0;
 while ((VAR_27 = FUNC_11(VAR_24, VAR_25, "ahlo:p")) != -1)
  switch((char)VAR_27) {
  case 'a':
   VAR_26 = 1;
   break;
  case 'h':
   VAR_16 = 1;
   break;
  case 'l':
   VAR_28 = 1;
   break;
  case 'o':
   VAR_35 = VAR_17;
   break;
  case 'p':
   VAR_19 = 1;
   break;
  case '?':
  default:
   FUNC_23();
  }

 if (!(VAR_24 -= VAR_18))
  FUNC_7(0);
 VAR_25 += VAR_18;

 if (VAR_35) {
         if ((VAR_36 = FUNC_8(VAR_35, VAR_26 ? "ae" : "we")) == ((void*)0))
          FUNC_5(1, "%s", VAR_35);
  FUNC_19(VAR_36, (char *)((void*)0), VAR_12, (size_t)0);
 }

 if (FUNC_4(VAR_0, &VAR_13))
  FUNC_5(1, "clock_gettime");
 switch(VAR_31 = FUNC_9()) {
 case -1:
  FUNC_5(1, "time");

 case 0:
  FUNC_6(*VAR_25, VAR_25);
  FUNC_5(VAR_15 == VAR_1 ? 127 : 126, "%s", *VAR_25);

 }

 (void)FUNC_22(VAR_7, VAR_11);
 (void)FUNC_22(VAR_8, VAR_11);
 VAR_21 = 0;
 (void)FUNC_22(VAR_6, VAR_20);
 (void)FUNC_21(VAR_6, 1);
 while (FUNC_24(VAR_31, &VAR_29, 0, &VAR_33) != VAR_31) {
  if (VAR_21) {
   VAR_21 = 0;
   if (FUNC_4(VAR_0, &VAR_34))
    FUNC_5(1, "clock_gettime");
   FUNC_13(VAR_5, &VAR_33);
   FUNC_20(VAR_23, &VAR_13, &VAR_34, &VAR_33);
  }
 }
 if (FUNC_4(VAR_0, &VAR_34))
  FUNC_5(1, "clock_gettime");
 if ( ! FUNC_1(VAR_29))
  FUNC_26("command terminated abnormally");
 VAR_30 = FUNC_2(VAR_29) ? FUNC_3(VAR_29) : 0;
 FUNC_20(VAR_36, &VAR_13, &VAR_34, &VAR_33);
 if (VAR_28) {
  int VAR_37 = FUNC_14();
  u_long VAR_38;

  VAR_38 = VAR_37 * (VAR_33.ru_utime.tv_sec + VAR_33.ru_stime.tv_sec) +
       VAR_37 * (VAR_33.ru_utime.tv_usec + VAR_33.ru_stime.tv_usec) / 1000000;





  if (VAR_38 == 0)
   VAR_38 = 1;

  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_maxrss, "maximum resident set size");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_ixrss / VAR_38, "average shared memory size");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_idrss / VAR_38, "average unshared data size");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_isrss / VAR_38, "average unshared stack size");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_minflt, "page reclaims");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_majflt, "page faults");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_nswap, "swaps");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_inblock, "block input operations");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_oublock, "block output operations");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_msgsnd, "messages sent");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_msgrcv, "messages received");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_nsignals, "signals received");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_nvcsw, "voluntary context switches");
  FUNC_10(VAR_36, "%10ld  %s\n",
   VAR_33.ru_nivcsw, "involuntary context switches");
 }





 if (VAR_30) {
  if (FUNC_22(VAR_30, VAR_9) == VAR_10)
   FUNC_25("signal");
  else {
   VAR_32.rlim_max = VAR_32.rlim_cur = 0;
   if (FUNC_18(VAR_4, &VAR_32) == -1)
    FUNC_25("setrlimit");
   FUNC_15(FUNC_12(), VAR_30);
  }
 }
 FUNC_7 (FUNC_1(VAR_29) ? FUNC_0(VAR_29) : VAR_2);
}
