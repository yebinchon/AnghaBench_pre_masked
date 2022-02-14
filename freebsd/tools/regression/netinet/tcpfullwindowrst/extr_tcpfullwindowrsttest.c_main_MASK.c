
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; int revents; } ;


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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int VAR_10 ;
 int FUNC_5 (int,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_10 (struct pollfd*,int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int,char*,int) ;

int
FUNC_16(void)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct pollfd VAR_17[2];
 struct sockaddr_in VAR_18;
 char VAR_19[4096];

 FUNC_11("1..1\n");
 FUNC_13(VAR_6, VAR_10);
 FUNC_1(20);

 VAR_12 = FUNC_14(VAR_0, VAR_7, 0);
 if (VAR_12 == -1)
  return 1;
 VAR_11 = 1;
 FUNC_12(VAR_12, VAR_8, VAR_9, &VAR_11, sizeof VAR_11);
 FUNC_9(&VAR_18, 0, sizeof VAR_18);
 VAR_18.sin_family = VAR_0;
 VAR_18.sin_addr.s_addr = FUNC_6(VAR_3);
 VAR_18.sin_port = FUNC_7(3737);
 if (FUNC_2(VAR_12, (struct sockaddr *) &VAR_18, sizeof VAR_18) == -1)
  return 1;
 if (FUNC_8(VAR_12, 1) == -1)
  return 1;
 VAR_13 = FUNC_14(VAR_0, VAR_7, 0);
 if (VAR_13 == -1)
  return 1;
 if (FUNC_4(VAR_13, (struct sockaddr *) &VAR_18, sizeof VAR_18) == -1)
  return 1;
 VAR_14 = FUNC_0(VAR_12, 0, 0);
 if (VAR_14 == -1)
  return 1;
 FUNC_3(VAR_12);
 FUNC_5(VAR_13, VAR_2, FUNC_5(VAR_13, VAR_1) | VAR_4);
 FUNC_5(VAR_14, VAR_2, FUNC_5(VAR_13, VAR_1) | VAR_4);
 VAR_15 = 1;
 VAR_16 = 1;
 VAR_17[0].fd = VAR_13;
 VAR_17[0].events = VAR_5;
 VAR_17[1].fd = VAR_14;
 VAR_17[1].events = VAR_5;
 while (VAR_15 || VAR_16) {
  if (FUNC_10(VAR_17, 2, 1000) == 0) {
   if (VAR_15) {
    FUNC_3(VAR_13);
    VAR_17[0].fd = -1;
    VAR_15 = 0;
   }
   continue;
  }
  if (VAR_17[0].revents & VAR_5) {
   if (FUNC_15(VAR_13, VAR_19, sizeof VAR_19) == -1) {
    FUNC_3(VAR_13);
    VAR_17[0].fd = -1;
    VAR_15 = 0;
   }
  }
  if (VAR_17[1].revents & VAR_5) {
   if (FUNC_15(VAR_14, VAR_19, sizeof VAR_19) == -1) {
    FUNC_3(VAR_14);
    VAR_17[1].fd = -1;
    VAR_16 = 0;
   }
  }
 }

 FUNC_11("ok 1 - tcpfullwindowrst\n");
 return 0;
}
