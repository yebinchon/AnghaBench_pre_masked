
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


typedef void* u8 ;
typedef scalar_t__ u32 ;
struct TYPE_12__ {int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct TYPE_13__ {int type; } ;
struct ib_qp_init_attr {int qp_state; int path_mtu; int rq_psn; int qp_access_flags; int max_rd_atomic; int max_dest_rd_atomic; int retry_cnt; int cur_qp_state; TYPE_5__ cap; int rnr_retry; void* timeout; void* min_rnr_timer; scalar_t__ sq_draining; scalar_t__ port_num; TYPE_6__ ah_attr; void* dest_qp_num; scalar_t__ sq_psn; int qkey; int path_mig_state; } ;
struct ib_qp_attr {int qp_state; int path_mtu; int rq_psn; int qp_access_flags; int max_rd_atomic; int max_dest_rd_atomic; int retry_cnt; int cur_qp_state; TYPE_5__ cap; int rnr_retry; void* timeout; void* min_rnr_timer; scalar_t__ sq_draining; scalar_t__ port_num; TYPE_6__ ah_attr; void* dest_qp_num; scalar_t__ sq_psn; int qkey; int path_mig_state; } ;
struct ib_qp {int uobject; int device; } ;
struct TYPE_9__ {int raw; } ;
struct ib_global_route {int flow_label; int sgid_index; int hop_limit; int traffic_class; TYPE_2__ dgid; } ;
struct hns_roce_v2_qp_context {int rq_rnr_timer; int byte_212_lsn; int byte_28_at_fl; int byte_80_rnr_rx_cqn; int byte_140_raq; int byte_208_irrl; int dgid; int byte_24_mtu_tc; int byte_20_smac_sgid_idx; int byte_76_srqn_op_en; int byte_56_dqpn_err; int byte_172_sq_psn; int byte_108_rx_reqepsn; int byte_60_qpst_tempid; } ;
struct TYPE_11__ {int max_gs; int wqe_cnt; } ;
struct TYPE_10__ {int max_gs; int wqe_cnt; } ;
struct TYPE_8__ {scalar_t__ qp_type; } ;
struct hns_roce_qp {int state; int mutex; TYPE_4__ sq; TYPE_3__ rq; scalar_t__ port; TYPE_1__ ibqp; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
typedef enum hns_roce_v2_qp_state { ____Placeholder_hns_roce_v2_qp_state } hns_roce_v2_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_qp*,struct hns_roce_v2_qp_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ib_global_route* FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 struct hns_roce_dev* FUNC_11 (int ) ;
 struct hns_roce_qp* FUNC_12 (struct ib_qp*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct ib_qp *VAR_44, struct ib_qp_attr *VAR_45,
    int VAR_46,
    struct ib_qp_init_attr *VAR_47)
{
 struct hns_roce_dev *VAR_48 = FUNC_11(VAR_44->device);
 struct hns_roce_qp *VAR_49 = FUNC_12(VAR_44);
 struct hns_roce_v2_qp_context VAR_50 = {};
 struct device *VAR_51 = VAR_48->dev;
 int VAR_52;
 int VAR_53;
 int VAR_54;

 FUNC_4(VAR_45, 0, sizeof(*VAR_45));
 FUNC_4(VAR_47, 0, sizeof(*VAR_47));

 FUNC_5(&VAR_49->mutex);

 if (VAR_49->state == VAR_2) {
  VAR_45->qp_state = VAR_2;
  VAR_54 = 0;
  goto done;
 }

 VAR_54 = FUNC_1(VAR_48, VAR_49, &VAR_50);
 if (VAR_54) {
  FUNC_0(VAR_51, "query qpc error\n");
  VAR_54 = -VAR_0;
  goto out;
 }

