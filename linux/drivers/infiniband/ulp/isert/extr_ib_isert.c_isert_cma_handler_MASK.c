
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {TYPE_1__* qp; struct isert_np* context; } ;
struct rdma_cm_event {int event; int status; } ;
struct isert_np {struct rdma_cm_id* cm_id; } ;
struct isert_conn {int dev_removed; int state; int rem_wait; } ;
struct TYPE_2__ {struct isert_conn* qp_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*,struct rdma_cm_event*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (struct rdma_cm_id*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (struct isert_np*,int) ;
 int FUNC_7 (struct isert_conn*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct rdma_cm_id*,int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int
FUNC_11(struct rdma_cm_id *VAR_1, struct rdma_cm_event *VAR_2)
{
 struct isert_np *VAR_3 = VAR_1->context;
 struct isert_conn *VAR_4;
 int VAR_5 = 0;

 FUNC_5("%s (%d): status %d id %p np %p\n",
     FUNC_8(VAR_2->event), VAR_2->event,
     VAR_2->status, VAR_1, VAR_1->context);

 if (VAR_3->cm_id == VAR_1)
  return FUNC_6(VAR_1->context, VAR_2->event);

 switch (VAR_2->event) {
 case 134:
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  if (VAR_5)
   FUNC_4("failed handle connect request %d\n", VAR_5);
  break;
 case 131:
  FUNC_2(VAR_1);
  break;
 case 136:
 case 132:
 case 129:
  VAR_5 = FUNC_3(VAR_1, VAR_2->event);
  break;
 case 133:
  VAR_4 = VAR_1->qp->qp_context;
  VAR_4->dev_removed = 1;
  FUNC_3(VAR_1, VAR_2->event);
  FUNC_10(VAR_4->rem_wait,
      VAR_4->state == VAR_0);
  FUNC_7(VAR_4);




  return 1;
 case 130:
  FUNC_5("Connection rejected: %s\n",
      FUNC_9(VAR_1, VAR_2->status));

 case 128:
 case 135:
  VAR_5 = FUNC_0(VAR_1);
  break;
 default:
  FUNC_4("Unhandled RDMA CMA event: %d\n", VAR_2->event);
  break;
 }

 return VAR_5;
}
