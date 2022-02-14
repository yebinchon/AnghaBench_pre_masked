
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ (* xdrproc_t ) (int *,void*) ;
struct svc_req {int rq_verf; int rq_xid; } ;
struct TYPE_5__ {scalar_t__ (* proc ) (int *,void*) ;int * where; } ;
struct TYPE_6__ {TYPE_2__ ar_results; int ar_stat; int ar_verf; } ;
struct TYPE_4__ {int rp_stat; } ;
struct rpc_msg {TYPE_3__ acpted_rply; TYPE_1__ rm_reply; int rm_direction; int rm_xid; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct mbuf*) ;
 struct mbuf* FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct svc_req*,struct rpc_msg*,struct mbuf*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,struct mbuf*,int ) ;

bool_t
FUNC_5(struct svc_req *VAR_8, xdrproc_t VAR_9, void * VAR_10)
{
 struct rpc_msg VAR_11;
 struct mbuf *VAR_12;
 XDR VAR_13;
 bool_t VAR_14;

 VAR_11.rm_xid = VAR_8->rq_xid;
 VAR_11.rm_direction = VAR_4;
 VAR_11.rm_reply.rp_stat = VAR_1;
 VAR_11.acpted_rply.ar_verf = VAR_8->rq_verf;
 VAR_11.acpted_rply.ar_stat = VAR_5;
 VAR_11.acpted_rply.ar_results.where = ((void*)0);
 VAR_11.acpted_rply.ar_results.proc = (xdrproc_t) VAR_7;

 VAR_12 = FUNC_2(VAR_3, VAR_2, 0);
 FUNC_4(&VAR_13, VAR_12, VAR_6);
 VAR_14 = VAR_9(&VAR_13, VAR_10);
 FUNC_0(&VAR_13);

 if (VAR_14) {
  return (FUNC_3(VAR_8, &VAR_11, VAR_12));
 } else {
  FUNC_1(VAR_12);
  return (VAR_0);
 }
}
