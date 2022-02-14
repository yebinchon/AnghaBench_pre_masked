
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct svc_req {int rq_verf; int rq_xid; TYPE_5__* rq_xprt; } ;
struct TYPE_7__ {void* high; void* low; } ;
struct TYPE_8__ {TYPE_2__ ar_vers; int ar_stat; int ar_verf; } ;
struct TYPE_6__ {int rp_stat; } ;
struct rpc_msg {TYPE_3__ acpted_rply; TYPE_1__ rm_reply; int rm_direction; int rm_xid; } ;
typedef scalar_t__ rpcvers_t ;
struct TYPE_10__ {TYPE_4__* xp_pool; } ;
struct TYPE_9__ {scalar_t__ sp_rcache; } ;
typedef TYPE_5__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct rpc_msg*,int ,int *) ;
 int FUNC_1 (struct svc_req*) ;
 int FUNC_2 (struct svc_req*,struct rpc_msg*,int *) ;

void
FUNC_3(struct svc_req *VAR_3, rpcvers_t VAR_4, rpcvers_t VAR_5)
{
 SVCXPRT *VAR_6 = VAR_3->rq_xprt;
 struct rpc_msg VAR_7;

 VAR_7.rm_xid = VAR_3->rq_xid;
 VAR_7.rm_direction = VAR_2;
 VAR_7.rm_reply.rp_stat = VAR_0;
 VAR_7.acpted_rply.ar_verf = VAR_3->rq_verf;
 VAR_7.acpted_rply.ar_stat = VAR_1;
 VAR_7.acpted_rply.ar_vers.low = (uint32_t)VAR_4;
 VAR_7.acpted_rply.ar_vers.high = (uint32_t)VAR_5;

 if (VAR_6->xp_pool->sp_rcache)
  FUNC_0(VAR_6->xp_pool->sp_rcache,
      &VAR_7, FUNC_1(VAR_3), ((void*)0));

 FUNC_2(VAR_3, &VAR_7, ((void*)0));
}
