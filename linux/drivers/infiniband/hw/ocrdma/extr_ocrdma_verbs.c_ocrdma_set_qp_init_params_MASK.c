
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_sges; } ;
struct TYPE_4__ {int max_sges; } ;
struct ocrdma_qp {int cap_flags; int signaled; int state; TYPE_2__ rq; TYPE_1__ sq; int max_inline_data; int qp_type; int rq_entry; int sq_entry; int q_lock; struct ocrdma_pd* pd; } ;
struct ocrdma_pd {int dummy; } ;
struct TYPE_6__ {int max_recv_sge; int max_send_sge; int max_inline_data; } ;
struct ib_qp_init_attr {scalar_t__ sq_sig_type; TYPE_3__ cap; int qp_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_qp *VAR_4,
          struct ocrdma_pd *VAR_5,
          struct ib_qp_init_attr *VAR_6)
{
 VAR_4->pd = VAR_5;
 FUNC_1(&VAR_4->q_lock);
 FUNC_0(&VAR_4->sq_entry);
 FUNC_0(&VAR_4->rq_entry);

 VAR_4->qp_type = VAR_6->qp_type;
 VAR_4->cap_flags = VAR_2 | VAR_3;
 VAR_4->max_inline_data = VAR_6->cap.max_inline_data;
 VAR_4->sq.max_sges = VAR_6->cap.max_send_sge;
 VAR_4->rq.max_sges = VAR_6->cap.max_recv_sge;
 VAR_4->state = VAR_1;
 VAR_4->signaled = (VAR_6->sq_sig_type == VAR_0) ? 1 : 0;
}
