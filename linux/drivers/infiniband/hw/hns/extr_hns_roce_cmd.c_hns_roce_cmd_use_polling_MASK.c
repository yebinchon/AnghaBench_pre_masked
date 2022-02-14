
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_cmdq {scalar_t__ use_events; int context; } ;
struct hns_roce_dev {struct hns_roce_cmdq cmd; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_cmdq *VAR_1 = &VAR_0->cmd;

 FUNC_0(VAR_1->context);
 VAR_1->use_events = 0;
}
