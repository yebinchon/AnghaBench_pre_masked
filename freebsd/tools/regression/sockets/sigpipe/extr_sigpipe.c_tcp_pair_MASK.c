
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(u_short VAR_5, int VAR_6[2])
{
 int VAR_7, VAR_8;
 struct sockaddr_in VAR_9;
 socklen_t VAR_10;

 VAR_8 = FUNC_7(VAR_2, VAR_3, 0);
 if (VAR_8 < 0)
  FUNC_3(-1, "tcp_pair: socket");

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_addr.s_addr = FUNC_4(VAR_1);
 VAR_9.sin_port = FUNC_5(VAR_5);

 if (FUNC_2(VAR_8, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0)
  FUNC_3(-1, "tcp_pair: connect");

 FUNC_6(1);

 VAR_10 = sizeof(VAR_9);
 VAR_7 = FUNC_0(VAR_4, (struct sockaddr *)&VAR_9, &VAR_10);
 if (VAR_7 < 0)
  FUNC_3(-1, "tcp_pair: accept");

 FUNC_6(1);

 VAR_6[0] = VAR_7;
 VAR_6[1] = VAR_8;
}
