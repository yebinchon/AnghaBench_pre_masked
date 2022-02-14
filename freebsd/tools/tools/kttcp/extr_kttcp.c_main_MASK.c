
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct timeval {unsigned long long tv_sec; unsigned long long tv_usec; } ;
struct sockaddr_storage {int ss_len; } ;
struct sockaddr {int dummy; } ;
struct rusage {int ru_stime; int ru_utime; } ;
struct TYPE_2__ {unsigned long long tv_usec; scalar_t__ tv_sec; } ;
struct kttcp_io_args {int kio_socket; unsigned long long kio_totalsize; long long kio_bytesdone; TYPE_1__ kio_elapsed; } ;
struct addrinfo {int ai_flags; int ai_family; int ai_addrlen; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; } ;
typedef int socklen_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long long VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (struct addrinfo*) ;
 char* FUNC_7 (int) ;
 unsigned long long FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_10 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 (int ,struct rusage*) ;
 int FUNC_13 (int,scalar_t__,struct kttcp_io_args*) ;
 scalar_t__ FUNC_14 (int,int) ;
 int FUNC_15 (struct addrinfo*,int ,int) ;
 int FUNC_16 (int ,int ,int) ;
 char* VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_17 (char*,...) ;
 scalar_t__ FUNC_18 (int,int ,int ,int const*,int) ;
 int FUNC_19 (int,int ,int ) ;
 int FUNC_20 (int *,int *,struct timeval*) ;
 int FUNC_21 () ;

