
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_cqs; } ;
struct TYPE_3__ {int array; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__ cq_table; struct device* dev; } ;
struct hns_roce_cq {int (* comp ) (struct hns_roce_cq*) ;int arm_sn; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hns_roce_cq*) ;
 struct hns_roce_cq* FUNC_2 (int *,int) ;

void FUNC_3(struct hns_roce_dev *VAR_0, u32 VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 struct hns_roce_cq *VAR_3;

 VAR_3 = FUNC_2(&VAR_0->cq_table.array, VAR_1 & (VAR_0->caps.num_cqs - 1));
 if (!VAR_3) {
  FUNC_0(VAR_2, "Completion event for bogus CQ 0x%08x\n", VAR_1);
  return;
 }

 ++VAR_3->arm_sn;
 VAR_3->comp(VAR_3);
}
