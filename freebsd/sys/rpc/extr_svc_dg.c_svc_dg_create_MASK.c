
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct socket {int so_rcv; TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int sa_len; } ;
struct __rpc_sockinfo {int si_proto; int si_af; } ;
struct TYPE_11__ {int xp_ltaddr; int * xp_ops; int * xp_p2; int * xp_p1; struct socket* xp_socket; int * xp_pool; int xp_lock; } ;
struct TYPE_10__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_9__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;
typedef TYPE_3__ SVCXPRT ;
typedef int SVCPOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct socket*,struct __rpc_sockinfo*) ;
 int FUNC_6 (struct sockaddr*,int ) ;
 int FUNC_7 (int *,struct sockaddr*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct socket*,int ,int ,TYPE_3__*) ;
 int FUNC_10 (struct socket*,struct sockaddr**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 TYPE_3__* FUNC_11 () ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (TYPE_3__*) ;

SVCXPRT *
FUNC_15(SVCPOOL *VAR_8, struct socket *VAR_9, size_t VAR_10,
    size_t VAR_11)
{
 SVCXPRT *VAR_12;
 struct __rpc_sockinfo VAR_13;
 struct sockaddr* VAR_14;
 int VAR_15;

 if (!FUNC_5(VAR_9, &VAR_13)) {
  FUNC_8(VAR_7, VAR_3);
  return (((void*)0));
 }



 VAR_10 = FUNC_4(VAR_13.si_af, VAR_13.si_proto, (int)VAR_10);
 VAR_11 = FUNC_4(VAR_13.si_af, VAR_13.si_proto, (int)VAR_11);
 if ((VAR_10 == 0) || (VAR_11 == 0)) {
  FUNC_8(VAR_7, VAR_4);
  return (((void*)0));
 }

 VAR_12 = FUNC_11();
 FUNC_13(&VAR_12->xp_lock, "xprt->xp_lock");
 VAR_12->xp_pool = VAR_8;
 VAR_12->xp_socket = VAR_9;
 VAR_12->xp_p1 = ((void*)0);
 VAR_12->xp_p2 = ((void*)0);
 VAR_12->xp_ops = &VAR_5;

 FUNC_1(VAR_9->so_vnet);
 VAR_15 = VAR_9->so_proto->pr_usrreqs->pru_sockaddr(VAR_9, &VAR_14);
 FUNC_0();
 if (VAR_15)
  goto freedata;

 FUNC_7(&VAR_12->xp_ltaddr, VAR_14, VAR_14->sa_len);
 FUNC_6(VAR_14, VAR_0);

 FUNC_14(VAR_12);

 FUNC_2(&VAR_9->so_rcv);
 FUNC_9(VAR_9, VAR_1, VAR_6, VAR_12);
 FUNC_3(&VAR_9->so_rcv);

 return (VAR_12);
freedata:
 (void) FUNC_8(VAR_7, VAR_2);
 FUNC_12(VAR_12);

 return (((void*)0));
}
