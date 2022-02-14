
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int max_sge; TYPE_2__* queue; } ;
struct rxe_srq {int limit; TYPE_3__ rq; scalar_t__ error; } ;
struct ib_srq_attr {int srq_limit; int max_sge; int max_wr; } ;
struct ib_srq {int dummy; } ;
struct TYPE_5__ {TYPE_1__* buf; } ;
struct TYPE_4__ {int index_mask; } ;


 int VAR_0 ;
 struct rxe_srq* FUNC_0 (struct ib_srq*) ;

__attribute__((used)) static int FUNC_1(struct ib_srq *VAR_1, struct ib_srq_attr *VAR_2)
{
 struct rxe_srq *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->error)
  return -VAR_0;

 VAR_2->max_wr = VAR_3->rq.queue->buf->index_mask;
 VAR_2->max_sge = VAR_3->rq.max_sge;
 VAR_2->srq_limit = VAR_3->limit;
 return 0;
}
