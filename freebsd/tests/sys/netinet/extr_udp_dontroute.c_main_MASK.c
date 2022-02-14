
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_storage {int ss_len; void* ss_family; } ;
struct sockaddr_in6 {int sin6_addr; void* sin6_port; } ;
struct sockaddr_in {int sin_addr; void* sin_port; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int opt ;
typedef int dst ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sockaddr_storage*,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 void* FUNC_5 (int const) ;
 int FUNC_6 (void*,char const*,int *) ;
 int FUNC_7 (char const*,int) ;
 scalar_t__ FUNC_8 (int,char*,size_t const) ;
 int FUNC_9 (int,char const*,int ,int ,struct sockaddr*,int) ;
 int FUNC_10 (int,int ,int ,int*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char const*) ;

int
FUNC_14(int VAR_13, char **VAR_14)
{
 struct sockaddr_storage VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;
 int VAR_19;
 ssize_t VAR_20;
 const char* VAR_21 = "Hello, World!";
 const size_t VAR_22 = 80;
 char VAR_23[VAR_22];
 bool VAR_24 = 0;
 const char *VAR_25, *VAR_26;
 const uint16_t VAR_27 = 46120;

 FUNC_0(&VAR_15, sizeof(VAR_15));
 if (VAR_13 < 3 || VAR_13 > 4) {
  FUNC_4(VAR_12, "Usage: %s [-6] ip_address tapdev\n", VAR_14[0]);
  FUNC_3(2);
 }

 if (FUNC_12("-6", VAR_14[1]) == 0) {
  VAR_24 = 1;
  VAR_25 = VAR_14[2];
  VAR_26 = VAR_14[3];
 } else {
  VAR_25 = VAR_14[1];
  VAR_26 = VAR_14[2];
 }

 VAR_17 = FUNC_7(VAR_26, VAR_5 | VAR_4);
 if (VAR_17 < 0)
  FUNC_1(VAR_3, "open");

 if (VAR_24)
  VAR_16 = FUNC_11(VAR_7, VAR_8, 0);
 else
  VAR_16 = FUNC_11(VAR_6, VAR_8, 0);
 if (VAR_16 < 0)
  FUNC_1(VAR_3, "socket");
 VAR_18 = 1;

 VAR_19 = FUNC_10(VAR_16, VAR_9, VAR_10, &VAR_18, sizeof(VAR_18));
 if (VAR_19 == -1)
  FUNC_1(VAR_3, "setsockopt(SO_DONTROUTE)");

 if (VAR_24) {
  struct sockaddr_in6 *VAR_28 = ((struct sockaddr_in6*)&VAR_15);

  VAR_15.ss_len = sizeof(struct sockaddr_in6);
  VAR_15.ss_family = VAR_1;
  VAR_28->sin6_port = FUNC_5(VAR_27);
  VAR_19 = FUNC_6(VAR_1, VAR_25, &VAR_28->sin6_addr);
 } else {
  struct sockaddr_in *VAR_29 = ((struct sockaddr_in*)&VAR_15);

  VAR_15.ss_len = sizeof(struct sockaddr_in);
  VAR_15.ss_family = VAR_0;
  VAR_29->sin_port = FUNC_5(VAR_27);
  VAR_19 = FUNC_6(VAR_0, VAR_25, &VAR_29->sin_addr);
 }
 if (VAR_19 != 1)
  FUNC_1(VAR_3, "inet_pton returned %d", VAR_19);

 VAR_19 = FUNC_9(VAR_16, VAR_21, FUNC_13(VAR_21), 0, (struct sockaddr*)&VAR_15,
     VAR_15.ss_len);
 if (VAR_19 == -1)
  FUNC_1(VAR_3, "sendto");



 VAR_20 = FUNC_8(VAR_17, VAR_23, VAR_22);
 if (VAR_20 == 0)
  FUNC_2(VAR_3, "read returned EOF");
 else if (VAR_20 < 0 && VAR_11 == VAR_2)
  FUNC_2(VAR_3, "Did not receive any packets");
 else if (VAR_20 < 0)
  FUNC_1(VAR_3, "read");






 return (0);
}
