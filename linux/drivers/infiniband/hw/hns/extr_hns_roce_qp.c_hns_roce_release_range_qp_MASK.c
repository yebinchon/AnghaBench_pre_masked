
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_qp_table {int bitmap; } ;
struct TYPE_2__ {int reserved_qps; } ;
struct hns_roce_dev {TYPE_1__ caps; struct hns_roce_qp_table qp_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ) ;

void FUNC_1(struct hns_roce_dev *VAR_1, int VAR_2,
          int VAR_3)
{
 struct hns_roce_qp_table *VAR_4 = &VAR_1->qp_table;

 if (VAR_2 < VAR_1->caps.reserved_qps)
  return;

 FUNC_0(&VAR_4->bitmap, VAR_2, VAR_3, VAR_0);
}
