
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xp_netid; scalar_t__ xp_socket; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(SVCXPRT *VAR_0)
{

 if (VAR_0->xp_socket)
  (void)FUNC_1(VAR_0->xp_socket);

 if (VAR_0->xp_netid)
  (void) FUNC_0(VAR_0->xp_netid, FUNC_2(VAR_0->xp_netid) + 1);
 FUNC_3(VAR_0);
}
