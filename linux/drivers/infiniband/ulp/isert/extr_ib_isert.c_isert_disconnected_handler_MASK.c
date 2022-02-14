
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {TYPE_1__* qp; } ;
struct isert_conn {int state; int mutex; int conn; int qp; } ;
typedef enum rdma_cm_event_type { ____Placeholder_rdma_cm_event_type } rdma_cm_event_type ;
struct TYPE_2__ {struct isert_conn* qp_context; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct isert_conn*) ;
 int FUNC_3 (struct isert_conn*) ;
 int FUNC_4 (char*,struct isert_conn*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct rdma_cm_id *VAR_0,
      enum rdma_cm_event_type VAR_1)
{
 struct isert_conn *VAR_2 = VAR_0->qp->qp_context;

 FUNC_5(&VAR_2->mutex);
 switch (VAR_2->state) {
 case 129:
  break;
 case 128:
  FUNC_2(VAR_2);
  FUNC_0(VAR_2->qp);
  FUNC_3(VAR_2);
  break;
 case 131:
 case 130:
  FUNC_1(VAR_2->conn, 0);
  break;
 default:
  FUNC_4("conn %p terminating in state %d\n",
      VAR_2, VAR_2->state);
 }
 FUNC_6(&VAR_2->mutex);

 return 0;
}