 VAR_53 = FUNC_10(VAR_50.byte_60_qpst_tempid,
          VAR_34, VAR_35);
 VAR_52 = FUNC_13((enum hns_roce_v2_qp_state)VAR_53);
 if (VAR_52 == -1) {
  FUNC_0(VAR_51, "Illegal ib_qp_state\n");
  VAR_54 = -VAR_0;
  goto out;
 }
 VAR_49->state = (u8)VAR_52;
 VAR_45->qp_state = (enum ib_qp_state)VAR_49->state;
 VAR_45->path_mtu = (enum ib_mtu)FUNC_10(VAR_50.byte_24_mtu_tc,
       VAR_22,
       VAR_23);
 VAR_45->path_mig_state = VAR_1;
 VAR_45->ah_attr.type = VAR_6;
 if (VAR_49->ibqp.qp_type == VAR_5)
  VAR_45->qkey = VAR_7;

 VAR_45->rq_psn = FUNC_10(VAR_50.byte_108_rx_reqepsn,
      VAR_8,
      VAR_9);
 VAR_45->sq_psn = (u32)FUNC_10(VAR_50.byte_172_sq_psn,
           VAR_12,
           VAR_13);
 VAR_45->dest_qp_num = (u8)FUNC_10(VAR_50.byte_56_dqpn_err,
        VAR_32,
        VAR_33);
 VAR_45->qp_access_flags = ((FUNC_9(VAR_50.byte_76_srqn_op_en,
        VAR_37)) << VAR_42) |
        ((FUNC_9(VAR_50.byte_76_srqn_op_en,
        VAR_38)) << VAR_43) |
        ((FUNC_9(VAR_50.byte_76_srqn_op_en,
        VAR_36)) << VAR_41);

 if (VAR_49->ibqp.qp_type == VAR_3 ||
     VAR_49->ibqp.qp_type == VAR_4) {
  struct ib_global_route *VAR_55 =
    FUNC_7(&VAR_45->ah_attr);

  FUNC_8(&VAR_45->ah_attr,
          FUNC_10(VAR_50.byte_28_at_fl,
           VAR_30,
           VAR_31));
  VAR_55->flow_label = FUNC_10(VAR_50.byte_28_at_fl,
       VAR_28,
       VAR_29);
  VAR_55->sgid_index = FUNC_10(VAR_50.byte_20_smac_sgid_idx,
       VAR_16,
       VAR_17);
  VAR_55->hop_limit = FUNC_10(VAR_50.byte_24_mtu_tc,
      VAR_20,
      VAR_21);
  VAR_55->traffic_class = FUNC_10(VAR_50.byte_24_mtu_tc,
          VAR_24,
          VAR_25);

  FUNC_3(VAR_55->dgid.raw, VAR_50.dgid, sizeof(VAR_55->dgid.raw));
 }

 VAR_45->port_num = VAR_49->port + 1;
 VAR_45->sq_draining = 0;
 VAR_45->max_rd_atomic = 1 << FUNC_10(VAR_50.byte_208_irrl,
           VAR_14,
           VAR_15);
 VAR_45->max_dest_rd_atomic = 1 << FUNC_10(VAR_50.byte_140_raq,
           VAR_10,
           VAR_11);
 VAR_45->min_rnr_timer = (u8)FUNC_10(VAR_50.byte_80_rnr_rx_cqn,
       VAR_39,
       VAR_40);
 VAR_45->timeout = (u8)FUNC_10(VAR_50.byte_28_at_fl,
           VAR_26,
           VAR_27);
 VAR_45->retry_cnt = FUNC_10(VAR_50.byte_212_lsn,
         VAR_18,
         VAR_19);
 VAR_45->rnr_retry = FUNC_2(VAR_50.rq_rnr_timer);

done:
 VAR_45->cur_qp_state = VAR_45->qp_state;
 VAR_45->cap.max_recv_wr = VAR_49->rq.wqe_cnt;
 VAR_45->cap.max_recv_sge = VAR_49->rq.max_gs;

 if (!VAR_44->uobject) {
  VAR_45->cap.max_send_wr = VAR_49->sq.wqe_cnt;
  VAR_45->cap.max_send_sge = VAR_49->sq.max_gs;
 } else {
  VAR_45->cap.max_send_wr = 0;
  VAR_45->cap.max_send_sge = 0;
 }

 VAR_47->cap = VAR_45->cap;

out:
 FUNC_6(&VAR_49->mutex);
 return VAR_54;
}
