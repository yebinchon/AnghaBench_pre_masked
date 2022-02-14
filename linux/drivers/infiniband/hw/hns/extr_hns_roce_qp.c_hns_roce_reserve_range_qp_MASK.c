
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_qp_table {int bitmap; } ;
struct hns_roce_dev {struct hns_roce_qp_table qp_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_1, int VAR_2,
         int VAR_3, unsigned long *VAR_4)
{
 struct hns_roce_qp_table *VAR_5 = &VAR_1->qp_table;

 return FUNC_0(&VAR_5->bitmap, VAR_2, VAR_3,
        VAR_4) ?
         -VAR_0 :
         0;
}
