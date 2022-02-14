
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_free_mr {int free_mr_wq; } ;
struct hns_roce_v1_priv {struct hns_roce_free_mr free_mr; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hns_roce_dev*) ;

__attribute__((used)) static int FUNC_5(struct hns_roce_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 struct hns_roce_free_mr *VAR_3;
 struct hns_roce_v1_priv *VAR_4;
 int VAR_5 = 0;

 VAR_4 = (struct hns_roce_v1_priv *)VAR_1->priv;
 VAR_3 = &VAR_4->free_mr;

 VAR_3->free_mr_wq = FUNC_0("hns_roce_free_mr");
 if (!VAR_3->free_mr_wq) {
  FUNC_2(VAR_2, "Create free mr workqueue failed!\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5) {
  FUNC_2(VAR_2, "Reserved loop qp failed(%d)!\n", VAR_5);
  FUNC_3(VAR_3->free_mr_wq);
  FUNC_1(VAR_3->free_mr_wq);
 }

 return VAR_5;
}
