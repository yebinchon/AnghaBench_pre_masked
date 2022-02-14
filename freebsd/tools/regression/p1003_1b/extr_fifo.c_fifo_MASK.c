
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct timespec {int tv_nsec; } ;
struct sched_param {int sched_priority; } ;
struct TYPE_2__ {int tv_usec; int tv_sec; } ;
struct itimerval {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 long volatile VAR_9 ;
 int FUNC_1 (int,char*) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 long FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 long FUNC_5 () ;
 int FUNC_6 (struct timeval*,int ) ;
 scalar_t__ FUNC_7 (int ,int,int,int,int,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct timespec*) ;
 int FUNC_10 (long volatile,int ,struct sched_param*) ;
 int FUNC_11 (int ,struct itimerval*,int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 double FUNC_13 (struct timeval*,struct timeval*) ;

int FUNC_14(int VAR_15, char *VAR_16[])
{
 int VAR_17 = 0;
 volatile long *VAR_18, VAR_19;
 int VAR_20;
 struct sched_param VAR_21;
 struct timespec VAR_22;

 struct timeval VAR_23[32];
 if (FUNC_9(0, &VAR_22) == -1) {
  FUNC_8("sched_rr_get_interval");
  FUNC_2(VAR_10);
 }





 VAR_21.sched_priority = 1;

 VAR_18 = (long *)FUNC_7(0, sizeof(*VAR_18),
 VAR_4|VAR_5, VAR_1|VAR_2, -1, 0);

 if (VAR_18 == (long *)-1)
  FUNC_1(VAR_10, "mmap");

 *VAR_18 = 0;

 if (FUNC_10(0, VAR_6, &VAR_21) == -1)
 {
  FUNC_8("sched_setscheduler");
  return -1;
 }

 VAR_19 = FUNC_5();

 if ((VAR_9 = FUNC_3()) == 0)
 {




  VAR_19 = FUNC_5();
  while (1)
   *VAR_18 = VAR_19;
 }
 else
 {
  FUNC_0(VAR_14);
  *VAR_18 = VAR_19;


  VAR_13 = 0;
  FUNC_6(VAR_23, 0);
  VAR_20 = 1;
  while (!VAR_13 && VAR_20 < 32)
   if (*VAR_18 == VAR_9) {
    FUNC_6(VAR_23 + VAR_20, 0);
    *VAR_18 = 0;
    VAR_17 = -1;
    VAR_20++;
   }

  if (VAR_17) {
   int VAR_24;

   FUNC_4(VAR_11,
   "SCHED_FIFO had erroneous context switches:\n");
   for (VAR_24 = 1; VAR_24 < VAR_20; VAR_24++) {
    FUNC_4(VAR_11, "%d %g\n", VAR_24,
     FUNC_13(VAR_23 + VAR_24, VAR_23 + VAR_24 - 1));
   }
   return VAR_17;
  }




  if (FUNC_10(VAR_9, VAR_7, &VAR_21) == -1 ||
  FUNC_10(0, VAR_7, &VAR_21) == -1)
  {
   FUNC_8("sched_setscheduler");
   return -1;
  }

  VAR_17 = -1;

  VAR_13 = 0;
  for (VAR_20 = 0; !VAR_13; VAR_20++)
   if (*VAR_18 == VAR_9) {
    VAR_17 = 0;
    break;
   }

  if (VAR_17)
   FUNC_4(VAR_11,"Child never ran when it should have.\n");
 }

 FUNC_2(VAR_17);
}
