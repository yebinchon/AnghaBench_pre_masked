
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wq_pidx_inc; } ;
struct TYPE_6__ {scalar_t__ wq_pidx_inc; } ;
struct TYPE_7__ {TYPE_1__ rq; TYPE_2__ sq; } ;
struct c4iw_qp {int lock; TYPE_3__ wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_4(struct c4iw_qp *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 FUNC_3(&VAR_0->wq, VAR_0->wq.sq.wq_pidx_inc, ((void*)0));
 VAR_0->wq.sq.wq_pidx_inc = 0;
 FUNC_2(&VAR_0->wq, VAR_0->wq.rq.wq_pidx_inc, ((void*)0));
 VAR_0->wq.rq.wq_pidx_inc = 0;
 FUNC_1(&VAR_0->lock);
}
