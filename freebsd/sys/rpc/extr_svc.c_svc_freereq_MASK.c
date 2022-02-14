
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ svc_ah_ops; } ;
struct svc_req {scalar_t__ rq_args; struct svc_req* rq_addr; scalar_t__ rq_xprt; TYPE_4__ rq_auth; TYPE_1__* rq_thread; } ;
struct TYPE_6__ {int (* sp_done ) (TYPE_1__*,struct svc_req*) ;} ;
struct TYPE_5__ {TYPE_2__* st_pool; } ;
typedef TYPE_1__ SVCTHREAD ;
typedef TYPE_2__ SVCPOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct svc_req*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,struct svc_req*) ;

void
FUNC_5(struct svc_req *VAR_2)
{
 SVCTHREAD *VAR_3;
 SVCPOOL *VAR_4;

 VAR_3 = VAR_2->rq_thread;
 if (VAR_3) {
  VAR_4 = VAR_3->st_pool;
  if (VAR_4->sp_done)
   VAR_4->sp_done(VAR_3, VAR_2);
 }

 if (VAR_2->rq_auth.svc_ah_ops)
  FUNC_0(&VAR_2->rq_auth);

 if (VAR_2->rq_xprt) {
  FUNC_1(VAR_2->rq_xprt);
 }

 if (VAR_2->rq_addr)
  FUNC_2(VAR_2->rq_addr, VAR_1);

 if (VAR_2->rq_args)
  FUNC_3(VAR_2->rq_args);

 FUNC_2(VAR_2, VAR_0);
}
