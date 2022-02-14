
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int ib_dev; int priv; } ;
struct hnae3_handle {int * priv; } ;


 int FUNC_0 (struct hns_roce_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hnae3_handle *VAR_0,
        bool VAR_1)
{
 struct hns_roce_dev *VAR_2 = (struct hns_roce_dev *)VAR_0->priv;

 if (!VAR_2)
  return;

 VAR_0->priv = ((void*)0);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2->priv);
 FUNC_1(&VAR_2->ib_dev);
}
