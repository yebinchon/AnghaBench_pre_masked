
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xdrproc_t ;
struct svc_req {int rq_verf; int rq_xid; } ;
struct TYPE_4__ {scalar_t__ proc; int * where; } ;
struct TYPE_6__ {TYPE_1__ ar_results; int ar_stat; int ar_verf; } ;
struct TYPE_5__ {int rp_stat; } ;
struct rpc_msg {TYPE_3__ acpted_rply; TYPE_2__ rm_reply; int rm_direction; int rm_xid; } ;
struct mbuf {int dummy; } ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_req*,struct rpc_msg*,struct mbuf*) ;
 scalar_t__ VAR_3 ;

bool_t
FUNC_1(struct svc_req *VAR_4, struct mbuf *VAR_5)
{
 struct rpc_msg VAR_6;

 VAR_6.rm_xid = VAR_4->rq_xid;
 VAR_6.rm_direction = VAR_1;
 VAR_6.rm_reply.rp_stat = VAR_0;
 VAR_6.acpted_rply.ar_verf = VAR_4->rq_verf;
 VAR_6.acpted_rply.ar_stat = VAR_2;
 VAR_6.acpted_rply.ar_results.where = ((void*)0);
 VAR_6.acpted_rply.ar_results.proc = (xdrproc_t) VAR_3;

 return (FUNC_0(VAR_4, &VAR_6, VAR_5));
}
