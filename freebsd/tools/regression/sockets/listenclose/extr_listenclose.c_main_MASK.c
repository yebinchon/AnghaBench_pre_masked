
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_6 ;
 int FUNC_4 (int,char*,int ,...) ;
 scalar_t__ FUNC_5 (int,int ,int*) ;
 scalar_t__ FUNC_6 (int,struct sockaddr*,int*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;

int
FUNC_12(void)
{
 int VAR_7, VAR_8;
 struct sockaddr_in VAR_9;
 socklen_t VAR_10;
 u_short VAR_11;
 int VAR_12;

 VAR_7 = FUNC_10(VAR_4, VAR_5, 0);
 if (VAR_7 == -1)
  FUNC_4(-1,
      "socket(PF_INET, SOCK_STREAM, 0) for listen socket: %s",
      FUNC_11(VAR_6));


 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_addr.s_addr = FUNC_7(VAR_2);
 VAR_9.sin_port = 0;

 if (FUNC_0(VAR_7, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0)
  FUNC_4(-1, "bind(%s, %d) for listen socket: %s",
      FUNC_8(VAR_9.sin_addr), 0, FUNC_11(VAR_6));

 VAR_10 = sizeof(VAR_9);
 if (FUNC_6(VAR_7, (struct sockaddr *)&VAR_9, &VAR_10) < 0)
  FUNC_4(-1, "getsockname() for listen socket: %s",
      FUNC_11(VAR_6));
 VAR_11 = VAR_9.sin_port;

 if (FUNC_9(VAR_7, -1) < 0)
  FUNC_4(-1, "listen() for listen socket: %s", FUNC_11(VAR_6));

 VAR_8 = FUNC_10(VAR_4, VAR_5, 0);
 if (VAR_8 == -1)
  FUNC_4(-1, "socket(PF_INET, SOCK_STREAM, 0) for connect "
      "socket: %s", FUNC_11(VAR_6));

 VAR_12 = VAR_3;
 if (FUNC_5(VAR_8, VAR_1, &VAR_12) < 0)
  FUNC_4(-1, "socket(PF_INET, SOCK_STREAM, 0) for connect socket"
      ": %s", FUNC_11(VAR_6));

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_addr.s_addr = FUNC_7(VAR_2);
 VAR_9.sin_port = VAR_11;

 if (FUNC_3(VAR_8, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0)
  FUNC_4(-1, "connect() for connect socket: %s", FUNC_11(VAR_6));
 FUNC_2(VAR_8);
 FUNC_2(VAR_7);

 return (0);
}
