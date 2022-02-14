
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usnic_transport_spec {int dummy; } ;
struct usnic_ib_qp_grp_flow {int dummy; } ;
struct TYPE_8__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct usnic_ib_qp_grp {int state; int grp_id; int lock; TYPE_4__ ibqp; TYPE_2__* vf; } ;
struct TYPE_7__ {TYPE_4__* qp; } ;
struct ib_event {int event; TYPE_3__ element; int * device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_6__ {TYPE_1__* pf; } ;
struct TYPE_5__ {int ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_1 (struct usnic_ib_qp_grp_flow*) ;
 struct usnic_ib_qp_grp_flow* FUNC_2 (struct usnic_ib_qp_grp*,struct usnic_transport_spec*) ;
 int FUNC_3 (struct usnic_ib_qp_grp*) ;
 int FUNC_4 (struct usnic_ib_qp_grp*) ;
 int FUNC_5 (struct usnic_ib_qp_grp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ib_event*,int ) ;
 int FUNC_9 (struct ib_event*,int ) ;
 int FUNC_10 (struct ib_event*,int ) ;
 int FUNC_11 (char*,int ,int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,int ,int ,int ) ;

int FUNC_14(struct usnic_ib_qp_grp *VAR_3,
    enum ib_qp_state VAR_4,
    void *VAR_5)
{
 int VAR_6 = 0;
 struct ib_event VAR_7;
 enum ib_qp_state VAR_8;
 struct usnic_transport_spec *VAR_9;
 struct usnic_ib_qp_grp_flow *VAR_10;

 VAR_8 = VAR_3->state;
 VAR_9 = (struct usnic_transport_spec *) VAR_5;

 FUNC_6(&VAR_3->lock);
 switch (VAR_4) {
 case 130:
  switch (VAR_8) {
  case 130:

   break;
  case 131:
   FUNC_5(VAR_3);
   VAR_6 = 0;
   break;
  case 129:
  case 128:
  case 132:
   VAR_6 = FUNC_3(VAR_3);
   FUNC_5(VAR_3);
   break;
  default:
   VAR_6 = -VAR_1;
  }
  break;
 case 131:
  switch (VAR_8) {
  case 130:
   if (VAR_9) {
    VAR_10 = FUNC_2(VAR_3,
        VAR_9);
    if (FUNC_0(VAR_10)) {
     VAR_6 = VAR_10 ? FUNC_1(VAR_10) : -VAR_0;
     break;
    }
   } else {



    VAR_6 = 0;
   }
   break;
  case 131:
   if (VAR_9) {
    VAR_10 = FUNC_2(VAR_3,
        VAR_9);
    if (FUNC_0(VAR_10)) {
     VAR_6 = VAR_10 ? FUNC_1(VAR_10) : -VAR_0;
     break;
    }
   } else {




    VAR_6 = -VAR_1;
   }
   break;
  case 129:
   VAR_6 = FUNC_3(VAR_3);
   break;
  case 128:
   VAR_6 = FUNC_3(VAR_3);
   break;
  default:
   VAR_6 = -VAR_1;
  }
  break;
 case 129:
  switch (VAR_8) {
  case 131:
   VAR_6 = FUNC_4(VAR_3);
   break;
  default:
   VAR_6 = -VAR_1;
  }
  break;
 case 128:
  switch (VAR_8) {
  case 129:

   break;
  default:
   VAR_6 = -VAR_1;
  }
  break;
 case 132:
  VAR_7.device = &VAR_3->vf->pf->ib_dev;
  VAR_7.element.qp = &VAR_3->ibqp;
  VAR_7.event = VAR_2;

  switch (VAR_8) {
  case 130:
   VAR_3->ibqp.event_handler(&VAR_7,
     VAR_3->ibqp.qp_context);
   break;
  case 131:
   FUNC_5(VAR_3);
   VAR_3->ibqp.event_handler(&VAR_7,
     VAR_3->ibqp.qp_context);
   break;
  case 129:
  case 128:
   VAR_6 = FUNC_3(VAR_3);
   FUNC_5(VAR_3);
   VAR_3->ibqp.event_handler(&VAR_7,
     VAR_3->ibqp.qp_context);
   break;
  default:
   VAR_6 = -VAR_1;
  }
  break;
 default:
  VAR_6 = -VAR_1;
 }
 FUNC_7(&VAR_3->lock);

 if (!VAR_6) {
  VAR_3->state = VAR_4;
  FUNC_13("Transitioned %u from %s to %s",
  VAR_3->grp_id,
  FUNC_12(VAR_8),
  FUNC_12(VAR_4));
 } else {
  FUNC_11("Failed to transition %u from %s to %s",
  VAR_3->grp_id,
  FUNC_12(VAR_8),
  FUNC_12(VAR_4));
 }

 return VAR_6;
}
