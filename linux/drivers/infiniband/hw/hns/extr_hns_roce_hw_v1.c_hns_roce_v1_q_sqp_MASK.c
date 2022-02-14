
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ max_inline_data; int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct ib_qp_init_attr {scalar_t__ create_flags; TYPE_4__ cap; } ;
struct TYPE_5__ {int type; } ;
struct ib_qp_attr {scalar_t__ qp_state; int dest_qp_num; int qp_access_flags; int port_num; scalar_t__ cur_qp_state; TYPE_4__ cap; scalar_t__ alt_timeout; scalar_t__ rnr_retry; scalar_t__ retry_cnt; scalar_t__ timeout; scalar_t__ min_rnr_timer; scalar_t__ max_dest_rd_atomic; scalar_t__ max_rd_atomic; scalar_t__ sq_draining; void* pkey_index; scalar_t__ sq_psn; scalar_t__ rq_psn; TYPE_1__ ah_attr; int qkey; int path_mig_state; int path_mtu; } ;
struct ib_qp {int device; } ;
struct hns_roce_sqp_context {void* qp1c_bytes_20; void* qp1c_bytes_4; void* qp1c_bytes_40; void* cur_sq_wqe_ba_l; void* qp1c_bytes_32; void* qp1c_bytes_28; void* cur_rq_wqe_ba_l; void* qp1c_bytes_16; void* qp1c_bytes_12; void* sq_rq_bt_l; } ;
struct TYPE_7__ {int max_gs; int wqe_cnt; } ;
struct TYPE_6__ {int max_gs; int wqe_cnt; } ;
struct hns_roce_qp {scalar_t__ state; int port; int mutex; TYPE_3__ sq; TYPE_2__ rq; } ;
struct hns_roce_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,scalar_t__) ;
 struct hns_roce_dev* FUNC_5 (int ) ;
 struct hns_roce_qp* FUNC_6 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_7(struct ib_qp *VAR_10, struct ib_qp_attr *VAR_11,
        int VAR_12,
        struct ib_qp_init_attr *VAR_13)
{
 struct hns_roce_dev *VAR_14 = FUNC_5(VAR_10->device);
 struct hns_roce_qp *VAR_15 = FUNC_6(VAR_10);
 struct hns_roce_sqp_context VAR_16;
 u32 VAR_17;

 FUNC_1(&VAR_15->mutex);

 if (VAR_15->state == VAR_2) {
  VAR_11->qp_state = VAR_2;
  goto done;
 }

 VAR_17 = VAR_9 +
  VAR_15->port * sizeof(struct hns_roce_sqp_context);
 VAR_16.qp1c_bytes_4 = FUNC_0(FUNC_4(VAR_14, VAR_17));
 VAR_16.sq_rq_bt_l = FUNC_0(FUNC_4(VAR_14, VAR_17 + 1));
 VAR_16.qp1c_bytes_12 = FUNC_0(FUNC_4(VAR_14, VAR_17 + 2));
 VAR_16.qp1c_bytes_16 = FUNC_0(FUNC_4(VAR_14, VAR_17 + 3));
 VAR_16.qp1c_bytes_20 = FUNC_0(FUNC_4(VAR_14, VAR_17 + 4));
 VAR_16.cur_rq_wqe_ba_l = FUNC_0(FUNC_4(VAR_14, VAR_17 + 5));
 VAR_16.qp1c_bytes_28 = FUNC_0(FUNC_4(VAR_14, VAR_17 + 6));
 VAR_16.qp1c_bytes_32 = FUNC_0(FUNC_4(VAR_14, VAR_17 + 7));
 VAR_16.cur_sq_wqe_ba_l = FUNC_0(FUNC_4(VAR_14, VAR_17 + 8));
 VAR_16.qp1c_bytes_40 = FUNC_0(FUNC_4(VAR_14, VAR_17 + 9));

 VAR_15->state = FUNC_3(VAR_16.qp1c_bytes_4,
          VAR_6,
          VAR_7);
 VAR_11->qp_state = VAR_15->state;
 VAR_11->path_mtu = VAR_1;
 VAR_11->path_mig_state = VAR_0;
 VAR_11->qkey = VAR_3;
 VAR_11->ah_attr.type = VAR_8;
 VAR_11->rq_psn = 0;
 VAR_11->sq_psn = 0;
 VAR_11->dest_qp_num = 1;
 VAR_11->qp_access_flags = 6;

 VAR_11->pkey_index = FUNC_3(VAR_16.qp1c_bytes_20,
          VAR_4,
          VAR_5);
 VAR_11->port_num = VAR_15->port + 1;
 VAR_11->sq_draining = 0;
 VAR_11->max_rd_atomic = 0;
 VAR_11->max_dest_rd_atomic = 0;
 VAR_11->min_rnr_timer = 0;
 VAR_11->timeout = 0;
 VAR_11->retry_cnt = 0;
 VAR_11->rnr_retry = 0;
 VAR_11->alt_timeout = 0;

done:
 VAR_11->cur_qp_state = VAR_11->qp_state;
 VAR_11->cap.max_recv_wr = VAR_15->rq.wqe_cnt;
 VAR_11->cap.max_recv_sge = VAR_15->rq.max_gs;
 VAR_11->cap.max_send_wr = VAR_15->sq.wqe_cnt;
 VAR_11->cap.max_send_sge = VAR_15->sq.max_gs;
 VAR_11->cap.max_inline_data = 0;
 VAR_13->cap = VAR_11->cap;
 VAR_13->create_flags = 0;

 FUNC_2(&VAR_15->mutex);

 return 0;
}
