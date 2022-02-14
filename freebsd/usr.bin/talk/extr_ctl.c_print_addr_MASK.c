
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__* sin_zero; int sin_family; int sin_port; TYPE_1__ sin_addr; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char) ;

void
FUNC_2(struct sockaddr_in VAR_0)
{
 int VAR_1;

 FUNC_0("addr = %lx, port = %o, family = %o zero = ",
  (u_long)VAR_0.sin_addr.s_addr, VAR_0.sin_port, VAR_0.sin_family);
 for (VAR_1 = 0; VAR_1<8;VAR_1++)
 FUNC_0("%o ", (int)VAR_0.sin_zero[VAR_1]);
 FUNC_1('\n');
}
