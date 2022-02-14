
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct send_context {int sw_index; } ;
struct sdma_engine {int this_idx; } ;
struct TYPE_8__ {int opcode; } ;
struct rvt_swqe {int ssn; TYPE_1__ wr; } ;
struct TYPE_10__ {int size; } ;
struct rvt_srq {TYPE_3__ rq; } ;
struct rvt_qp_iter {int n; struct rvt_qp* qp; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_9__ {size_t qp_type; int send_cq; int device; int qp_num; int srq; } ;
struct rvt_qp {size_t s_tail_ack_queue; TYPE_4__ r_rq; int r_min_rnr_timer; int s_ack_state; int s_state; int pid; TYPE_2__ ibqp; int s_rnr_retry; int s_rnr_retry_cnt; int s_retry_cnt; int s_retry; int pmtu; int remote_ah_attr; int remote_qpn; int r_head_ack_queue; int s_avail; int s_size; int s_head; int s_tail; int s_cur; int s_acked; int s_last; int r_psn; int s_sending_hpsn; int s_sending_psn; int s_next_psn; int s_psn; int s_last_psn; int s_lsn; int timeout; int s_flags; int state; int refcount; struct rvt_ack_entry* s_ack_queue; struct hfi1_qp_priv* priv; } ;
struct rvt_ack_entry {int lpsn; int psn; int opcode; } ;
struct TYPE_13__ {int list; } ;
struct hfi1_qp_priv {TYPE_6__ s_iowait; int s_sc; } ;
struct TYPE_12__ {int rdi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rvt_srq* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct rvt_qp*) ;
 struct sdma_engine* FUNC_8 (struct rvt_qp*,int ) ;
 struct send_context* FUNC_9 (struct rvt_qp*,int ) ;
 int * VAR_0 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct rvt_swqe* FUNC_12 (struct rvt_qp*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct seq_file*,char*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,size_t,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,struct sdma_engine*,int ,struct send_context*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*,int ) ;
 TYPE_5__* FUNC_15 (int ) ;

void FUNC_16(struct seq_file *VAR_1, struct rvt_qp_iter *VAR_2)
{
 struct rvt_swqe *VAR_3;
 struct rvt_qp *VAR_4 = VAR_2->qp;
 struct hfi1_qp_priv *VAR_5 = VAR_4->priv;
 struct sdma_engine *VAR_6;
 struct send_context *VAR_7;
 struct rvt_ack_entry *VAR_8 = ((void*)0);
 struct rvt_srq *VAR_9 = VAR_4->ibqp.srq ?
  FUNC_3(VAR_4->ibqp.srq) : ((void*)0);

 VAR_6 = FUNC_8(VAR_4, VAR_5->s_sc);
 VAR_3 = FUNC_12(VAR_4, VAR_4->s_last);
 VAR_7 = FUNC_9(VAR_4, VAR_5->s_sc);
 if (VAR_4->s_ack_queue)
  VAR_8 = &VAR_4->s_ack_queue[VAR_4->s_tail_ack_queue];
 FUNC_14(VAR_1,
     "N %d %s QP %x R %u %s %u %u f=%x %u %u %u %u %u %u SPSN %x %x %x %x %x RPSN %x S(%u %u %u %u %u %u %u) R(%u %u %u) RQP %x LID %x SL %u MTU %u %u %u %u %u SDE %p,%u SC %p,%u SCQ %u %u PID %d OS %x %x E %x %x %x RNR %d %s %d\n",
     VAR_2->n,
     FUNC_7(VAR_4) ? "I" : "B",
     VAR_4->ibqp.qp_num,
     FUNC_0(&VAR_4->refcount),
     VAR_0[VAR_4->ibqp.qp_type],
     VAR_4->state,
     VAR_3 ? VAR_3->wr.opcode : 0,
     VAR_4->s_flags,
     FUNC_5(&VAR_5->s_iowait),
     FUNC_4(&VAR_5->s_iowait),
     !FUNC_6(&VAR_5->s_iowait.list),
     VAR_4->timeout,
     VAR_3 ? VAR_3->ssn : 0,
     VAR_4->s_lsn,
     VAR_4->s_last_psn,
     VAR_4->s_psn, VAR_4->s_next_psn,
     VAR_4->s_sending_psn, VAR_4->s_sending_hpsn,
     VAR_4->r_psn,
     VAR_4->s_last, VAR_4->s_acked, VAR_4->s_cur,
     VAR_4->s_tail, VAR_4->s_head, VAR_4->s_size,
     VAR_4->s_avail,

     VAR_4->s_tail_ack_queue, VAR_4->r_head_ack_queue,
     FUNC_13(&FUNC_15(VAR_4->ibqp.device)->rdi),

     VAR_4->remote_qpn,
     FUNC_10(&VAR_4->remote_ah_attr),
     FUNC_11(&VAR_4->remote_ah_attr),
     VAR_4->pmtu,
     VAR_4->s_retry,
     VAR_4->s_retry_cnt,
     VAR_4->s_rnr_retry_cnt,
     VAR_4->s_rnr_retry,
     VAR_6,
     VAR_6 ? VAR_6->this_idx : 0,
     VAR_7,
     VAR_7 ? VAR_7->sw_index : 0,
     FUNC_1(VAR_4->ibqp.send_cq),
     FUNC_2(VAR_4->ibqp.send_cq),
     VAR_4->pid,
     VAR_4->s_state,
     VAR_4->s_ack_state,

     VAR_8 ? VAR_8->opcode : 0,
     VAR_8 ? VAR_8->psn : 0,
     VAR_8 ? VAR_8->lpsn : 0,
     VAR_4->r_min_rnr_timer,
     VAR_9 ? "SRQ" : "RQ",
     VAR_9 ? VAR_9->rq.size : VAR_4->r_rq.size
  );
}
