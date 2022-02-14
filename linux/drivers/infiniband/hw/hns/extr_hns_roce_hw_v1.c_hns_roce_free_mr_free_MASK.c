
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_free_mr {int free_mr_wq; } ;
struct hns_roce_v1_priv {struct hns_roce_free_mr free_mr; } ;
struct hns_roce_dev {scalar_t__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hns_roce_dev*) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_free_mr *VAR_1;
 struct hns_roce_v1_priv *VAR_2;

 VAR_2 = (struct hns_roce_v1_priv *)VAR_0->priv;
 VAR_1 = &VAR_2->free_mr;

 FUNC_1(VAR_1->free_mr_wq);
 FUNC_0(VAR_1->free_mr_wq);

 FUNC_2(VAR_0);
}
