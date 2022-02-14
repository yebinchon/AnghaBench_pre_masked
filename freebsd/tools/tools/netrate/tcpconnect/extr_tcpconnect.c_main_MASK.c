
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int64_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (struct sockaddr_in*) ;

int
FUNC_9(int VAR_7, char *VAR_8[])
{
 struct sockaddr_in VAR_9;
 u_int64_t VAR_10;

 if (VAR_7 != 2)
  FUNC_3(-1, "usage: tcpconnect [ip]");

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_addr.s_addr = FUNC_5(VAR_8[1]);
 VAR_9.sin_port = FUNC_4(VAR_1);

 if (FUNC_7(VAR_3, VAR_5) == VAR_4)
  FUNC_2(-1, "signal(SIGALRM)");

 FUNC_0(VAR_2);

 VAR_10 = 0;
 while (!VAR_6) {
  if (FUNC_8(&VAR_9) == 0)
   VAR_10++;
 }
 FUNC_6("%ju count\n", (uintmax_t)VAR_10);
 FUNC_6("%ju connections/second\n", (uintmax_t)(VAR_10 / VAR_2));

 return (0);
}
