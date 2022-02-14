
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int qp_type; int srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct TYPE_7__ {int max_sge; int max_wr; } ;
struct TYPE_5__ {int max_inline; int max_sge; int max_wr; } ;
struct rxe_qp {TYPE_4__ ibqp; int sq_sig_type; TYPE_3__ rq; int srq; TYPE_1__ sq; } ;
struct TYPE_6__ {int max_recv_sge; int max_recv_wr; int max_inline_data; int max_send_sge; int max_send_wr; } ;
struct ib_qp_init_attr {int port_num; int qp_type; int sq_sig_type; TYPE_2__ cap; int srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;



int FUNC_0(struct rxe_qp *VAR_0, struct ib_qp_init_attr *VAR_1)
{
 VAR_1->event_handler = VAR_0->ibqp.event_handler;
 VAR_1->qp_context = VAR_0->ibqp.qp_context;
 VAR_1->send_cq = VAR_0->ibqp.send_cq;
 VAR_1->recv_cq = VAR_0->ibqp.recv_cq;
 VAR_1->srq = VAR_0->ibqp.srq;

 VAR_1->cap.max_send_wr = VAR_0->sq.max_wr;
 VAR_1->cap.max_send_sge = VAR_0->sq.max_sge;
 VAR_1->cap.max_inline_data = VAR_0->sq.max_inline;

 if (!VAR_0->srq) {
  VAR_1->cap.max_recv_wr = VAR_0->rq.max_wr;
  VAR_1->cap.max_recv_sge = VAR_0->rq.max_sge;
 }

 VAR_1->sq_sig_type = VAR_0->sq_sig_type;

 VAR_1->qp_type = VAR_0->ibqp.qp_type;
 VAR_1->port_num = 1;

 return 0;
}
