
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;TYPE_3__* device; } ;
struct TYPE_4__ {struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_1__ element; TYPE_3__* device; } ;
struct hns_roce_qp {int qpn; struct ib_qp ibqp; } ;
typedef enum hns_roce_event { ____Placeholder_hns_roce_event } hns_roce_event ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_qp *VAR_8,
     enum hns_roce_event VAR_9)
{
 struct ib_event VAR_10;
 struct ib_qp *VAR_11 = &VAR_8->ibqp;

 if (VAR_11->event_handler) {
  VAR_10.device = VAR_11->device;
  VAR_10.element.qp = VAR_11;
  switch (VAR_9) {
  case 132:
   VAR_10.event = VAR_1;
   break;
  case 135:
   VAR_10.event = VAR_0;
   break;
  case 130:
   VAR_10.event = VAR_7;
   break;
  case 129:
   VAR_10.event = VAR_5;
   break;
  case 128:
   VAR_10.event = VAR_4;
   break;
  case 131:
   VAR_10.event = VAR_2;
   break;
  case 134:
   VAR_10.event = VAR_6;
   break;
  case 133:
   VAR_10.event = VAR_3;
   break;
  default:
   FUNC_0(VAR_11->device->dev.parent, "roce_ib: Unexpected event type %d on QP %06lx\n",
    VAR_9, VAR_8->qpn);
   return;
  }
  VAR_11->event_handler(&VAR_10, VAR_11->qp_context);
 }
}
