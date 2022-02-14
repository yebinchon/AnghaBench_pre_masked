
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_qp_attr {int dummy; } ;
struct ib_qp {scalar_t__ recv_cq; scalar_t__ send_cq; scalar_t__ srq; int uobject; int device; } ;
struct hns_roce_v2_qp_context {int byte_60_qpst_tempid; int byte_108_rx_reqepsn; int byte_84_rq_ci_pi; int byte_160_sq_ci_pi; } ;
struct TYPE_6__ {scalar_t__* db_record; } ;
struct TYPE_5__ {int head; scalar_t__ wqe_cnt; scalar_t__ tail; } ;
struct TYPE_4__ {int head; scalar_t__ tail; } ;
struct hns_roce_qp {int state; TYPE_3__ rdb; TYPE_2__ rq; scalar_t__ next_sge; scalar_t__ sq_next_wqe; TYPE_1__ sq; int qpn; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct hns_roce_dev*,int,int,struct hns_roce_v2_qp_context*,struct hns_roce_qp*) ;
 int FUNC_3 (struct ib_qp*,struct ib_qp_attr const*,int) ;
 int FUNC_4 (struct ib_qp*,struct ib_qp_attr const*,int,int,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 int FUNC_5 (struct ib_qp*,struct ib_qp_attr const*,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 int FUNC_6 (struct hns_roce_v2_qp_context*,int,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 struct hns_roce_dev* FUNC_10 (int ) ;
 struct hns_roce_qp* FUNC_11 (struct ib_qp*) ;
 int * FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct ib_qp *VAR_9,
     const struct ib_qp_attr *VAR_10,
     int VAR_11, enum ib_qp_state VAR_12,
     enum ib_qp_state VAR_13)
{
 struct hns_roce_dev *VAR_14 = FUNC_10(VAR_9->device);
 struct hns_roce_qp *VAR_15 = FUNC_11(VAR_9);
 struct hns_roce_v2_qp_context VAR_16[2];
 struct hns_roce_v2_qp_context *VAR_17 = VAR_16;
 struct hns_roce_v2_qp_context *VAR_18 = VAR_16 + 1;
 struct device *VAR_19 = VAR_14->dev;
 int VAR_20;







 FUNC_6(VAR_17, 0, sizeof(*VAR_17));
 FUNC_6(VAR_18, 0xff, sizeof(*VAR_18));
 VAR_20 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_17, VAR_18);
 if (VAR_20)
  goto out;


 if (VAR_13 == VAR_0) {
  FUNC_8(VAR_17->byte_160_sq_ci_pi,
          VAR_3,
          VAR_4,
          VAR_15->sq.head);
  FUNC_8(VAR_18->byte_160_sq_ci_pi,
          VAR_3,
          VAR_4, 0);

  if (!VAR_9->srq) {
   FUNC_8(VAR_17->byte_84_rq_ci_pi,
          VAR_7,
          VAR_8,
          VAR_15->rq.head);
   FUNC_8(VAR_18->byte_84_rq_ci_pi,
          VAR_7,
          VAR_8, 0);
  }
 }


 VAR_20 = FUNC_5(VAR_9, VAR_10, VAR_11, VAR_17,
      VAR_18);
 if (VAR_20)
  goto out;

 FUNC_7(VAR_17->byte_108_rx_reqepsn, VAR_2,
       VAR_9->srq ? 1 : 0);
 FUNC_7(VAR_18->byte_108_rx_reqepsn,
       VAR_2, 0);


 FUNC_8(VAR_17->byte_60_qpst_tempid, VAR_5,
         VAR_6, VAR_13);
 FUNC_8(VAR_18->byte_60_qpst_tempid, VAR_5,
         VAR_6, 0);


 VAR_20 = FUNC_2(VAR_14, VAR_12, VAR_13, VAR_16, VAR_15);
 if (VAR_20) {
  FUNC_0(VAR_19, "hns_roce_qp_modify failed(%d)\n", VAR_20);
  goto out;
 }

 VAR_15->state = VAR_13;

 FUNC_3(VAR_9, VAR_10, VAR_11);

 if (VAR_13 == VAR_1 && !VAR_9->uobject) {
  FUNC_1(FUNC_9(VAR_9->recv_cq), VAR_15->qpn,
         VAR_9->srq ? FUNC_12(VAR_9->srq) : ((void*)0));
  if (VAR_9->send_cq != VAR_9->recv_cq)
   FUNC_1(FUNC_9(VAR_9->send_cq),
          VAR_15->qpn, ((void*)0));

  VAR_15->rq.head = 0;
  VAR_15->rq.tail = 0;
  VAR_15->sq.head = 0;
  VAR_15->sq.tail = 0;
  VAR_15->sq_next_wqe = 0;
  VAR_15->next_sge = 0;
  if (VAR_15->rq.wqe_cnt)
   *VAR_15->rdb.db_record = 0;
 }

out:
 return VAR_20;
}
