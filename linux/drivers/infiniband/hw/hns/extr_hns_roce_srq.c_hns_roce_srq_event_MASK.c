
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_srq_table {int xa; } ;
struct hns_roce_srq {int free; int refcount; int (* event ) (struct hns_roce_srq*,int) ;} ;
struct TYPE_2__ {int num_srqs; } ;
struct hns_roce_dev {int dev; TYPE_1__ caps; struct hns_roce_srq_table srq_table; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct hns_roce_srq*,int) ;
 struct hns_roce_srq* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct hns_roce_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct hns_roce_srq_table *VAR_3 = &VAR_0->srq_table;
 struct hns_roce_srq *VAR_4;

 FUNC_6(&VAR_3->xa);
 VAR_4 = FUNC_5(&VAR_3->xa, VAR_1 & (VAR_0->caps.num_srqs - 1));
 if (VAR_4)
  FUNC_1(&VAR_4->refcount);
 FUNC_7(&VAR_3->xa);

 if (!VAR_4) {
  FUNC_3(VAR_0->dev, "Async event for bogus SRQ %08x\n", VAR_1);
  return;
 }

 VAR_4->event(VAR_4, VAR_2);

 if (FUNC_0(&VAR_4->refcount))
  FUNC_2(&VAR_4->free);
}
