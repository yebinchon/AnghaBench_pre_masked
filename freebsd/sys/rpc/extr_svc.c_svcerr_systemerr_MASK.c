
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int rq_verf; int rq_xid; TYPE_4__* rq_xprt; } ;
struct TYPE_6__ {int ar_stat; int ar_verf; } ;
struct TYPE_5__ {int rp_stat; } ;
struct rpc_msg {TYPE_2__ acpted_rply; TYPE_1__ rm_reply; int rm_direction; int rm_xid; } ;
struct TYPE_8__ {TYPE_3__* xp_pool; } ;
struct TYPE_7__ {scalar_t__ sp_rcache; } ;
typedef TYPE_4__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct rpc_msg*,int ,int *) ;
 int FUNC_1 (struct svc_req*) ;
 int FUNC_2 (struct svc_req*,struct rpc_msg*,int *) ;

void
FUNC_3(struct svc_req *VAR_3)
{
 SVCXPRT *VAR_4 = VAR_3->rq_xprt;
 struct rpc_msg VAR_5;

 VAR_5.rm_xid = VAR_3->rq_xid;
 VAR_5.rm_direction = VAR_1;
 VAR_5.rm_reply.rp_stat = VAR_0;
 VAR_5.acpted_rply.ar_verf = VAR_3->rq_verf;
 VAR_5.acpted_rply.ar_stat = VAR_2;

 if (VAR_4->xp_pool->sp_rcache)
  FUNC_0(VAR_4->xp_pool->sp_rcache,
      &VAR_5, FUNC_1(VAR_3), ((void*)0));

 FUNC_2(VAR_3, &VAR_5, ((void*)0));
}
