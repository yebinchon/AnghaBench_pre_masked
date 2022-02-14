
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_iw_ep {int during_connect; TYPE_1__* cm_id; struct qedr_dev* dev; } ;
struct qedr_dev {int dummy; } ;
struct qed_iwarp_cm_event_params {int event; int status; } ;
struct TYPE_2__ {int (* rem_ref ) (TYPE_1__*) ;} ;


 int FUNC_0 (struct qedr_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,struct qed_iwarp_cm_event_params*) ;
 int FUNC_2 (void*,struct qed_iwarp_cm_event_params*) ;
 int FUNC_3 (void*,struct qed_iwarp_cm_event_params*,int ) ;
 int FUNC_4 (void*,struct qed_iwarp_cm_event_params*) ;
 int FUNC_5 (void*,struct qed_iwarp_cm_event_params*) ;
 int FUNC_6 (void*,struct qed_iwarp_cm_event_params*) ;
 int FUNC_7 (void*,struct qed_iwarp_cm_event_params*,int ,char*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(void *VAR_3, struct qed_iwarp_cm_event_params *VAR_4)
{
 struct qedr_iw_ep *VAR_5 = (struct qedr_iw_ep *)VAR_3;
 struct qedr_dev *VAR_6 = VAR_5->dev;

 switch (VAR_4->event) {
 case 134:
  FUNC_5(VAR_3, VAR_4);
  break;
 case 141:
  FUNC_4(VAR_3, VAR_4);
  break;
 case 133:
  VAR_5->during_connect = 0;
  FUNC_6(VAR_3, VAR_4);
  break;

 case 142:
  VAR_5->during_connect = 0;
  FUNC_3(VAR_3,
        VAR_4,
        VAR_2);
  if (VAR_4->status < 0) {
   struct qedr_iw_ep *VAR_7 = (struct qedr_iw_ep *)VAR_3;

   VAR_7->cm_id->rem_ref(VAR_7->cm_id);
   VAR_7->cm_id = ((void*)0);
  }
  break;
 case 138:
  FUNC_2(VAR_3, VAR_4);
  break;
 case 140:
  VAR_5->during_connect = 0;
  FUNC_1(VAR_3, VAR_4);
  break;
 case 129:
  FUNC_7(VAR_3, VAR_4, VAR_1,
     "QED_IWARP_EVENT_RQ_EMPTY");
  break;
 case 137:
  FUNC_7(VAR_3, VAR_4, VAR_1,
     "QED_IWARP_EVENT_IRQ_FULL");
  break;
 case 136:
  FUNC_7(VAR_3, VAR_4, VAR_1,
     "QED_IWARP_EVENT_LLP_TIMEOUT");
  break;
 case 130:
  FUNC_7(VAR_3, VAR_4, VAR_0,
     "QED_IWARP_EVENT_REMOTE_PROTECTION_ERROR");
  break;
 case 139:
  FUNC_7(VAR_3, VAR_4, VAR_1,
     "QED_IWARP_EVENT_CQ_OVERFLOW");
  break;
 case 132:
  FUNC_7(VAR_3, VAR_4, VAR_1,
     "QED_IWARP_EVENT_QP_CATASTROPHIC");
  break;
 case 135:
  FUNC_7(VAR_3, VAR_4, VAR_0,
     "QED_IWARP_EVENT_LOCAL_ACCESS_ERROR");
  break;
 case 131:
  FUNC_7(VAR_3, VAR_4, VAR_1,
     "QED_IWARP_EVENT_REMOTE_OPERATION_ERROR");
  break;
 case 128:
  FUNC_0(VAR_6, "Got terminate message\n");
  break;
 default:
  FUNC_0(VAR_6, "Unknown event received %d\n", VAR_4->event);
  break;
 }
 return 0;
}
