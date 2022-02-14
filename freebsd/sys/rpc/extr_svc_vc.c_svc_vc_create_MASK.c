
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct socket {int so_state; TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_12__ {int xp_upcallset; int xp_lock; int xp_ltaddr; int * xp_ops; int * xp_p2; int * xp_p1; struct socket* xp_socket; int * xp_pool; } ;
struct TYPE_11__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_10__ {int (* pru_peeraddr ) (struct socket*,struct sockaddr**) ;int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;
typedef TYPE_3__ SVCXPRT ;
typedef int SVCPOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct sockaddr*,int ) ;
 int FUNC_7 (int *,struct sockaddr*,int ) ;
 int FUNC_8 (struct socket*,int,int ) ;
 int FUNC_9 (struct socket*,int ,TYPE_3__*) ;
 int FUNC_10 (struct socket*,struct sockaddr**) ;
 int FUNC_11 (struct socket*,struct sockaddr**) ;
 TYPE_3__* FUNC_12 (int *,struct socket*,struct sockaddr*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (TYPE_3__*) ;

SVCXPRT *
FUNC_18(SVCPOOL *VAR_6, struct socket *VAR_7, size_t VAR_8,
    size_t VAR_9)
{
 SVCXPRT *VAR_10;
 struct sockaddr* VAR_11;
 int VAR_12;

 FUNC_2(VAR_7);
 if (VAR_7->so_state & (VAR_1|VAR_2)) {
  FUNC_3(VAR_7);
  FUNC_1(VAR_7->so_vnet);
  VAR_12 = VAR_7->so_proto->pr_usrreqs->pru_peeraddr(VAR_7, &VAR_11);
  FUNC_0();
  if (VAR_12)
   return (((void*)0));
  VAR_10 = FUNC_12(VAR_6, VAR_7, VAR_11);
  FUNC_6(VAR_11, VAR_0);
  return (VAR_10);
 }
 FUNC_3(VAR_7);

 VAR_10 = FUNC_13();
 FUNC_16(&VAR_10->xp_lock, "xprt->xp_lock");
 VAR_10->xp_pool = VAR_6;
 VAR_10->xp_socket = VAR_7;
 VAR_10->xp_p1 = ((void*)0);
 VAR_10->xp_p2 = ((void*)0);
 VAR_10->xp_ops = &VAR_4;

 FUNC_1(VAR_7->so_vnet);
 VAR_12 = VAR_7->so_proto->pr_usrreqs->pru_sockaddr(VAR_7, &VAR_11);
 FUNC_0();
 if (VAR_12) {
  goto cleanup_svc_vc_create;
 }

 FUNC_7(&VAR_10->xp_ltaddr, VAR_11, VAR_11->sa_len);
 FUNC_6(VAR_11, VAR_0);

 FUNC_17(VAR_10);

 FUNC_8(VAR_7, -1, VAR_3);

 FUNC_4(VAR_7);
 VAR_10->xp_upcallset = 1;
 FUNC_9(VAR_7, VAR_5, VAR_10);
 FUNC_5(VAR_7);

 return (VAR_10);

cleanup_svc_vc_create:
 FUNC_15(&VAR_10->xp_lock);
 FUNC_14(VAR_10);

 return (((void*)0));
}
