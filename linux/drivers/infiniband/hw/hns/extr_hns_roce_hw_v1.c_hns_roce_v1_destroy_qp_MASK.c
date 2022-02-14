
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_qp {int device; } ;
struct TYPE_6__ {scalar_t__ qp_type; scalar_t__ srq; int recv_cq; int send_cq; } ;
struct TYPE_5__ {struct hns_roce_qp* wrid; } ;
struct TYPE_4__ {struct hns_roce_qp* wrid; } ;
struct hns_roce_qp {TYPE_3__ ibqp; int hr_buf; int buff_size; TYPE_2__ rq; TYPE_1__ sq; int umem; int mtt; int qpn; int state; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hns_roce_cq*,int ,int *) ;
 int FUNC_1 (struct hns_roce_dev*,int ,int *) ;
 int FUNC_2 (struct hns_roce_cq*,struct hns_roce_cq*) ;
 int FUNC_3 (struct hns_roce_dev*,int *) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_qp*) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_qp*) ;
 int FUNC_6 (struct hns_roce_dev*,int ,int) ;
 int FUNC_7 (struct hns_roce_cq*,struct hns_roce_cq*) ;
 int FUNC_8 (struct ib_qp*,int *,int ,int ,int ) ;
 struct hns_roce_qp* FUNC_9 (struct hns_roce_qp*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct hns_roce_qp*) ;
 struct hns_roce_cq* FUNC_12 (int ) ;
 struct hns_roce_dev* FUNC_13 (int ) ;
 struct hns_roce_qp* FUNC_14 (struct ib_qp*) ;
 int * FUNC_15 (scalar_t__) ;

int FUNC_16(struct ib_qp *VAR_2, struct ib_udata *VAR_3)
{
 struct hns_roce_dev *VAR_4 = FUNC_13(VAR_2->device);
 struct hns_roce_qp *VAR_5 = FUNC_14(VAR_2);
 struct hns_roce_cq *VAR_6, *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_8(VAR_2, ((void*)0), 0, VAR_5->state, VAR_0);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_12(VAR_5->ibqp.send_cq);
 VAR_7 = FUNC_12(VAR_5->ibqp.recv_cq);

 FUNC_2(VAR_6, VAR_7);
 if (!VAR_3) {
  FUNC_0(VAR_7, VAR_5->qpn, VAR_5->ibqp.srq ?
           FUNC_15(VAR_5->ibqp.srq) : ((void*)0));
  if (VAR_6 != VAR_7)
   FUNC_0(VAR_6, VAR_5->qpn, ((void*)0));
 }
 FUNC_7(VAR_6, VAR_7);

 FUNC_5(VAR_4, VAR_5);
 FUNC_4(VAR_4, VAR_5);


 if (VAR_5->ibqp.qp_type == VAR_1)
  FUNC_6(VAR_4, VAR_5->qpn, 1);

 FUNC_3(VAR_4, &VAR_5->mtt);

 FUNC_10(VAR_5->umem);
 if (!VAR_3) {
  FUNC_11(VAR_5->sq.wrid);
  FUNC_11(VAR_5->rq.wrid);

  FUNC_1(VAR_4, VAR_5->buff_size, &VAR_5->hr_buf);
 }

 if (VAR_5->ibqp.qp_type == VAR_1)
  FUNC_11(VAR_5);
 else
  FUNC_11(FUNC_9(VAR_5));
 return 0;
}
