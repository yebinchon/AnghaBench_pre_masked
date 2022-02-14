
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int umem; int mtt; } ;
struct hns_roce_srq {int umem; int mtt; TYPE_1__ idx_que; } ;
struct hns_roce_dev {int dummy; } ;


 int FUNC_0 (struct hns_roce_dev*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_0,
        struct hns_roce_srq *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->idx_que.mtt);
 FUNC_1(VAR_1->idx_que.umem);
 FUNC_0(VAR_0, &VAR_1->mtt);
 FUNC_1(VAR_1->umem);
}
