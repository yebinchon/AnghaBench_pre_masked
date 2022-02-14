
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_qp_params {int path_mtu_pkey_indx; int hop_lmt_rq_psn; int tclass_sq_psn; int ack_to_rnr_rtc_dest_qpn; int rnt_rc_sl_fl; int max_sge_recv_flags; int max_ord_ird; int * dgid; int qkey; } ;
struct TYPE_11__ {int max_sges; scalar_t__ max_cnt; } ;
struct TYPE_10__ {int max_sges; scalar_t__ max_cnt; } ;
struct ocrdma_qp {scalar_t__ qp_type; int sgid_idx; int max_inline_data; TYPE_2__ rq; TYPE_1__ sq; int cap_flags; } ;
struct ocrdma_dev {int dev_lock; } ;
struct TYPE_12__ {int max_inline_data; int max_recv_sge; int max_send_sge; scalar_t__ max_recv_wr; scalar_t__ max_send_wr; } ;
struct ib_qp_init_attr {TYPE_3__ cap; } ;
struct TYPE_13__ {int type; } ;
struct ib_qp_attr {int path_mtu; int rq_psn; int sq_psn; int dest_qp_num; int timeout; int rnr_retry; int retry_cnt; int port_num; int sq_draining; int max_dest_rd_atomic; int max_rd_atomic; int en_sqd_async_notify; int qp_state; int cur_qp_state; struct ocrdma_qp_params alt_ah_attr; scalar_t__ alt_timeout; scalar_t__ alt_port_num; scalar_t__ alt_pkey_index; TYPE_4__ ah_attr; scalar_t__ pkey_index; scalar_t__ min_rnr_timer; TYPE_3__ cap; int qp_access_flags; int path_mig_state; int qkey; } ;
struct ib_qp {int device; } ;
typedef int params ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 struct ocrdma_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (struct ocrdma_qp_params*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ocrdma_dev*,struct ocrdma_qp*,struct ocrdma_qp_params*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocrdma_qp*,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int *,int,int ,int,int) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*,int) ;
 int FUNC_15 (TYPE_4__*,int ) ;

int FUNC_16(struct ib_qp *VAR_27,
      struct ib_qp_attr *VAR_28,
      int VAR_29, struct ib_qp_init_attr *VAR_30)
{
 int VAR_31;
 u32 VAR_32;
 struct ocrdma_qp_params VAR_33;
 struct ocrdma_qp *VAR_34 = FUNC_2(VAR_27);
 struct ocrdma_dev *VAR_35 = FUNC_1(VAR_27->device);

 FUNC_3(&VAR_33, 0, sizeof(VAR_33));
 FUNC_4(&VAR_35->dev_lock);
 VAR_31 = FUNC_6(VAR_35, VAR_34, &VAR_33);
 FUNC_5(&VAR_35->dev_lock);
 if (VAR_31)
  goto mbx_err;
 if (VAR_34->qp_type == VAR_1)
  VAR_28->qkey = VAR_33.qkey;
 VAR_28->path_mtu =
  FUNC_7(VAR_33.path_mtu_pkey_indx &
    VAR_12) >>
    VAR_13;
 VAR_28->path_mig_state = VAR_0;
 VAR_28->rq_psn = VAR_33.hop_lmt_rq_psn & VAR_18;
 VAR_28->sq_psn = VAR_33.tclass_sq_psn & VAR_21;
 VAR_28->dest_qp_num =
     VAR_33.ack_to_rnr_rtc_dest_qpn & VAR_5;

 VAR_28->qp_access_flags = FUNC_9(VAR_34->cap_flags);
 VAR_28->cap.max_send_wr = VAR_34->sq.max_cnt - 1;
 VAR_28->cap.max_recv_wr = VAR_34->rq.max_cnt - 1;
 VAR_28->cap.max_send_sge = VAR_34->sq.max_sges;
 VAR_28->cap.max_recv_sge = VAR_34->rq.max_sges;
 VAR_28->cap.max_inline_data = VAR_34->max_inline_data;
 VAR_30->cap = VAR_28->cap;
 VAR_28->ah_attr.type = VAR_26;

 FUNC_11(&VAR_28->ah_attr, ((void*)0),
   VAR_33.rnt_rc_sl_fl &
     VAR_7,
   VAR_34->sgid_idx,
   (VAR_33.hop_lmt_rq_psn &
    VAR_8) >>
    VAR_9,
   (VAR_33.tclass_sq_psn &
    VAR_24) >>
    VAR_25);
 FUNC_10(&VAR_28->ah_attr, &VAR_33.dgid[0]);

 FUNC_13(&VAR_28->ah_attr, 1);
 FUNC_14(&VAR_28->ah_attr, (VAR_33.rnt_rc_sl_fl &
        VAR_19) >>
        VAR_20);
 VAR_28->timeout = (VAR_33.ack_to_rnr_rtc_dest_qpn &
       VAR_3) >>
    VAR_4;
 VAR_28->rnr_retry = (VAR_33.ack_to_rnr_rtc_dest_qpn &
         VAR_16) >>
    VAR_17;
 VAR_28->retry_cnt =
     (VAR_33.rnt_rc_sl_fl & VAR_14) >>
  VAR_15;
 VAR_28->min_rnr_timer = 0;
 VAR_28->pkey_index = 0;
 VAR_28->port_num = 1;
 FUNC_12(&VAR_28->ah_attr, 0);
 FUNC_15(&VAR_28->ah_attr, 0);
 VAR_28->alt_pkey_index = 0;
 VAR_28->alt_port_num = 0;
 VAR_28->alt_timeout = 0;
 FUNC_3(&VAR_28->alt_ah_attr, 0, sizeof(VAR_28->alt_ah_attr));
 VAR_32 = (VAR_33.max_sge_recv_flags & VAR_22) >>
      VAR_23;
 VAR_28->qp_state = FUNC_0(VAR_32);
 VAR_28->cur_qp_state = VAR_28->qp_state;
 VAR_28->sq_draining = (VAR_32 == VAR_2) ? 1 : 0;
 VAR_28->max_dest_rd_atomic =
     VAR_33.max_ord_ird >> VAR_11;
 VAR_28->max_rd_atomic =
     VAR_33.max_ord_ird & VAR_10;
 VAR_28->en_sqd_async_notify = (VAR_33.max_sge_recv_flags &
    VAR_6) ? 1 : 0;

 FUNC_8(VAR_34, VAR_28->qp_state, ((void*)0));
mbx_err:
 return VAR_31;
}
