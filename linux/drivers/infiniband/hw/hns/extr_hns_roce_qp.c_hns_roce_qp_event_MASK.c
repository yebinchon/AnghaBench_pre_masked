
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_qp {int free; int refcount; int (* event ) (struct hns_roce_qp*,int) ;} ;
struct hns_roce_dev {int qp_table_xa; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum hns_roce_event { ____Placeholder_hns_roce_event } hns_roce_event ;


 struct hns_roce_qp* FUNC_0 (struct hns_roce_dev*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct hns_roce_qp*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct hns_roce_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct device *VAR_3 = VAR_0->dev;
 struct hns_roce_qp *VAR_4;

 FUNC_6(&VAR_0->qp_table_xa);
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  FUNC_2(&VAR_4->refcount);
 FUNC_7(&VAR_0->qp_table_xa);

 if (!VAR_4) {
  FUNC_4(VAR_3, "Async event for bogus QP %08x\n", VAR_1);
  return;
 }

 VAR_4->event(VAR_4, (enum hns_roce_event)VAR_2);

 if (FUNC_1(&VAR_4->refcount))
  FUNC_3(&VAR_4->free);
}
