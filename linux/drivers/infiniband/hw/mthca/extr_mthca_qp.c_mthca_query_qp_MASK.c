
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ackto; int rnr_retry; int port_pkey; } ;
struct mthca_qp_context {int mtu_msgmax; TYPE_4__ alt_path; TYPE_4__ pri_path; int params1; int rnr_nextrecvpsn; int params2; int remote_qpn; int next_send_psn; int qkey; int flags; } ;
struct mthca_qp_param {struct mthca_qp_context context; } ;
struct TYPE_6__ {int max_gs; int max; } ;
struct TYPE_5__ {int max_gs; int max; } ;
struct mthca_qp {scalar_t__ state; scalar_t__ transport; int mutex; int sq_policy; int max_inline_data; TYPE_2__ rq; TYPE_1__ sq; int qpn; } ;
struct mthca_mailbox {struct mthca_qp_param* buf; } ;
struct mthca_dev {int dummy; } ;
struct TYPE_7__ {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {int sq_sig_type; TYPE_3__ cap; } ;
struct ib_qp_attr {scalar_t__ qp_state; int path_mtu; int qkey; int rq_psn; int sq_psn; int dest_qp_num; int alt_pkey_index; int pkey_index; int port_num; int sq_draining; int max_rd_atomic; int max_dest_rd_atomic; int min_rnr_timer; int timeout; int retry_cnt; int rnr_retry; int alt_timeout; scalar_t__ cur_qp_state; TYPE_3__ cap; int alt_ah_attr; int alt_port_num; int ah_attr; int qp_access_flags; int path_mig_state; } ;
struct ib_qp {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_2 ;
 int FUNC_1 (struct mthca_mailbox*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mthca_dev*,int ,int ,struct mthca_mailbox*) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_6 (struct mthca_dev*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 struct mthca_dev* FUNC_13 (int ) ;
 struct mthca_qp* FUNC_14 (struct ib_qp*) ;
 int FUNC_15 (struct mthca_dev*,int *,TYPE_4__*) ;

int FUNC_16(struct ib_qp *VAR_5, struct ib_qp_attr *VAR_6, int VAR_7,
     struct ib_qp_init_attr *VAR_8)
{
 struct mthca_dev *VAR_9 = FUNC_13(VAR_5->device);
 struct mthca_qp *VAR_10 = FUNC_14(VAR_5);
 int VAR_11 = 0;
 struct mthca_mailbox *VAR_12 = ((void*)0);
 struct mthca_qp_param *VAR_13;
 struct mthca_qp_context *VAR_14;
 int VAR_15;

 FUNC_7(&VAR_10->mutex);

 if (VAR_10->state == VAR_1) {
  VAR_6->qp_state = VAR_1;
  goto done;
 }

 VAR_12 = FUNC_4(VAR_9, VAR_0);
 if (FUNC_0(VAR_12)) {
  VAR_11 = FUNC_1(VAR_12);
  goto out;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_10->qpn, 0, VAR_12);
 if (VAR_11) {
  FUNC_6(VAR_9, "QUERY_QP failed (%d)\n", VAR_11);
  goto out_mailbox;
 }

 VAR_13 = VAR_12->buf;
 VAR_14 = &VAR_13->context;
 VAR_15 = FUNC_2(VAR_14->flags) >> 28;

 VAR_10->state = FUNC_12(VAR_15);
 VAR_6->qp_state = VAR_10->state;
 VAR_6->path_mtu = VAR_14->mtu_msgmax >> 5;
 VAR_6->path_mig_state =
  FUNC_10((FUNC_2(VAR_14->flags) >> 11) & 0x3);
 VAR_6->qkey = FUNC_2(VAR_14->qkey);
 VAR_6->rq_psn = FUNC_2(VAR_14->rnr_nextrecvpsn) & 0xffffff;
 VAR_6->sq_psn = FUNC_2(VAR_14->next_send_psn) & 0xffffff;
 VAR_6->dest_qp_num = FUNC_2(VAR_14->remote_qpn) & 0xffffff;
 VAR_6->qp_access_flags =
  FUNC_11(FUNC_2(VAR_14->params2));

 if (VAR_10->transport == VAR_3 || VAR_10->transport == VAR_4) {
  FUNC_15(VAR_9, &VAR_6->ah_attr, &VAR_14->pri_path);
  FUNC_15(VAR_9, &VAR_6->alt_ah_attr, &VAR_14->alt_path);
  VAR_6->alt_pkey_index =
   FUNC_2(VAR_14->alt_path.port_pkey) & 0x7f;
  VAR_6->alt_port_num =
   FUNC_9(&VAR_6->alt_ah_attr);
 }

 VAR_6->pkey_index = FUNC_2(VAR_14->pri_path.port_pkey) & 0x7f;
 VAR_6->port_num =
  (FUNC_2(VAR_14->pri_path.port_pkey) >> 24) & 0x3;


 VAR_6->sq_draining = VAR_15 == VAR_2;

 VAR_6->max_rd_atomic = 1 << ((FUNC_2(VAR_14->params1) >> 21) & 0x7);

 VAR_6->max_dest_rd_atomic =
  1 << ((FUNC_2(VAR_14->params2) >> 21) & 0x7);
 VAR_6->min_rnr_timer =
  (FUNC_2(VAR_14->rnr_nextrecvpsn) >> 24) & 0x1f;
 VAR_6->timeout = VAR_14->pri_path.ackto >> 3;
 VAR_6->retry_cnt = (FUNC_2(VAR_14->params1) >> 16) & 0x7;
 VAR_6->rnr_retry = VAR_14->pri_path.rnr_retry >> 5;
 VAR_6->alt_timeout = VAR_14->alt_path.ackto >> 3;

done:
 VAR_6->cur_qp_state = VAR_6->qp_state;
 VAR_6->cap.max_send_wr = VAR_10->sq.max;
 VAR_6->cap.max_recv_wr = VAR_10->rq.max;
 VAR_6->cap.max_send_sge = VAR_10->sq.max_gs;
 VAR_6->cap.max_recv_sge = VAR_10->rq.max_gs;
 VAR_6->cap.max_inline_data = VAR_10->max_inline_data;

 VAR_8->cap = VAR_6->cap;
 VAR_8->sq_sig_type = VAR_10->sq_policy;

out_mailbox:
 FUNC_5(VAR_9, VAR_12);

out:
 FUNC_8(&VAR_10->mutex);
 return VAR_11;
}