int
FUNC_22(int VAR_24, char *VAR_25[])
{
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33;
 int VAR_34;
 int VAR_35;
 char *VAR_36;
 char *VAR_37;
 struct kttcp_io_args VAR_38;
 struct addrinfo VAR_39, *VAR_40, *VAR_41;
 struct sockaddr_storage VAR_42;
 struct rusage VAR_43, VAR_44;
 struct timeval VAR_45;
 unsigned long long VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 char VAR_51[VAR_10];
 socklen_t VAR_52;
 const int VAR_53 = 1;
 u_long VAR_54;

 VAR_54 = 0;
 VAR_37 = VAR_6;
 VAR_29 = 1;
 VAR_32 = 0;
 VAR_34 = VAR_7;
 VAR_50 = VAR_8;
 VAR_33 = VAR_15;
 while ((VAR_26 = FUNC_11(VAR_24, VAR_25, "46b:n:p:qrtvw:")) != -1) {
  switch (VAR_26) {
  case '4':
   if (VAR_33 != VAR_15)
    FUNC_21();
   VAR_33 = VAR_13;
   break;
  case '6':
   if (VAR_33 != VAR_15)
    FUNC_21();
   VAR_33 = VAR_14;
   break;
  case 'b':
   VAR_46 = FUNC_8(VAR_22);
   if (VAR_46 > VAR_1)
    FUNC_5(1,
        "invalid socket buffer size: %s\n", VAR_22);
   VAR_34 = VAR_46;
   break;
  case 'n':
   VAR_50 = FUNC_8(VAR_22);
   VAR_32 = 1;
   break;
  case 'p':
   VAR_37 = VAR_22;
   break;
  case 'q':
   VAR_29 = 0;
   break;
  case 'r':
   if (VAR_54 != 0)
    FUNC_21();
   VAR_54 = VAR_3;
   break;
  case 't':
   if (VAR_54 != 0)
    FUNC_21();
   VAR_54 = VAR_4;
   break;
  case 'v':
   VAR_29 = 2;
   break;
  case '?':
  default:
   FUNC_21();
  }
 }
 if (VAR_54 == 0)
  FUNC_21();

 VAR_24 -= VAR_23;
 VAR_25 += VAR_23;

 if (VAR_54 == VAR_4) {
  if (VAR_50 <= 0 || VAR_24 < 1)
   FUNC_21();
  VAR_36 = VAR_25[0];
  VAR_35 = 0;
 } else {
  if (VAR_32 == 0)
   VAR_50 = VAR_5;
  VAR_36 = ((void*)0);
  VAR_35 = VAR_0;
 }

 if ((VAR_31 = FUNC_16(VAR_2, VAR_12, 666)) == -1)
  FUNC_4(2, "open %s", VAR_2);

 FUNC_15(&VAR_39, 0, sizeof VAR_39);
 VAR_39.ai_flags = VAR_35;
 VAR_39.ai_socktype = VAR_17;
 VAR_39.ai_family = VAR_33;
 VAR_27 = FUNC_9(VAR_36, VAR_37, &VAR_39, &VAR_40);

 if (VAR_27 != 0)
  FUNC_5(2, "%s", FUNC_7(VAR_27));

 VAR_28 = -1;
 for (VAR_41 = VAR_40; VAR_41 != ((void*)0); VAR_41 = VAR_41->ai_next) {
  VAR_28 = FUNC_19(VAR_41->ai_family, VAR_41->ai_socktype, VAR_41->ai_protocol);
  if (VAR_28 >= 0)
   break;
 }
 if (VAR_41 == ((void*)0))
  FUNC_4(2, "can't create socket");

 FUNC_17("kttcp: socket buffer size: %d\n", VAR_34);

 if (VAR_54 == VAR_4) {
  if (FUNC_3(VAR_28, VAR_41->ai_addr, VAR_41->ai_addrlen) < 0)
   FUNC_4(2, "connect");
  if (VAR_29) {
   FUNC_10(VAR_41->ai_addr, VAR_41->ai_addrlen,
       VAR_51, sizeof VAR_51, ((void*)0), 0,
       VAR_11);
   FUNC_17("kttcp: connected to %s\n", VAR_51);
  }
  if (FUNC_18(VAR_28, VAR_18, VAR_21, &VAR_34, sizeof (int))
      < 0)
   FUNC_4(2, "setsockopt sndbuf");
  VAR_38.kio_socket = VAR_28;
 } else {
  if (FUNC_18(VAR_28, VAR_18, VAR_20, &VAR_53,
      sizeof (int)) < 0)
   FUNC_4(2, "setsockopt reuseaddr");
  if (FUNC_1(VAR_28, VAR_41->ai_addr, VAR_41->ai_addrlen) < 0)
   FUNC_4(2, "bind");
  if (FUNC_14(VAR_28, 1) < 0)
   FUNC_4(2, "listen");
  if (VAR_29)
   FUNC_17("kttcp: listening on port %s\n", VAR_37);
  VAR_52 = sizeof VAR_42;
  VAR_30 = FUNC_0(VAR_28, (struct sockaddr *)&VAR_42, &VAR_52);
  if (VAR_30 < 0)
   FUNC_4(2, "accept");
  if (VAR_29) {
   FUNC_10((struct sockaddr *)&VAR_42, VAR_42.ss_len,
       VAR_51, sizeof VAR_51, ((void*)0), 0,
       VAR_11);
   FUNC_17("kttcp: connect from %s\n", VAR_51);
  }
  if (FUNC_18(VAR_30, VAR_18, VAR_19, &VAR_34,
      sizeof (int)) < 0)
   FUNC_4(2, "setsockopt rcvbuf");
  VAR_38.kio_socket = VAR_30;
 }

 VAR_38.kio_totalsize = VAR_50;

 FUNC_12(VAR_16, &VAR_43);
 if (FUNC_13(VAR_31, VAR_54, &VAR_38) == -1)
  FUNC_4(2, "kttcp i/o command");
 FUNC_12(VAR_16, &VAR_44);

 VAR_47 = (unsigned long long)VAR_38.kio_elapsed.tv_sec * 1000000;
 VAR_47 += VAR_38.kio_elapsed.tv_usec;

 VAR_48 = VAR_38.kio_bytesdone * 1000000LL / VAR_47;
 VAR_49 = VAR_48 * VAR_9;
 FUNC_17("kttcp: %llu bytes in %ld.%03ld real seconds ==> %llu bytes/sec\n",
     VAR_38.kio_bytesdone, VAR_38.kio_elapsed.tv_sec,
     VAR_38.kio_elapsed.tv_usec / 1000, VAR_48);
 if (VAR_29 > 1) {
  FUNC_20(&VAR_44.ru_stime, &VAR_43.ru_stime, &VAR_45);
  VAR_48 = VAR_38.kio_bytesdone * 1000000LL /
      (VAR_45.tv_sec * 1000000ULL + VAR_45.tv_usec);
  FUNC_17("kttcp: %llu bytes in %ld.%03ld CPU seconds ==> %llu bytes/CPU sec\n",
      VAR_38.kio_bytesdone, VAR_45.tv_sec, VAR_45.tv_usec / 1000, VAR_48);
 }
 FUNC_17("       %g (%g) Megabits/sec\n",
     ((double) VAR_49 / 1024.0) / 1024.0,
     ((double) VAR_49 / 1000.0) / 1000.0);

 FUNC_20(&VAR_44.ru_utime, &VAR_43.ru_utime, &VAR_45);



 if (VAR_45.tv_sec < 0)
  VAR_45.tv_sec = VAR_45.tv_usec = 0;
 FUNC_17("  %ld.%02lduser", VAR_45.tv_sec, VAR_45.tv_usec / 10000);
 VAR_46 = VAR_45.tv_sec * 1000000ULL + VAR_45.tv_usec;

 FUNC_20(&VAR_44.ru_stime, &VAR_43.ru_stime, &VAR_45);
 FUNC_17(" %ld.%02ldsys", VAR_45.tv_sec, VAR_45.tv_usec / 10000);
 VAR_46 += VAR_45.tv_sec * 1000000ULL + VAR_45.tv_usec;

 FUNC_17(" %lld.%lldreal", VAR_47 / 1000000, (VAR_47 % 1000000) / 10000);
 FUNC_17(" %lld%%", VAR_46 * 100 / VAR_47);
 FUNC_17("\n");


 FUNC_2(VAR_38.kio_socket);
 if (VAR_54 == VAR_3)
  FUNC_2(VAR_28);
 FUNC_2(VAR_31);
 FUNC_6(VAR_40);

 return 0;
}
