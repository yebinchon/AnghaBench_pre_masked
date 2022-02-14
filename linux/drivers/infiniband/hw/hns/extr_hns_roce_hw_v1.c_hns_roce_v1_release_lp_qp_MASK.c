
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns_roce_free_mr {TYPE_3__* mr_free_pd; TYPE_2__* mr_free_cq; struct hns_roce_qp** mr_free_qp; } ;
struct hns_roce_v1_priv {struct hns_roce_free_mr free_mr; } ;
struct hns_roce_qp {int ibqp; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int ibpd; } ;
struct TYPE_5__ {int ib_cq; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 struct hns_roce_free_mr *VAR_3;
 struct hns_roce_v1_priv *VAR_4;
 struct hns_roce_qp *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = (struct hns_roce_v1_priv *)VAR_1->priv;
 VAR_3 = &VAR_4->free_mr;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = VAR_3->mr_free_qp[VAR_7];
  if (!VAR_5)
   continue;

  VAR_6 = FUNC_3(&VAR_5->ibqp, ((void*)0));
  if (VAR_6)
   FUNC_0(VAR_2, "Destroy qp %d for mr free failed(%d)!\n",
    VAR_7, VAR_6);
 }

 FUNC_2(&VAR_3->mr_free_cq->ib_cq, ((void*)0));
 FUNC_4(&VAR_3->mr_free_cq->ib_cq);
 FUNC_1(&VAR_3->mr_free_pd->ibpd, ((void*)0));
 FUNC_4(&VAR_3->mr_free_pd->ibpd);
}
