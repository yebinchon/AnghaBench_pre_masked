
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cm_id; } ;
struct TYPE_4__ {int cm_id; } ;
struct srpt_rdma_ch {int state; TYPE_3__* qp; int sess_name; TYPE_2__ ib_cm; TYPE_1__ rdma_cm; int using_rdma_cm; } ;
struct ib_event {int event; } ;
struct TYPE_6__ {int qp_num; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int,struct srpt_rdma_ch*,int ,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct ib_event *VAR_0, struct srpt_rdma_ch *VAR_1)
{
 FUNC_2("QP event %d on ch=%p sess_name=%s state=%d\n",
   VAR_0->event, VAR_1, VAR_1->sess_name, VAR_1->state);

 switch (VAR_0->event) {
 case 129:
  if (VAR_1->using_rdma_cm)
   FUNC_4(VAR_1->rdma_cm.cm_id, VAR_0->event);
  else
   FUNC_1(VAR_1->ib_cm.cm_id, VAR_0->event);
  break;
 case 128:
  FUNC_2("%s-%d, state %s: received Last WQE event.\n",
    VAR_1->sess_name, VAR_1->qp->qp_num,
    FUNC_0(VAR_1->state));
  break;
 default:
  FUNC_3("received unrecognized IB QP event %d\n", VAR_0->event);
  break;
 }
}
