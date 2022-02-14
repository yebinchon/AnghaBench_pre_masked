
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cf_conn {scalar_t__ mpending; scalar_t__ mreq; } ;
struct TYPE_6__ {int so_rcv; } ;
struct TYPE_5__ {TYPE_4__* xp_socket; scalar_t__ xp_upcallset; scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cf_conn*,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(SVCXPRT *VAR_1)
{
 struct cf_conn *VAR_2 = (struct cf_conn *)VAR_1->xp_p1;

 FUNC_0(&VAR_1->xp_socket->so_rcv);
 if (VAR_1->xp_upcallset) {
  VAR_1->xp_upcallset = 0;
  FUNC_4(VAR_1->xp_socket, VAR_0);
 }
 FUNC_1(&VAR_1->xp_socket->so_rcv);

 FUNC_5(VAR_1);

 if (VAR_2->mreq)
  FUNC_2(VAR_2->mreq);
 if (VAR_2->mpending)
  FUNC_2(VAR_2->mpending);
 FUNC_3(VAR_2, sizeof(*VAR_2));
}
