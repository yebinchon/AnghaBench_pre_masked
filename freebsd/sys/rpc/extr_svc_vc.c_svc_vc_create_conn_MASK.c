
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockopt {int* sopt_val; int sopt_valsize; int sopt_name; scalar_t__ sopt_level; void* sopt_dir; } ;
struct socket {int so_rcv; TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {int sa_len; } ;
struct cf_conn {int strm_stat; } ;
typedef int one ;
struct TYPE_12__ {int xp_idletimeout; int xp_upcallset; int xp_lock; int xp_ltaddr; int xp_rtaddr; int * xp_ops; int * xp_p2; struct cf_conn* xp_p1; struct socket* xp_socket; int * xp_pool; } ;
struct TYPE_11__ {scalar_t__ pr_protocol; TYPE_1__* pr_usrreqs; } ;
struct TYPE_10__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;
typedef TYPE_3__ SVCXPRT ;
typedef int SVCPOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct sockopt*,int) ;
 int FUNC_5 (struct sockaddr*,int ) ;
 struct cf_conn* FUNC_6 (int) ;
 int FUNC_7 (struct cf_conn*,int) ;
 int FUNC_8 (int *,struct sockaddr*,int ) ;
 int FUNC_9 (struct socket*,struct sockopt*) ;
 int FUNC_10 (struct socket*,int ,int ,TYPE_3__*) ;
 int FUNC_11 (struct socket*,struct sockaddr**) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_12 () ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;

SVCXPRT *
FUNC_20(SVCPOOL *VAR_10, struct socket *VAR_11, struct sockaddr *VAR_12)
{
 SVCXPRT *VAR_13;
 struct cf_conn *VAR_14;
 struct sockaddr* VAR_15 = ((void*)0);
 struct sockopt VAR_16;
 int VAR_17 = 1;
 int VAR_18;

 FUNC_4(&VAR_16, sizeof(struct sockopt));
 VAR_16.sopt_dir = VAR_3;
 VAR_16.sopt_level = VAR_2;
 VAR_16.sopt_name = VAR_4;
 VAR_16.sopt_val = &VAR_17;
 VAR_16.sopt_valsize = sizeof(VAR_17);
 VAR_18 = FUNC_9(VAR_11, &VAR_16);
 if (VAR_18) {
  return (((void*)0));
 }

 if (VAR_11->so_proto->pr_protocol == VAR_0) {
  FUNC_4(&VAR_16, sizeof(struct sockopt));
  VAR_16.sopt_dir = VAR_3;
  VAR_16.sopt_level = VAR_0;
  VAR_16.sopt_name = VAR_6;
  VAR_16.sopt_val = &VAR_17;
  VAR_16.sopt_valsize = sizeof(VAR_17);
  VAR_18 = FUNC_9(VAR_11, &VAR_16);
  if (VAR_18) {
   return (((void*)0));
  }
 }

 VAR_14 = FUNC_6(sizeof(*VAR_14));
 VAR_14->strm_stat = VAR_7;

 VAR_13 = FUNC_12();
 FUNC_15(&VAR_13->xp_lock, "xprt->xp_lock");
 VAR_13->xp_pool = VAR_10;
 VAR_13->xp_socket = VAR_11;
 VAR_13->xp_p1 = VAR_14;
 VAR_13->xp_p2 = ((void*)0);
 VAR_13->xp_ops = &VAR_8;





 VAR_13->xp_idletimeout = 6 * 60;

 FUNC_8(&VAR_13->xp_rtaddr, VAR_12, VAR_12->sa_len);

 FUNC_1(VAR_11->so_vnet);
 VAR_18 = VAR_11->so_proto->pr_usrreqs->pru_sockaddr(VAR_11, &VAR_15);
 FUNC_0();
 if (VAR_18)
  goto cleanup_svc_vc_create;

 FUNC_8(&VAR_13->xp_ltaddr, VAR_15, VAR_15->sa_len);
 FUNC_5(VAR_15, VAR_1);

 FUNC_19(VAR_13);

 FUNC_2(&VAR_11->so_rcv);
 VAR_13->xp_upcallset = 1;
 FUNC_10(VAR_11, VAR_5, VAR_9, VAR_13);
 FUNC_3(&VAR_11->so_rcv);





 FUNC_16(&VAR_13->xp_lock);
 FUNC_18(VAR_13);
 FUNC_17(&VAR_13->xp_lock);

 return (VAR_13);
cleanup_svc_vc_create:
 FUNC_14(&VAR_13->xp_lock);
 FUNC_13(VAR_13);
 FUNC_7(VAR_14, sizeof(*VAR_14));

 return (((void*)0));
}
