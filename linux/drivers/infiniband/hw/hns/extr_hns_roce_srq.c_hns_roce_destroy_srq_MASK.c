
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_srq {int device; } ;
struct TYPE_2__ {int umem; int mtt; } ;
struct hns_roce_srq {int max; int wqe_shift; int umem; TYPE_1__ idx_que; int buf; int wrid; int mtt; } ;
struct hns_roce_dev {int dummy; } ;


 int FUNC_0 (struct hns_roce_dev*,int,int *) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_srq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct hns_roce_dev* FUNC_5 (int ) ;
 struct hns_roce_srq* FUNC_6 (struct ib_srq*) ;

void FUNC_7(struct ib_srq *VAR_0, struct ib_udata *VAR_1)
{
 struct hns_roce_dev *VAR_2 = FUNC_5(VAR_0->device);
 struct hns_roce_srq *VAR_3 = FUNC_6(VAR_0);

 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_2, &VAR_3->mtt);

 if (VAR_1) {
  FUNC_1(VAR_2, &VAR_3->idx_que.mtt);
 } else {
  FUNC_4(VAR_3->wrid);
  FUNC_0(VAR_2, VAR_3->max << VAR_3->wqe_shift,
      &VAR_3->buf);
 }
 FUNC_3(VAR_3->idx_que.umem);
 FUNC_3(VAR_3->umem);
}
