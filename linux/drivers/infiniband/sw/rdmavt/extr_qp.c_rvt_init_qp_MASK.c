
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num_sge; } ;
struct TYPE_5__ {int size; TYPE_1__* kwq; } ;
struct rvt_qp {int s_ssn; int s_reserved_used; TYPE_3__ r_sge; TYPE_2__ r_rq; scalar_t__ s_num_rd_atomic; scalar_t__ s_acked_ack_queue; scalar_t__ s_tail_ack_queue; scalar_t__ r_head_ack_queue; int s_mig_state; scalar_t__ s_lsn; scalar_t__ s_last; scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ s_head; scalar_t__ r_flags; scalar_t__ r_aflags; scalar_t__ r_nak_state; int s_ack_state; void* r_state; void* s_state; scalar_t__ r_msn; scalar_t__ r_psn; scalar_t__ s_psn; scalar_t__ s_sending_hpsn; scalar_t__ s_sending_psn; scalar_t__ s_last_psn; scalar_t__ s_next_psn; scalar_t__ s_draining; int * s_wqe; scalar_t__ s_hdrwords; int s_flags; scalar_t__ qp_access_flags; scalar_t__ qkey; scalar_t__ remote_qpn; } ;
struct rvt_dev_info {int dummy; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_4__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct rvt_dev_info *VAR_6, struct rvt_qp *VAR_7,
   enum ib_qp_type VAR_8)
{
 VAR_7->remote_qpn = 0;
 VAR_7->qkey = 0;
 VAR_7->qp_access_flags = 0;
 VAR_7->s_flags &= VAR_5;
 VAR_7->s_hdrwords = 0;
 VAR_7->s_wqe = ((void*)0);
 VAR_7->s_draining = 0;
 VAR_7->s_next_psn = 0;
 VAR_7->s_last_psn = 0;
 VAR_7->s_sending_psn = 0;
 VAR_7->s_sending_hpsn = 0;
 VAR_7->s_psn = 0;
 VAR_7->r_psn = 0;
 VAR_7->r_msn = 0;
 if (VAR_8 == VAR_4) {
  VAR_7->s_state = VAR_2;
  VAR_7->r_state = VAR_2;
 } else {
  VAR_7->s_state = VAR_3;
  VAR_7->r_state = VAR_3;
 }
 VAR_7->s_ack_state = VAR_1;
 VAR_7->r_nak_state = 0;
 VAR_7->r_aflags = 0;
 VAR_7->r_flags = 0;
 VAR_7->s_head = 0;
 VAR_7->s_tail = 0;
 VAR_7->s_cur = 0;
 VAR_7->s_acked = 0;
 VAR_7->s_last = 0;
 VAR_7->s_ssn = 1;
 VAR_7->s_lsn = 0;
 VAR_7->s_mig_state = VAR_0;
 VAR_7->r_head_ack_queue = 0;
 VAR_7->s_tail_ack_queue = 0;
 VAR_7->s_acked_ack_queue = 0;
 VAR_7->s_num_rd_atomic = 0;
 if (VAR_7->r_rq.kwq)
  VAR_7->r_rq.kwq->count = VAR_7->r_rq.size;
 VAR_7->r_sge.num_sge = 0;
 FUNC_0(&VAR_7->s_reserved_used, 0);
}
