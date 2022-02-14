
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long uint64_t ;
typedef scalar_t__ u_int32_t ;
typedef int u_int ;
struct timespec {long tv_nsec; int tv_sec; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sin_port; } ;
struct _a {long duration; int port; int port_max; int packet_len; TYPE_1__ sin; int packet; int s; int sin6; scalar_t__ ipv6; struct timespec interval; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int ,struct timespec*) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int ,int,int ,struct sockaddr*,int) ;
 int VAR_1 ;
 int FUNC_10 (struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_11 (struct timespec*,struct timespec*) ;
 int FUNC_12 (struct timespec,struct timespec*,long long*) ;

__attribute__((used)) static int
FUNC_13(struct _a *VAR_2)
{
 struct timespec VAR_3, VAR_4, VAR_5;
 long long VAR_6;
 u_int32_t VAR_7;
 long VAR_8;
 long VAR_9, VAR_10;

 long VAR_11 = 200000;
 int VAR_12, VAR_13;
 int VAR_14;
 uint64_t VAR_15, VAR_16;

 if (FUNC_1(VAR_0, &VAR_5) == -1) {
  FUNC_6("clock_getres");
  return (-1);
 }

 VAR_16 = VAR_2->interval.tv_nsec;
 if (FUNC_11(&VAR_5, &VAR_2->interval))
  FUNC_4(VAR_1,
      "warning: interval (%jd.%09ld) less than resolution (%jd.%09ld)\n",
      (intmax_t)VAR_2->interval.tv_sec, VAR_2->interval.tv_nsec,
      (intmax_t)VAR_5.tv_sec, VAR_5.tv_nsec);




 if ((long)VAR_16 < VAR_11/100)
  VAR_13 = 100;
 else
  VAR_13 = VAR_11/VAR_16;
 FUNC_4(VAR_1,
     "calling time every %d cycles\n", VAR_13);

 if (FUNC_2(VAR_0, &VAR_4) == -1) {
  FUNC_6("clock_gettime");
  return (-1);
 }
 VAR_5.tv_sec = 2;
 VAR_5.tv_nsec = 0;
 FUNC_10(&VAR_4, &VAR_5);
 VAR_4.tv_nsec = 0;
 if (FUNC_12(VAR_4, ((void*)0), ((void*)0)) == -1)
  return (-1);
 VAR_3 = VAR_4;
 VAR_8 = VAR_4.tv_sec + VAR_2->duration;

 VAR_9 = VAR_10 = 0;
 VAR_7 = 0;
 VAR_6 = 0;
 VAR_12 = VAR_13;
 VAR_14 = VAR_2->port;
 if (VAR_2->port == VAR_2->port_max) {
  if (VAR_2->ipv6) {
   if (FUNC_3(VAR_2->s, (struct sockaddr *)&VAR_2->sin6, sizeof(VAR_2->sin6))) {
    FUNC_6("connect (ipv6)");
    return (-1);
   }
  } else {
   if (FUNC_3(VAR_2->s, (struct sockaddr *)&VAR_2->sin, sizeof(VAR_2->sin))) {
    FUNC_6("connect (ipv4)");
    return (-1);
   }
  }
 }
 while (1) {
  int VAR_17;

  FUNC_10(&VAR_3, &VAR_2->interval);
  if (--VAR_12 <= 0) {
   VAR_12 = VAR_13;
   if (FUNC_12(VAR_3, &VAR_5, &VAR_6) == -1)
    return (-1);
  }
  if (VAR_14 == VAR_2->port && VAR_2->packet_len >= 4) {
   FUNC_0(VAR_2->packet, VAR_7);
   VAR_7++;
  }
  if (VAR_2->port == VAR_2->port_max) {
   VAR_17 = FUNC_8(VAR_2->s, VAR_2->packet, VAR_2->packet_len, 0);
  } else {
   VAR_2->sin.sin_port = FUNC_5(VAR_14++);
   if (VAR_14 > VAR_2->port_max)
    VAR_14 = VAR_2->port;
   if (VAR_2->ipv6) {
   VAR_17 = FUNC_9(VAR_2->s, VAR_2->packet, VAR_2->packet_len, 0,
       (struct sockaddr *)&VAR_2->sin6, sizeof(VAR_2->sin6));
   } else {
   VAR_17 = FUNC_9(VAR_2->s, VAR_2->packet, VAR_2->packet_len, 0,
    (struct sockaddr *)&VAR_2->sin, sizeof(VAR_2->sin));
   }
  }
  if (VAR_17 < 0)
   VAR_9++;
  VAR_10++;
  if (VAR_2->duration != 0 && VAR_5.tv_sec >= VAR_8)
   goto done;
 }

done:
 if (FUNC_2(VAR_0, &VAR_5) == -1) {
  FUNC_6("clock_gettime");
  return (-1);
 }

 FUNC_7("\n");
 FUNC_7("start:             %jd.%09ld\n", (intmax_t)VAR_4.tv_sec,
     VAR_4.tv_nsec);
 FUNC_7("finish:            %jd.%09ld\n", (intmax_t)VAR_5.tv_sec,
     VAR_5.tv_nsec);
 FUNC_7("send calls:        %ld\n", VAR_10);
 FUNC_7("send errors:       %ld\n", VAR_9);
 FUNC_7("approx send rate:  %ld pps\n", (VAR_10 - VAR_9) /
     VAR_2->duration);
 VAR_15 = VAR_10 - VAR_9;
 if (VAR_15 > 0) {
  VAR_16 = (VAR_5.tv_sec - VAR_4.tv_sec) * 1000000000UL +
   (VAR_5.tv_nsec - VAR_4.tv_nsec);
  VAR_15 = VAR_16 / VAR_15;
 }
 FUNC_7("time/packet:       %u ns\n", (u_int)VAR_15);
 FUNC_7("approx error rate: %ld\n", (VAR_9 / VAR_10));
 FUNC_7("waited:            %lld\n", VAR_6);
 FUNC_7("approx waits/sec:  %lld\n", (long long)(VAR_6 / VAR_2->duration));
 FUNC_7("approx wait rate:  %lld\n", (long long)(VAR_6 / VAR_10));

 return (0);
}
