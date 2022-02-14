
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int u_int ;
typedef int u_char ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {long tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int ,struct timespec*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int,int *,int,int ) ;
 scalar_t__ FUNC_6 (int ,struct itimerval*,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(int VAR_6, long VAR_7, u_char *VAR_8, u_int VAR_9)
{
 struct timespec VAR_10, VAR_11;
 struct itimerval VAR_12;
 u_int32_t VAR_13;
 int VAR_14, VAR_15;

 if (FUNC_7(VAR_2, VAR_5) == VAR_3) {
  FUNC_3("signal");
  return (-1);
 }

 if (FUNC_1(VAR_0, &VAR_11) == -1) {
  FUNC_3("clock_getres");
  return (-1);
 }

 if (FUNC_2(VAR_0, &VAR_10) == -1) {
  FUNC_3("clock_gettime");
  return (-1);
 }

 VAR_12.it_interval.tv_sec = 0;
 VAR_12.it_interval.tv_usec = 0;
 VAR_12.it_value.tv_sec = VAR_7;
 VAR_12.it_value.tv_usec = 0;

 if (FUNC_6(VAR_1, &VAR_12, ((void*)0)) < 0) {
  FUNC_3("setitimer");
  return (-1);
 }

 VAR_14 = VAR_15 = 0;
 VAR_13 = 0;
 while (VAR_4 == 0) {
  if (VAR_9 >= 4) {
   FUNC_0(VAR_8, VAR_13);
   VAR_13++;
  }
  if (FUNC_5(VAR_6, VAR_8, VAR_9, 0) < 0)
   VAR_14++;
  VAR_15++;
 }

 if (FUNC_2(VAR_0, &VAR_11) == -1) {
  FUNC_3("clock_gettime");
  return (-1);
 }

 FUNC_4("\n");
 FUNC_4("start:             %zd.%09lu\n", VAR_10.tv_sec,
     VAR_10.tv_nsec);
 FUNC_4("finish:            %zd.%09lu\n", VAR_11.tv_sec,
     VAR_11.tv_nsec);
 FUNC_4("send calls:        %d\n", VAR_15);
 FUNC_4("send errors:       %d\n", VAR_14);
 FUNC_4("approx send rate:  %ld\n", (VAR_15 - VAR_14) /
     VAR_7);
 FUNC_4("approx error rate: %d\n", (VAR_14 / VAR_15));

 return (0);
}
