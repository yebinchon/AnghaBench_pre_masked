
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reserved_uars; scalar_t__ num_uars; } ;
struct TYPE_3__ {int bitmap; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__ uar_table; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;

int FUNC_1(struct hns_roce_dev *VAR_0)
{
 return FUNC_0(&VAR_0->uar_table.bitmap,
        VAR_0->caps.num_uars,
        VAR_0->caps.num_uars - 1,
        VAR_0->caps.reserved_uars, 0);
}
