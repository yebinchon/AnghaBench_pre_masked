
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_srq {int srq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_2__ {struct ib_srq* srq; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
struct hns_roce_srq {int srqn; struct ib_srq ibsrq; } ;
struct hns_roce_dev {int dev; } ;
typedef enum hns_roce_event { ____Placeholder_hns_roce_event } hns_roce_event ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;
 struct hns_roce_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_srq *VAR_2,
      enum hns_roce_event VAR_3)
{
 struct hns_roce_dev *VAR_4 = FUNC_2(VAR_2->ibsrq.device);
 struct ib_srq *VAR_5 = &VAR_2->ibsrq;
 struct ib_event VAR_6;

 if (VAR_5->event_handler) {
  VAR_6.device = VAR_5->device;
  VAR_6.element.srq = VAR_5;
  switch (VAR_3) {
  case 128:
   VAR_6.event = VAR_1;
   break;
  case 129:
   VAR_6.event = VAR_0;
   break;
  default:
   FUNC_0(VAR_4->dev,
      "hns_roce:Unexpected event type 0x%x on SRQ %06lx\n",
      VAR_3, VAR_2->srqn);
   return;
  }

  VAR_5->event_handler(&VAR_6, VAR_5->srq_context);
 }
}
