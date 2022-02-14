
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(u_short VAR_5)
{
 struct sockaddr_in VAR_6;

 VAR_4 = FUNC_6(VAR_2, VAR_3, 0);
 if (VAR_4 < 0)
  FUNC_2(-1, "tcp_setup: listen");

 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_6.sin_len = sizeof(VAR_6);
 VAR_6.sin_family = VAR_0;
 VAR_6.sin_addr.s_addr = FUNC_3(VAR_1);
 VAR_6.sin_port = FUNC_4(VAR_5);

 if (FUNC_0(VAR_4, (struct sockaddr *)&VAR_6, sizeof(VAR_6)) < 0)
  FUNC_2(-1, "tcp_setup: bind");

 if (FUNC_5(VAR_4, -1) < 0)
  FUNC_2(-1, "tcp_setup: listen");
}
