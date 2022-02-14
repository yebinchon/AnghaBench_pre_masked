
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reserved_cqs; scalar_t__ num_cqs; } ;
struct hns_roce_cq_table {int bitmap; int array; } ;
struct hns_roce_dev {TYPE_1__ caps; struct hns_roce_cq_table cq_table; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_cq_table *VAR_1 = &VAR_0->cq_table;

 FUNC_1(&VAR_1->array);

 return FUNC_0(&VAR_1->bitmap, VAR_0->caps.num_cqs,
        VAR_0->caps.num_cqs - 1,
        VAR_0->caps.reserved_cqs, 0);
}
