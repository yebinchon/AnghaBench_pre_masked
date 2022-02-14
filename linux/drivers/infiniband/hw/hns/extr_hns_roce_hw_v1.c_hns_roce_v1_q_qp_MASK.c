
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
struct TYPE_12__ {int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct TYPE_16__ {int type; } ;
struct ib_qp_init_attr {int qp_state; int path_mtu; int rq_psn; int qp_access_flags; int pkey_index; int max_rd_atomic; int max_dest_rd_atomic; int retry_cnt; int cur_qp_state; TYPE_3__ cap; void* rnr_retry; void* timeout; void* min_rnr_timer; scalar_t__ sq_draining; scalar_t__ port_num; TYPE_7__ ah_attr; void* dest_qp_num; scalar_t__ sq_psn; int qkey; int path_mig_state; } ;
struct ib_qp_attr {int qp_state; int path_mtu; int rq_psn; int qp_access_flags; int pkey_index; int max_rd_atomic; int max_dest_rd_atomic; int retry_cnt; int cur_qp_state; TYPE_3__ cap; void* rnr_retry; void* timeout; void* min_rnr_timer; scalar_t__ sq_draining; scalar_t__ port_num; TYPE_7__ ah_attr; void* dest_qp_num; scalar_t__ sq_psn; int qkey; int path_mig_state; } ;
struct ib_qp {int uobject; int device; } ;
struct TYPE_15__ {int raw; } ;
struct ib_global_route {int flow_label; int sgid_index; int hop_limit; int traffic_class; TYPE_6__ dgid; } ;
struct hns_roce_qp_context {int rnr_retry; int qpc_bytes_148; int qpc_bytes_156; int qpc_bytes_24; int qpc_bytes_32; int qpc_bytes_12; int dgid; int qpc_bytes_48; int qpc_bytes_44; int qpc_bytes_36; int qpc_bytes_4; int qpc_bytes_164; int qpc_bytes_88; int qpc_bytes_144; } ;
struct TYPE_11__ {int max_gs; int wqe_cnt; } ;
struct TYPE_10__ {int max_gs; int wqe_cnt; } ;
struct TYPE_14__ {scalar_t__ qp_type; } ;
struct hns_roce_qp {int state; int mutex; TYPE_2__ sq; TYPE_1__ rq; scalar_t__ port; TYPE_5__ ibqp; } ;
struct hns_roce_dev {TYPE_4__* pdev; } ;
struct device {int dummy; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
typedef enum hns_roce_qp_state { ____Placeholder_hns_roce_qp_state } hns_roce_qp_state ;
struct TYPE_13__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_qp*,struct hns_roce_qp_context*) ;
 int FUNC_2 (struct hns_roce_qp_context*) ;
 struct hns_roce_qp_context* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ib_global_route* FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*,int ) ;
 int FUNC_11 (TYPE_7__*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 struct hns_roce_dev* FUNC_14 (int ) ;
 struct hns_roce_qp* FUNC_15 (struct ib_qp*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct ib_qp *VAR_46, struct ib_qp_attr *VAR_47,
       int VAR_48,
       struct ib_qp_init_attr *VAR_49)
{
 struct hns_roce_dev *VAR_50 = FUNC_14(VAR_46->device);
 struct hns_roce_qp *VAR_51 = FUNC_15(VAR_46);
 struct device *VAR_52 = &VAR_50->pdev->dev;
 struct hns_roce_qp_context *VAR_53;
 int VAR_54 = 0;
 int VAR_55 = 0;
 int VAR_56;

 VAR_53 = FUNC_3(sizeof(*VAR_53), VAR_2);
 if (!VAR_53)
  return -VAR_1;

 FUNC_6(VAR_47, 0, sizeof(*VAR_47));
 FUNC_6(VAR_49, 0, sizeof(*VAR_49));

 FUNC_7(&VAR_51->mutex);

 if (VAR_51->state == VAR_5) {
  VAR_47->qp_state = VAR_5;
  goto done;
 }

 VAR_55 = FUNC_1(VAR_50, VAR_51, VAR_53);
 if (VAR_55) {
  FUNC_0(VAR_52, "query qpc error\n");
  VAR_55 = -VAR_0;
  goto out;
 }

 VAR_56 = FUNC_13(VAR_53->qpc_bytes_144,
          VAR_12,
          VAR_13);
 VAR_54 = (int)FUNC_16((enum hns_roce_qp_state)VAR_56);
 if (VAR_54 == -1) {
  FUNC_0(VAR_52, "to_ib_qp_state error\n");
  VAR_55 = -VAR_0;
  goto out;
 }
 VAR_51->state = (u8)VAR_54;
 VAR_47->qp_state = (enum ib_qp_state)VAR_51->state;
 VAR_47->path_mtu = (enum ib_mtu)FUNC_13(VAR_53->qpc_bytes_48,
            VAR_36,
            VAR_37);
 VAR_47->path_mig_state = VAR_4;
 VAR_47->ah_attr.type = VAR_45;
 if (VAR_51->ibqp.qp_type == VAR_8)
  VAR_47->qkey = VAR_9;

 VAR_47->rq_psn = FUNC_13(VAR_53->qpc_bytes_88,
      VAR_40,
      VAR_41);
 VAR_47->sq_psn = (u32)FUNC_13(VAR_53->qpc_bytes_164,
          VAR_22,
          VAR_23);
 VAR_47->dest_qp_num = (u8)FUNC_13(VAR_53->qpc_bytes_36,
     VAR_28,
     VAR_29);
 VAR_47->qp_access_flags = ((FUNC_12(VAR_53->qpc_bytes_4,
   VAR_43)) << 2) |
       ((FUNC_12(VAR_53->qpc_bytes_4,
   VAR_44)) << 1) |
       ((FUNC_12(VAR_53->qpc_bytes_4,
   VAR_42)) << 3);

 if (VAR_51->ibqp.qp_type == VAR_6 ||
     VAR_51->ibqp.qp_type == VAR_7) {
  struct ib_global_route *VAR_57 =
   FUNC_9(&VAR_47->ah_attr);

  FUNC_11(&VAR_47->ah_attr,
          FUNC_13(VAR_53->qpc_bytes_156,
           VAR_20,
           VAR_21));
  FUNC_10(&VAR_47->ah_attr, VAR_3);
  VAR_57->flow_label =
   FUNC_13(VAR_53->qpc_bytes_48,
           VAR_34,
           VAR_35);
  VAR_57->sgid_index =
   FUNC_13(VAR_53->qpc_bytes_36,
           VAR_30,
           VAR_31);
  VAR_57->hop_limit =
   FUNC_13(VAR_53->qpc_bytes_44,
           VAR_32,
           VAR_33);
  VAR_57->traffic_class =
   FUNC_13(VAR_53->qpc_bytes_48,
           VAR_38,
           VAR_39);

  FUNC_5(VAR_57->dgid.raw, VAR_53->dgid,
         sizeof(VAR_57->dgid.raw));
 }

 VAR_47->pkey_index = FUNC_13(VAR_53->qpc_bytes_12,
         VAR_10,
         VAR_11);
 VAR_47->port_num = VAR_51->port + 1;
 VAR_47->sq_draining = 0;
 VAR_47->max_rd_atomic = 1 << FUNC_13(VAR_53->qpc_bytes_156,
     VAR_18,
     VAR_19);
 VAR_47->max_dest_rd_atomic = 1 << FUNC_13(VAR_53->qpc_bytes_32,
     VAR_26,
     VAR_27);
 VAR_47->min_rnr_timer = (u8)(FUNC_13(VAR_53->qpc_bytes_24,
   VAR_24,
   VAR_25));
 VAR_47->timeout = (u8)(FUNC_13(VAR_53->qpc_bytes_156,
       VAR_16,
       VAR_17));
 VAR_47->retry_cnt = FUNC_13(VAR_53->qpc_bytes_148,
        VAR_14,
        VAR_15);
 VAR_47->rnr_retry = (u8)FUNC_4(VAR_53->rnr_retry);

done:
 VAR_47->cur_qp_state = VAR_47->qp_state;
 VAR_47->cap.max_recv_wr = VAR_51->rq.wqe_cnt;
 VAR_47->cap.max_recv_sge = VAR_51->rq.max_gs;

 if (!VAR_46->uobject) {
  VAR_47->cap.max_send_wr = VAR_51->sq.wqe_cnt;
  VAR_47->cap.max_send_sge = VAR_51->sq.max_gs;
 } else {
  VAR_47->cap.max_send_wr = 0;
  VAR_47->cap.max_send_sge = 0;
 }

 VAR_49->cap = VAR_47->cap;

out:
 FUNC_8(&VAR_51->mutex);
 FUNC_2(VAR_53);
 return VAR_55;
}
