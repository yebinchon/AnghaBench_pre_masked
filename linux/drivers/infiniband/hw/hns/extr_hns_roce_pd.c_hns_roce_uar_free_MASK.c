
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_uar {int logic_idx; } ;
struct TYPE_2__ {int bitmap; } ;
struct hns_roce_dev {TYPE_1__ uar_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct hns_roce_dev *VAR_1, struct hns_roce_uar *VAR_2)
{
 FUNC_0(&VAR_1->uar_table.bitmap, VAR_2->logic_idx,
        VAR_0);
}
