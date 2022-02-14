
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reserved_pds; scalar_t__ num_pds; } ;
struct hns_roce_dev {TYPE_1__ caps; int pd_bitmap; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;

int FUNC_1(struct hns_roce_dev *VAR_0)
{
 return FUNC_0(&VAR_0->pd_bitmap, VAR_0->caps.num_pds,
        VAR_0->caps.num_pds - 1,
        VAR_0->caps.reserved_pds, 0);
}
