
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,int ) ;

int
FUNC_7(int VAR_5, char *VAR_6[])
{
 struct sockaddr_in VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_2, VAR_4, 0);
 if (VAR_8 < 0)
  FUNC_2(-1, "socket(PF_INET, SOCKET_STREAM, 0)");

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;
 VAR_7.sin_len = sizeof(VAR_7);
 VAR_7.sin_addr.s_addr = VAR_1;
 VAR_7.sin_port = FUNC_4(VAR_3);

 if (FUNC_0(VAR_8, (struct sockaddr *)&VAR_7, sizeof(VAR_7)) < 0)
  FUNC_2(-1, "bind");

 if (FUNC_5(VAR_8, -1) < 0)
  FUNC_2(-1, "listen");

 while (1)
  FUNC_3(VAR_8);

 return (0);
}
