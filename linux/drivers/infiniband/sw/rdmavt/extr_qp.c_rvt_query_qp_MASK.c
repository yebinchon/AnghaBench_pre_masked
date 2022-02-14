
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int qp_type; scalar_t__ srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct TYPE_8__ {int size; int max_sge; } ;
struct rvt_qp {int r_psn; int s_next_psn; int s_size; int s_flags; int port_num; TYPE_5__ ibqp; int alt_timeout; int alt_ah_attr; int s_rnr_retry_cnt; int s_retry_cnt; int timeout; int r_min_rnr_timer; int r_max_rd_atomic; int s_max_rd_atomic; int s_draining; int s_alt_pkey_index; int s_pkey_index; int remote_ah_attr; TYPE_3__ r_rq; int s_max_sge; int qp_access_flags; int remote_qpn; int qkey; int s_mig_state; int pmtu; int state; } ;
struct TYPE_7__ {int psn_mask; int reserved_operations; } ;
struct TYPE_6__ {int (* mtu_to_path_mtu ) (int ) ;} ;
struct rvt_dev_info {TYPE_2__ dparms; TYPE_1__ driver_f; } ;
struct TYPE_9__ {int max_send_wr; int max_recv_wr; scalar_t__ max_inline_data; int max_recv_sge; int max_send_sge; } ;
struct ib_qp_init_attr {int port_num; int qp_type; int sq_sig_type; TYPE_4__ cap; scalar_t__ srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct ib_qp_attr {int rq_psn; int sq_psn; TYPE_4__ cap; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; scalar_t__ en_sqd_async_notify; int alt_pkey_index; int pkey_index; int alt_ah_attr; int ah_attr; int qp_access_flags; int dest_qp_num; int qkey; int path_mig_state; int path_mtu; int qp_state; int cur_qp_state; } ;
struct ib_qp {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct ib_qp *VAR_3, struct ib_qp_attr *VAR_4,
   int VAR_5, struct ib_qp_init_attr *VAR_6)
{
 struct rvt_qp *VAR_7 = FUNC_1(VAR_3);
 struct rvt_dev_info *VAR_8 = FUNC_0(VAR_3->device);

 VAR_4->qp_state = VAR_7->state;
 VAR_4->cur_qp_state = VAR_4->qp_state;
 VAR_4->path_mtu = VAR_8->driver_f.mtu_to_path_mtu(VAR_7->pmtu);
 VAR_4->path_mig_state = VAR_7->s_mig_state;
 VAR_4->qkey = VAR_7->qkey;
 VAR_4->rq_psn = VAR_7->r_psn & VAR_8->dparms.psn_mask;
 VAR_4->sq_psn = VAR_7->s_next_psn & VAR_8->dparms.psn_mask;
 VAR_4->dest_qp_num = VAR_7->remote_qpn;
 VAR_4->qp_access_flags = VAR_7->qp_access_flags;
 VAR_4->cap.max_send_wr = VAR_7->s_size - 1 -
  VAR_8->dparms.reserved_operations;
 VAR_4->cap.max_recv_wr = VAR_7->ibqp.srq ? 0 : VAR_7->r_rq.size - 1;
 VAR_4->cap.max_send_sge = VAR_7->s_max_sge;
 VAR_4->cap.max_recv_sge = VAR_7->r_rq.max_sge;
 VAR_4->cap.max_inline_data = 0;
 VAR_4->ah_attr = VAR_7->remote_ah_attr;
 VAR_4->alt_ah_attr = VAR_7->alt_ah_attr;
 VAR_4->pkey_index = VAR_7->s_pkey_index;
 VAR_4->alt_pkey_index = VAR_7->s_alt_pkey_index;
 VAR_4->en_sqd_async_notify = 0;
 VAR_4->sq_draining = VAR_7->s_draining;
 VAR_4->max_rd_atomic = VAR_7->s_max_rd_atomic;
 VAR_4->max_dest_rd_atomic = VAR_7->r_max_rd_atomic;
 VAR_4->min_rnr_timer = VAR_7->r_min_rnr_timer;
 VAR_4->port_num = VAR_7->port_num;
 VAR_4->timeout = VAR_7->timeout;
 VAR_4->retry_cnt = VAR_7->s_retry_cnt;
 VAR_4->rnr_retry = VAR_7->s_rnr_retry_cnt;
 VAR_4->alt_port_num =
  FUNC_2(&VAR_7->alt_ah_attr);
 VAR_4->alt_timeout = VAR_7->alt_timeout;

 VAR_6->event_handler = VAR_7->ibqp.event_handler;
 VAR_6->qp_context = VAR_7->ibqp.qp_context;
 VAR_6->send_cq = VAR_7->ibqp.send_cq;
 VAR_6->recv_cq = VAR_7->ibqp.recv_cq;
 VAR_6->srq = VAR_7->ibqp.srq;
 VAR_6->cap = VAR_4->cap;
 if (VAR_7->s_flags & VAR_2)
  VAR_6->sq_sig_type = VAR_1;
 else
  VAR_6->sq_sig_type = VAR_0;
 VAR_6->qp_type = VAR_7->ibqp.qp_type;
 VAR_6->port_num = VAR_7->port_num;
 return 0;
}
