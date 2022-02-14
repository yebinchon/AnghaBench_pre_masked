
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_ib_iboe {int nb; } ;
struct hns_roce_dev {int active; int ib_dev; struct hns_roce_ib_iboe iboe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_ib_iboe *VAR_1 = &VAR_0->iboe;

 VAR_0->active = 0;
 FUNC_1(&VAR_1->nb);
 FUNC_0(&VAR_0->ib_dev);
}
