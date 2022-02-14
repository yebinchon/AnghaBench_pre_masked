
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
typedef int sock ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (scalar_t__) ;

int
FUNC_12(void)
{
 struct sockaddr_in VAR_10;
 socklen_t VAR_11;
 int VAR_12, VAR_13;
 u_short VAR_14;

 VAR_12 = -1;


 if ((FUNC_9(VAR_12, VAR_6) != -1) && (VAR_9 != VAR_1))
  FUNC_4(-1, "shutdown() for invalid file descriptor does not "
      "return EBADF");

 VAR_12 = FUNC_10(VAR_4, VAR_8, 0);
 if (VAR_12 == -1)
  FUNC_4(-1,
      "socket(PF_INET, SOCK_STREAM, 0) for listen socket: %s",
      FUNC_11(VAR_9));

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.sin_len = sizeof(VAR_10);
 VAR_10.sin_family = VAR_0;
 VAR_10.sin_addr.s_addr = FUNC_6(VAR_3);
 VAR_10.sin_port = 0;

 if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0)
  FUNC_4(-1, "bind(%s, %d) for listen socket: %s",
      FUNC_7(VAR_10.sin_addr), VAR_10.sin_port, FUNC_11(VAR_9));

 VAR_11 = sizeof(VAR_10);
 if (FUNC_5(VAR_12, (struct sockaddr *)&VAR_10, &VAR_11) < 0)
  FUNC_4(-1, "getsockname() for listen socket: %s",
      FUNC_11(VAR_9));
 VAR_14 = VAR_10.sin_port;

 if (FUNC_8(VAR_12, -1) < 0)
  FUNC_4(-1, "listen() for listen socket: %s", FUNC_11(VAR_9));

 VAR_13 = FUNC_10(VAR_4, VAR_8, 0);
 if (VAR_13 == -1)
  FUNC_4(-1, "socket(PF_INET, SOCK_STREAM, 0) for connect "
      "socket: %s", FUNC_11(VAR_9));

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.sin_len = sizeof(VAR_10);
 VAR_10.sin_family = VAR_0;
 VAR_10.sin_addr.s_addr = FUNC_6(VAR_3);
 VAR_10.sin_port = VAR_14;

 if (FUNC_3(VAR_13, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0)
  FUNC_4(-1, "connect() for connect socket: %s", FUNC_11(VAR_9));

 if ((FUNC_9(VAR_13, VAR_5 - 1) != -1) && (VAR_9 != VAR_2))
  FUNC_4(-1, "shutdown(SHUT_RD - 1) does not return EINVAL");
 if ((FUNC_9(VAR_13, VAR_6 + 1) != -1) && (VAR_9 != VAR_2))
  FUNC_4(-1, "shutdown(SHUT_RDWR + 1) does not return EINVAL");

 if (FUNC_9(VAR_13, VAR_5) < 0)
  FUNC_4(-1, "shutdown(SHUT_RD) for connect socket: %s",
      FUNC_11(VAR_9));
 if (FUNC_9(VAR_13, VAR_7) < 0)
  FUNC_4(-1, "shutdown(SHUT_WR) for connect socket: %s",
      FUNC_11(VAR_9));

 FUNC_2(VAR_13);
 FUNC_2(VAR_12);

 return (0);
}
