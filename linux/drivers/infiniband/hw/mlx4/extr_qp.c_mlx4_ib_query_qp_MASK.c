
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int pkey_index; int sched_queue; int ackto; } ;
struct mlx4_qp_context {int mtu_msgmax; TYPE_5__ alt_path; int params1; TYPE_5__ pri_path; int rnr_nextrecvpsn; int params2; int remote_qpn; int next_send_psn; int qkey; int flags; } ;
struct TYPE_8__ {int max_gs; int wqe_cnt; } ;
struct TYPE_7__ {int max_gs; int wqe_cnt; } ;
struct TYPE_6__ {scalar_t__ qp_type; } ;
struct mlx4_ib_qp {scalar_t__ state; int port; int flags; scalar_t__ sq_signal_bits; int mutex; TYPE_3__ sq; TYPE_2__ rq; TYPE_1__ ibqp; int mqp; } ;
struct mlx4_ib_dev {int dev; } ;
struct TYPE_9__ {scalar_t__ max_inline_data; int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct ib_qp_init_attr {int sq_sig_type; int create_flags; TYPE_4__ cap; } ;
struct ib_qp_attr {scalar_t__ qp_state; int path_mtu; int qkey; int rq_psn; int sq_psn; int dest_qp_num; int alt_pkey_index; int pkey_index; int port_num; int sq_draining; int max_rd_atomic; int max_dest_rd_atomic; int min_rnr_timer; int timeout; int retry_cnt; int rnr_retry; int alt_timeout; scalar_t__ cur_qp_state; TYPE_4__ cap; int alt_ah_attr; int alt_port_num; int ah_attr; int qp_access_flags; int path_mig_state; } ;
struct ib_qp {int uobject; scalar_t__ rwq_ind_tbl; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,struct mlx4_qp_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 struct mlx4_ib_dev* FUNC_9 (int ) ;
 struct mlx4_ib_qp* FUNC_10 (struct ib_qp*) ;
 int FUNC_11 (struct mlx4_ib_dev*,int *,TYPE_5__*) ;

int FUNC_12(struct ib_qp *VAR_16, struct ib_qp_attr *VAR_17, int VAR_18,
       struct ib_qp_init_attr *VAR_19)
{
 struct mlx4_ib_dev *VAR_20 = FUNC_9(VAR_16->device);
 struct mlx4_ib_qp *VAR_21 = FUNC_10(VAR_16);
 struct mlx4_qp_context VAR_22;
 int VAR_23;
 int VAR_24 = 0;

 if (VAR_16->rwq_ind_tbl)
  return -VAR_1;

 FUNC_3(&VAR_21->mutex);

 if (VAR_21->state == VAR_3) {
  VAR_17->qp_state = VAR_3;
  goto done;
 }

 VAR_24 = FUNC_2(VAR_20->dev, &VAR_21->mqp, &VAR_22);
 if (VAR_24) {
  VAR_24 = -VAR_0;
  goto out;
 }

 VAR_23 = FUNC_0(VAR_22.flags) >> 28;

 VAR_21->state = FUNC_8(VAR_23);
 VAR_17->qp_state = VAR_21->state;
 VAR_17->path_mtu = VAR_22.mtu_msgmax >> 5;
 VAR_17->path_mig_state =
  FUNC_6((FUNC_0(VAR_22.flags) >> 11) & 0x3);
 VAR_17->qkey = FUNC_0(VAR_22.qkey);
 VAR_17->rq_psn = FUNC_0(VAR_22.rnr_nextrecvpsn) & 0xffffff;
 VAR_17->sq_psn = FUNC_0(VAR_22.next_send_psn) & 0xffffff;
 VAR_17->dest_qp_num = FUNC_0(VAR_22.remote_qpn) & 0xffffff;
 VAR_17->qp_access_flags =
  FUNC_7(FUNC_0(VAR_22.params2));

 if (VAR_21->ibqp.qp_type == VAR_4 || VAR_21->ibqp.qp_type == VAR_5) {
  FUNC_11(VAR_20, &VAR_17->ah_attr, &VAR_22.pri_path);
  FUNC_11(VAR_20, &VAR_17->alt_ah_attr, &VAR_22.alt_path);
  VAR_17->alt_pkey_index = VAR_22.alt_path.pkey_index & 0x7f;
  VAR_17->alt_port_num =
   FUNC_5(&VAR_17->alt_ah_attr);
 }

 VAR_17->pkey_index = VAR_22.pri_path.pkey_index & 0x7f;
 if (VAR_17->qp_state == VAR_2)
  VAR_17->port_num = VAR_21->port;
 else
  VAR_17->port_num = VAR_22.pri_path.sched_queue & 0x40 ? 2 : 1;


 VAR_17->sq_draining = VAR_23 == VAR_14;

 VAR_17->max_rd_atomic = 1 << ((FUNC_0(VAR_22.params1) >> 21) & 0x7);

 VAR_17->max_dest_rd_atomic =
  1 << ((FUNC_0(VAR_22.params2) >> 21) & 0x7);
 VAR_17->min_rnr_timer =
  (FUNC_0(VAR_22.rnr_nextrecvpsn) >> 24) & 0x1f;
 VAR_17->timeout = VAR_22.pri_path.ackto >> 3;
 VAR_17->retry_cnt = (FUNC_0(VAR_22.params1) >> 16) & 0x7;
 VAR_17->rnr_retry = (FUNC_0(VAR_22.params1) >> 13) & 0x7;
 VAR_17->alt_timeout = VAR_22.alt_path.ackto >> 3;

done:
 VAR_17->cur_qp_state = VAR_17->qp_state;
 VAR_17->cap.max_recv_wr = VAR_21->rq.wqe_cnt;
 VAR_17->cap.max_recv_sge = VAR_21->rq.max_gs;

 if (!VAR_16->uobject) {
  VAR_17->cap.max_send_wr = VAR_21->sq.wqe_cnt;
  VAR_17->cap.max_send_sge = VAR_21->sq.max_gs;
 } else {
  VAR_17->cap.max_send_wr = 0;
  VAR_17->cap.max_send_sge = 0;
 }





 VAR_17->cap.max_inline_data = 0;

 VAR_19->cap = VAR_17->cap;

 VAR_19->create_flags = 0;
 if (VAR_21->flags & VAR_11)
  VAR_19->create_flags |= VAR_6;

 if (VAR_21->flags & VAR_12)
  VAR_19->create_flags |= VAR_7;

 if (VAR_21->flags & VAR_13)
  VAR_19->create_flags |= VAR_8;

 VAR_19->sq_sig_type =
  VAR_21->sq_signal_bits == FUNC_1(VAR_15) ?
  VAR_9 : VAR_10;

out:
 FUNC_4(&VAR_21->mutex);
 return VAR_24;
}
