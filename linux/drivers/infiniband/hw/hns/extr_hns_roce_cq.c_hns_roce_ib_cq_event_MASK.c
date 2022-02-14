
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ib_cq* cq; } ;
struct ib_event {TYPE_1__ element; int event; int device; } ;
struct ib_cq {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_cq {int cqn; struct ib_cq ib_cq; } ;
typedef enum hns_roce_event { ____Placeholder_hns_roce_event } hns_roce_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;
 struct hns_roce_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_cq *VAR_4,
     enum hns_roce_event VAR_5)
{
 struct hns_roce_dev *VAR_6;
 struct ib_event VAR_7;
 struct ib_cq *VAR_8;

 VAR_8 = &VAR_4->ib_cq;
 VAR_6 = FUNC_2(VAR_8->device);

 if (VAR_5 != VAR_1 &&
     VAR_5 != VAR_0 &&
     VAR_5 != VAR_2) {
  FUNC_0(VAR_6->dev,
   "hns_roce_ib: Unexpected event type 0x%x on CQ %06lx\n",
   VAR_5, VAR_4->cqn);
  return;
 }

 if (VAR_8->event_handler) {
  VAR_7.device = VAR_8->device;
  VAR_7.event = VAR_3;
  VAR_7.element.cq = VAR_8;
  VAR_8->event_handler(&VAR_7, VAR_8->cq_context);
 }
}
