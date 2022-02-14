
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int srv ;
typedef int cookie ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int FUNC_10 (int,char**,int) ;
 int FUNC_11 (int,int ,int ,int*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_13 (char*) ;

int
FUNC_14(int VAR_10, char **VAR_11)
{
 struct sockaddr_in VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;
 char VAR_18[VAR_8];

 if (VAR_10 != 3) {
  FUNC_6(VAR_9, "Usage: %s port cookie\n", VAR_11[0]);
  FUNC_5(2);
 }

 VAR_15 = FUNC_1(VAR_11[1]);
 VAR_16 = FUNC_1(VAR_11[2]);

 VAR_13 = FUNC_12(VAR_4, VAR_5, 0);
 if (VAR_13 < 0)
  FUNC_4(VAR_1, "socket");

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sin_len = sizeof(VAR_12);
 VAR_12.sin_family = VAR_0;
 VAR_12.sin_port = FUNC_7(VAR_15);
 VAR_12.sin_addr.s_addr = VAR_3;

 if (FUNC_2(VAR_13, (struct sockaddr *)&VAR_12, VAR_12.sin_len) < 0)
  FUNC_4(VAR_2, "failed to bind to port %d", VAR_15);

 if (FUNC_8(VAR_13, 5) < 0)
  FUNC_4(VAR_2, "failed to listen on socket");

 VAR_17 = FUNC_11(VAR_13, VAR_6, VAR_7, &VAR_16, sizeof(VAR_16));
 if (VAR_17 < 0)
  FUNC_4(VAR_2, "setsockopt(SO_USER_COOKIE)");

 while (1) {

  VAR_14 = FUNC_0(VAR_13, ((void*)0), 0);

  if (VAR_14 < 0)
   FUNC_4(VAR_2, "accept failed");

  VAR_17 = FUNC_11(VAR_14, VAR_6, VAR_7,
     &VAR_16, sizeof(VAR_16));
  if (VAR_17 < 0)
   FUNC_4(VAR_2, "setsockopt(SO_USER_COOKIE)");

  VAR_17 = FUNC_10(VAR_14, &VAR_18, VAR_8);

  if (VAR_17 < 0)
   FUNC_13("failed read");

  FUNC_3(VAR_14);
 }

 return (0);
}
