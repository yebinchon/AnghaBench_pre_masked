
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_cqs; } ;
struct hns_roce_cq_table {int array; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; struct hns_roce_cq_table cq_table; } ;
struct hns_roce_cq {int free; int refcount; int (* event ) (struct hns_roce_cq*,int) ;} ;
struct device {int dummy; } ;
typedef enum hns_roce_event { ____Placeholder_hns_roce_event } hns_roce_event ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct hns_roce_cq*,int) ;
 struct hns_roce_cq* FUNC_5 (int *,int) ;

void FUNC_6(struct hns_roce_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct hns_roce_cq_table *VAR_3 = &VAR_0->cq_table;
 struct device *VAR_4 = VAR_0->dev;
 struct hns_roce_cq *VAR_5;

 VAR_5 = FUNC_5(&VAR_3->array, VAR_1 & (VAR_0->caps.num_cqs - 1));
 if (VAR_5)
  FUNC_1(&VAR_5->refcount);

 if (!VAR_5) {
  FUNC_3(VAR_4, "Async event for bogus CQ %08x\n", VAR_1);
  return;
 }

 VAR_5->event(VAR_5, (enum hns_roce_event)VAR_2);

 if (FUNC_0(&VAR_5->refcount))
  FUNC_2(&VAR_5->free);
}
