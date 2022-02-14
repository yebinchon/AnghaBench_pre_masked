
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct addrinfo {scalar_t__ ai_family; struct addrinfo* ai_next; int ai_addrlen; int ai_addr; } ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
struct TYPE_4__ {void* sin_port; void* sin6_port; } ;
struct _a {int ipv6; long port; long port_max; long packet_len; int s; void* duration; TYPE_1__ interval; struct _a* packet; TYPE_2__ sin; TYPE_2__ sin6; } ;
typedef int intmax_t ;
typedef int hints ;
typedef int a ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct _a*,long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct addrinfo*) ;
 scalar_t__ FUNC_4 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 void* FUNC_5 (long) ;
 struct _a* FUNC_6 (long) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,long,int ,int,void*) ;
 void* FUNC_11 (int ,int ,int ) ;
 int VAR_7 ;
 void* FUNC_12 (char*,char**,int) ;
 int FUNC_13 (struct _a*) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_8, char *VAR_9[])
{
 long VAR_10, VAR_11, VAR_12;
 char *VAR_13;
 struct _a VAR_14;
 struct addrinfo VAR_15, *VAR_16, *VAR_17;

 FUNC_0(&VAR_14, sizeof(VAR_14));

 if (VAR_8 != 6)
  FUNC_14();

 FUNC_8(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.ai_family = VAR_2;

 if (FUNC_4(VAR_9[1], ((void*)0), &VAR_15, &VAR_16) != 0) {
  FUNC_2(VAR_7, "Couldn't resolv %s\n", VAR_9[1]);
  return (-1);
 }
 VAR_17 = VAR_16;
 while (VAR_16) {
  if (VAR_16->ai_family == VAR_0) {
   FUNC_7(&VAR_14.sin, VAR_16->ai_addr, VAR_16->ai_addrlen);
   VAR_14.ipv6 = 0;
   break;
  } else if (VAR_16->ai_family == VAR_1) {
   FUNC_7(&VAR_14.sin6, VAR_16->ai_addr, VAR_16->ai_addrlen);
   VAR_14.ipv6 = 1;
   break;
  }
  VAR_16 = VAR_16->ai_next;
 }
 if (!VAR_16) {
  FUNC_2(VAR_7, "Couldn't resolv %s\n", VAR_9[1]);
  FUNC_1(1);
 }
 FUNC_3(VAR_17);

 VAR_12 = FUNC_12(VAR_9[2], &VAR_13, 10);
 if (VAR_12 < 1 || VAR_12 > 65535)
  FUNC_14();
 if (*VAR_13 != '\0' && *VAR_13 != '-')
  FUNC_14();
 if (VAR_14.ipv6)
  VAR_14.sin6.sin6_port = FUNC_5(VAR_12);
 else
  VAR_14.sin.sin_port = FUNC_5(VAR_12);
 VAR_14.port = VAR_14.port_max = VAR_12;
 if (*VAR_13 == '-') {
  VAR_12 = FUNC_12(VAR_13 + 1, &VAR_13, 10);
  if (VAR_12 < VAR_14.port || VAR_12 > 65535)
   FUNC_14();
  VAR_14.port_max = VAR_12;
 }

 VAR_11 = FUNC_12(VAR_9[3], &VAR_13, 10);
 if (VAR_11 < 0 || *VAR_13 != '\0')
  FUNC_14();
 if (VAR_11 > 32768) {
  FUNC_2(VAR_7, "payloadsize > 32768\n");
  return (-1);
 }
 VAR_14.packet_len = VAR_11;






 VAR_10 = FUNC_12(VAR_9[4], &VAR_13, 10);
 if (VAR_10 < 0 || *VAR_13 != '\0')
  FUNC_14();
 if (VAR_10 > VAR_3) {
  FUNC_2(VAR_7, "packet rate at most %ld\n", VAR_3);
  return (-1);
 }

 VAR_14.duration = FUNC_12(VAR_9[5], &VAR_13, 10);
 if (VAR_14.duration < 0 || *VAR_13 != '\0')
  FUNC_14();

 VAR_14.packet = FUNC_6(VAR_11);
 if (VAR_14.packet == ((void*)0)) {
  FUNC_9("malloc");
  return (-1);
 }
 FUNC_0(VAR_14.packet, VAR_11);
 if (VAR_10 == 0) {
  VAR_14.interval.tv_sec = 0;
  VAR_14.interval.tv_nsec = 0;
 } else if (VAR_10 == 1) {
  VAR_14.interval.tv_sec = 1;
  VAR_14.interval.tv_nsec = 0;
 } else {
  VAR_14.interval.tv_sec = 0;
  VAR_14.interval.tv_nsec = ((1 * 1000000000) / VAR_10);
 }

 FUNC_10("Sending packet of payload size %ld every %jd.%09lds for %ld "
     "seconds\n", VAR_11, (intmax_t)VAR_14.interval.tv_sec,
     VAR_14.interval.tv_nsec, VAR_14.duration);

 if (VAR_14.ipv6)
  VAR_14.s = FUNC_11(VAR_5, VAR_6, 0);
 else
  VAR_14.s = FUNC_11(VAR_4, VAR_6, 0);
 if (VAR_14.s == -1) {
  FUNC_9("socket");
  return (-1);
 }

 return (FUNC_13(&VAR_14));
}
