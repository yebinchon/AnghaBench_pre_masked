
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; void* sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;
typedef scalar_t__ pid_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,int) ;

int
FUNC_14(int VAR_7, char *VAR_8[])
{
 pid_t VAR_9, VAR_10;
 struct sockaddr_in VAR_11;
 int VAR_12;
 u_short VAR_13;
 socklen_t VAR_14;

 VAR_12 = FUNC_11(VAR_2, VAR_6, 0);
 if (VAR_12 < 0)
  FUNC_2(-1, "socket");





 FUNC_1(&VAR_11, sizeof(VAR_11));
 VAR_11.sin_family = VAR_0;
 VAR_11.sin_len = sizeof(VAR_11);
 VAR_11.sin_addr.s_addr = FUNC_6(VAR_1);

 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_11, sizeof(VAR_11)) < 0)
  FUNC_2(-1, "bind");

 if (FUNC_7(VAR_12, -1) < 0)
  FUNC_2(-1, "listen");




 FUNC_1(&VAR_11, sizeof(VAR_11));
 VAR_11.sin_family = VAR_0;
 VAR_11.sin_len = sizeof(VAR_11);
 VAR_14 = sizeof(VAR_11);
 if (FUNC_5(VAR_12, (struct sockaddr *)&VAR_11, &VAR_14) < 0)
  FUNC_2(-1, "getsockname");
 VAR_13 = VAR_11.sin_port;
 FUNC_9("Using port %d\n", FUNC_8(VAR_13));

 if (FUNC_10(VAR_3, VAR_5) == VAR_4)
  FUNC_2(-1, "signal");

 VAR_10 = FUNC_4();
 VAR_9 = FUNC_3();
 if (VAR_9 < 0)
  FUNC_2(-1, "fork");
 if (VAR_9 == 0) {
  VAR_9 = FUNC_4();
  FUNC_13(VAR_10, VAR_12);
 } else
  FUNC_12(VAR_9, VAR_13);

 return (0);
}
