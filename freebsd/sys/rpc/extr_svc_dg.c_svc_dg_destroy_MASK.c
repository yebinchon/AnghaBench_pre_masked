
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int so_rcv; } ;
struct TYPE_6__ {scalar_t__ xp_netid; TYPE_4__* xp_socket; int xp_lock; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(SVCXPRT *VAR_1)
{

 FUNC_0(&VAR_1->xp_socket->so_rcv);
 FUNC_4(VAR_1->xp_socket, VAR_0);
 FUNC_1(&VAR_1->xp_socket->so_rcv);

 FUNC_7(&VAR_1->xp_lock);
 if (VAR_1->xp_socket)
  (void)FUNC_3(VAR_1->xp_socket);

 if (VAR_1->xp_netid)
  (void) FUNC_2(VAR_1->xp_netid, FUNC_5(VAR_1->xp_netid) + 1);
 FUNC_6(VAR_1);
}
