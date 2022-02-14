
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_dev {TYPE_1__* hw; scalar_t__ cmd_mod; } ;
struct TYPE_2__ {int (* reset ) (struct hns_roce_dev*,int) ;int (* cmq_exit ) (struct hns_roce_dev*) ;int (* cleanup_eq ) (struct hns_roce_dev*) ;int (* hw_exit ) (struct hns_roce_dev*) ;} ;


 int FUNC_0 (struct hns_roce_dev*) ;
 int FUNC_1 (struct hns_roce_dev*) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 int FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (struct hns_roce_dev*) ;
 int FUNC_6 (struct hns_roce_dev*) ;
 int FUNC_7 (struct hns_roce_dev*) ;
 int FUNC_8 (struct hns_roce_dev*,int) ;

void FUNC_9(struct hns_roce_dev *VAR_0)
{
 FUNC_4(VAR_0);

 if (VAR_0->hw->hw_exit)
  VAR_0->hw->hw_exit(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 if (VAR_0->cmd_mod)
  FUNC_3(VAR_0);

 VAR_0->hw->cleanup_eq(VAR_0);
 FUNC_2(VAR_0);
 if (VAR_0->hw->cmq_exit)
  VAR_0->hw->cmq_exit(VAR_0);
 if (VAR_0->hw->reset)
  VAR_0->hw->reset(VAR_0, 0);
}
