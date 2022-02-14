
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedr_iw_ep {TYPE_2__* qp; struct qedr_dev* dev; } ;
struct qedr_dev {int dummy; } ;
struct qed_iwarp_cm_event_params {int dummy; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_3__ {struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;
struct TYPE_4__ {struct ib_qp ibqp; } ;


 int FUNC_0 (struct qedr_dev*,char*,char*) ;
 int FUNC_1 (struct ib_event*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0,
   struct qed_iwarp_cm_event_params *VAR_1,
   enum ib_event_type VAR_2, char *VAR_3)
{
 struct qedr_iw_ep *VAR_4 = (struct qedr_iw_ep *)VAR_0;
 struct qedr_dev *VAR_5 = VAR_4->dev;
 struct ib_qp *VAR_6 = &VAR_4->qp->ibqp;
 struct ib_event VAR_7;

 FUNC_0(VAR_5, "QP error received: %s\n", VAR_3);

 if (VAR_6->event_handler) {
  VAR_7.event = VAR_2;
  VAR_7.device = VAR_6->device;
  VAR_7.element.qp = VAR_6;
  VAR_6->event_handler(&VAR_7, VAR_6->qp_context);
 }
}
