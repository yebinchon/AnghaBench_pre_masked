
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,int ,int) ;
 scalar_t__ FUNC_5 (int,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int,int *,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_9(int VAR_3, const char *VAR_4, struct sockaddr *VAR_5, socklen_t VAR_6)
{
 int VAR_7, VAR_8;
 ssize_t VAR_9;

 VAR_7 = FUNC_8(VAR_3, VAR_2, 0);
 if (VAR_7 < 0)
  FUNC_2(-1, "socket(%s, SOCK_DGRAM, 0)", VAR_4);

 VAR_8 = FUNC_8(VAR_3, VAR_2, 0);
 if (VAR_8 < 0)
  FUNC_2(-1, "socket(%s, SOCK_DGRAM, 0)", VAR_4);

 if (FUNC_0(VAR_8, VAR_5, VAR_6) < 0)
  FUNC_2(-1, "Protocol %s bind(sock_receive)", VAR_4);
 if (FUNC_4(VAR_8, VAR_0, VAR_1, 1) < 0)
  FUNC_2(-1, "Protocll %s fcntl(sock_receive, FL_SETFL, "
      "O_NONBLOCK)", VAR_4);

 if (FUNC_1(VAR_7, VAR_5, VAR_6) < 0)
  FUNC_2(-1, "Protocol %s connect(sock_send)", VAR_4);

 VAR_9 = FUNC_5(VAR_8, ((void*)0), 0, 0);
 if (VAR_9 > 0)
  FUNC_3(-1, "Protocol %s recv(sock_receive, NULL, 0) before: %zd",
      VAR_4, VAR_9);
 else if (VAR_9 < 0)
  FUNC_2(-1, "Protocol %s recv(sock_receive, NULL, 0) before",
      VAR_4);

 VAR_9 = FUNC_6(VAR_7, ((void*)0), 0, 0);
 if (VAR_9 < 0)
  FUNC_2(-1, "Protocol %s send(sock_send, NULL, 0)", VAR_4);

 (void)FUNC_7(1);
 VAR_9 = FUNC_5(VAR_8, ((void*)0), 0, 0);
 if (VAR_9 < 0)
  FUNC_2(-1, "Protocol %s recv(sock_receive, NULL, 0) test",
      VAR_4);

 VAR_9 = FUNC_5(VAR_8, ((void*)0), 0, 0);
 if (VAR_9 > 0)
  FUNC_3(-1, "Protocol %s recv(sock_receive, NULL, 0) after: %zd",
      VAR_4, VAR_9);
 else if (VAR_9 < 0)
  FUNC_2(-1, "Protocol %s recv(sock_receive, NULL, 0) after",
      VAR_4);
}
