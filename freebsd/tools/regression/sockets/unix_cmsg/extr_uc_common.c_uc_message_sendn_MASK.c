
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct msghdr {int dummy; } ;
struct TYPE_3__ {int msg_num; } ;
struct TYPE_4__ {TYPE_1__ ipc_msg; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int,struct msghdr*) ;

int
FUNC_2(int VAR_1, struct msghdr *VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0.ipc_msg.msg_num; ++VAR_3) {
  FUNC_0("message #%u", VAR_3);
  if (FUNC_1(VAR_1, VAR_2) < 0)
   return (-1);
 }
 return (0);
}
