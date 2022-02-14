
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_req {int * rq_addr; int rq_reply_seq; int rq_auth; int * rq_args; TYPE_2__* rq_xprt; } ;
struct rpc_msg {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int bool_t ;
struct TYPE_5__ {TYPE_1__* xp_pool; } ;
struct TYPE_4__ {scalar_t__ sp_rcache; } ;
typedef TYPE_2__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mbuf**) ;
 int FUNC_1 (TYPE_2__*,struct rpc_msg*,int *,struct mbuf*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,struct rpc_msg*,int ,struct mbuf*) ;
 int FUNC_5 (struct svc_req*) ;

__attribute__((used)) static bool_t
FUNC_6(struct svc_req *VAR_2, struct rpc_msg *VAR_3,
    struct mbuf *VAR_4)
{
 SVCXPRT *VAR_5 = VAR_2->rq_xprt;
 bool_t VAR_6;

 if (VAR_2->rq_args) {
  FUNC_3(VAR_2->rq_args);
  VAR_2->rq_args = ((void*)0);
 }

 if (VAR_5->xp_pool->sp_rcache)
  FUNC_4(VAR_5->xp_pool->sp_rcache,
      VAR_3, FUNC_5(VAR_2), VAR_4);

 if (!FUNC_0(&VAR_2->rq_auth, &VAR_4))
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_2->rq_addr, VAR_4, &VAR_2->rq_reply_seq);
 if (VAR_2->rq_addr) {
  FUNC_2(VAR_2->rq_addr, VAR_1);
  VAR_2->rq_addr = ((void*)0);
 }

 return (VAR_6);
}
