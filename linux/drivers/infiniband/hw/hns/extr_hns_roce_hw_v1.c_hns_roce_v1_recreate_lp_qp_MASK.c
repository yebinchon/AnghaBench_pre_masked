
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_free_mr {int free_mr_wq; } ;
struct hns_roce_v1_priv {struct hns_roce_free_mr free_mr; } ;
struct hns_roce_recreate_lp_qp_work {int comp_flag; int work; struct completion* comp; int * ib_dev; } ;
struct hns_roce_dev {int ib_dev; scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct completion*) ;
 struct hns_roce_recreate_lp_qp_work* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct completion*) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_6)
{
 struct device *VAR_7 = &VAR_6->pdev->dev;
 struct hns_roce_recreate_lp_qp_work *VAR_8;
 struct hns_roce_free_mr *VAR_9;
 struct hns_roce_v1_priv *VAR_10;
 struct completion VAR_11;
 long VAR_12 = VAR_3;

 VAR_10 = (struct hns_roce_v1_priv *)VAR_6->priv;
 VAR_9 = &VAR_10->free_mr;

 VAR_8 = FUNC_3(sizeof(struct hns_roce_recreate_lp_qp_work),
        VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&(VAR_8->work), VAR_5);

 VAR_8->ib_dev = &(VAR_6->ib_dev);
 VAR_8->comp = &VAR_11;
 VAR_8->comp_flag = 1;

 FUNC_2(VAR_8->comp);

 FUNC_5(VAR_9->free_mr_wq, &(VAR_8->work));

 while (VAR_12 > 0) {
  if (FUNC_6(&VAR_11))
   return 0;
  FUNC_4(VAR_4);
  VAR_12 -= VAR_4;
 }

 VAR_8->comp_flag = 0;
 if (FUNC_6(&VAR_11))
  return 0;

 FUNC_1(VAR_7, "recreate lp qp failed 20s timeout and return failed!\n");
 return -VAR_1;
}
