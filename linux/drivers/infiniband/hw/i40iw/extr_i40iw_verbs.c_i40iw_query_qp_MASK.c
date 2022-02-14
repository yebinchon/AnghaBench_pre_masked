
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* max_recv_sge; void* max_send_sge; int max_inline_data; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {int port_num; TYPE_3__ cap; int srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct ib_qp_attr {int port_num; TYPE_3__ cap; scalar_t__ qp_access_flags; int qp_state; int cur_qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {int rq_size; int sq_size; } ;
struct i40iw_sc_qp {TYPE_1__ qp_uk; } ;
struct TYPE_5__ {int srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct i40iw_qp {TYPE_2__ ibqp; int ibqp_state; struct i40iw_sc_qp sc_qp; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct i40iw_qp* FUNC_0 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_1(struct ib_qp *VAR_2,
     struct ib_qp_attr *VAR_3,
     int VAR_4,
     struct ib_qp_init_attr *VAR_5)
{
 struct i40iw_qp *VAR_6 = FUNC_0(VAR_2);
 struct i40iw_sc_qp *VAR_7 = &VAR_6->sc_qp;

 VAR_3->qp_state = VAR_6->ibqp_state;
 VAR_3->cur_qp_state = VAR_3->qp_state;
 VAR_3->qp_access_flags = 0;
 VAR_3->cap.max_send_wr = VAR_7->qp_uk.sq_size;
 VAR_3->cap.max_recv_wr = VAR_7->qp_uk.rq_size;
 VAR_3->cap.max_inline_data = VAR_0;
 VAR_3->cap.max_send_sge = VAR_1;
 VAR_3->cap.max_recv_sge = VAR_1;
 VAR_3->port_num = 1;
 VAR_5->event_handler = VAR_6->ibqp.event_handler;
 VAR_5->qp_context = VAR_6->ibqp.qp_context;
 VAR_5->send_cq = VAR_6->ibqp.send_cq;
 VAR_5->recv_cq = VAR_6->ibqp.recv_cq;
 VAR_5->srq = VAR_6->ibqp.srq;
 VAR_5->cap = VAR_3->cap;
 VAR_5->port_num = 1;
 return 0;
}
