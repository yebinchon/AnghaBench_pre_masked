
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ib_recv_wr {int num_sge; int wr_id; scalar_t__ sg_list; struct ib_recv_wr* next; } ;
struct ib_qp {scalar_t__ qp_type; int device; } ;
struct hns_roce_wqe_data_seg {int dummy; } ;
struct hns_roce_rq_wqe_ctrl {scalar_t__ rwqe_byte_12; } ;
struct hns_roce_rq_db {scalar_t__ u32_8; scalar_t__ u32_4; } ;
struct TYPE_6__ {int head; int wqe_cnt; int max_gs; int lock; int db_reg_l; int * wrid; } ;
struct TYPE_5__ {int recv_cq; } ;
struct hns_roce_qp {int phy_port; int qpn; TYPE_3__ rq; TYPE_2__ ibqp; } ;
struct hns_roce_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 struct hns_roce_rq_wqe_ctrl* FUNC_2 (struct hns_roce_qp*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct hns_roce_dev*,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (scalar_t__,int ,int ,int) ;
 int FUNC_10 (struct hns_roce_dev*,scalar_t__,int ) ;
 int FUNC_11 (struct hns_roce_wqe_data_seg*,scalar_t__) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct hns_roce_dev* FUNC_14 (int ) ;
 struct hns_roce_qp* FUNC_15 (struct ib_qp*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct ib_qp *VAR_16,
     const struct ib_recv_wr *VAR_17,
     const struct ib_recv_wr **VAR_18)
{
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;
 u32 VAR_23;
 unsigned long VAR_24 = 0;
 struct hns_roce_rq_wqe_ctrl *VAR_25 = ((void*)0);
 struct hns_roce_wqe_data_seg *VAR_26 = ((void*)0);
 struct hns_roce_qp *VAR_27 = FUNC_15(VAR_16);
 struct hns_roce_dev *VAR_28 = FUNC_14(VAR_16->device);
 struct device *VAR_29 = &VAR_28->pdev->dev;
 struct hns_roce_rq_db VAR_30;
 __le32 VAR_31[2] = {0};

 FUNC_12(&VAR_27->rq.lock, VAR_24);
 VAR_21 = VAR_27->rq.head & (VAR_27->rq.wqe_cnt - 1);

 for (VAR_20 = 0; VAR_17; ++VAR_20, VAR_17 = VAR_17->next) {
  if (FUNC_3(&VAR_27->rq, VAR_20,
   VAR_27->ibqp.recv_cq)) {
   VAR_19 = -VAR_1;
   *VAR_18 = VAR_17;
   goto out;
  }

  if (FUNC_16(VAR_17->num_sge > VAR_27->rq.max_gs)) {
   FUNC_1(VAR_29, "rq:num_sge=%d > qp->sq.max_gs=%d\n",
    VAR_17->num_sge, VAR_27->rq.max_gs);
   VAR_19 = -VAR_0;
   *VAR_18 = VAR_17;
   goto out;
  }

  VAR_25 = FUNC_2(VAR_27, VAR_21);

  FUNC_9(VAR_25->rwqe_byte_12,
          VAR_14,
          VAR_15,
          VAR_17->num_sge);

  VAR_26 = (struct hns_roce_wqe_data_seg *)(VAR_25 + 1);

  for (VAR_22 = 0; VAR_22 < VAR_17->num_sge; VAR_22++)
   FUNC_11(VAR_26 + VAR_22, VAR_17->sg_list + VAR_22);

  VAR_27->rq.wrid[VAR_21] = VAR_17->wr_id;

  VAR_21 = (VAR_21 + 1) & (VAR_27->rq.wqe_cnt - 1);
 }

out:
 if (FUNC_6(VAR_20)) {
  VAR_27->rq.head += VAR_20;

  FUNC_17();

  if (VAR_16->qp_type == VAR_2) {
   __le32 VAR_32;


   VAR_23 = FUNC_7(FUNC_14(VAR_16->device),
         VAR_4 +
         VAR_3 * VAR_27->phy_port);
   VAR_32 = FUNC_0(VAR_23);
   FUNC_9(VAR_32,
           VAR_5,
           VAR_6,
           VAR_27->rq.head);
   VAR_23 = FUNC_5(VAR_32);
   FUNC_10(FUNC_14(VAR_16->device),
       VAR_4 +
       VAR_3 * VAR_27->phy_port, VAR_23);
  } else {
   VAR_30.u32_4 = 0;
   VAR_30.u32_8 = 0;

   FUNC_9(VAR_30.u32_4, VAR_7,
           VAR_8,
           VAR_27->rq.head);
   FUNC_9(VAR_30.u32_8, VAR_12,
           VAR_13, VAR_27->qpn);
   FUNC_9(VAR_30.u32_8, VAR_9,
           VAR_10, 1);
   FUNC_8(VAR_30.u32_8, VAR_11,
         1);

   VAR_31[0] = VAR_30.u32_4;
   VAR_31[1] = VAR_30.u32_8;

   FUNC_4(VAR_31, VAR_27->rq.db_reg_l);
  }
 }
 FUNC_13(&VAR_27->rq.lock, VAR_24);

 return VAR_19;
}
