
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {struct isert_np* context; TYPE_1__* qp; } ;
struct isert_np {int sem; int mutex; int pending; int node; int kref; int state; } ;
struct isert_conn {int sem; int mutex; int pending; int node; int kref; int state; } ;
struct TYPE_2__ {struct isert_np* qp_context; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct isert_np*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct rdma_cm_id *VAR_1)
{
 struct isert_conn *VAR_2 = VAR_1->qp->qp_context;
 struct isert_np *VAR_3 = VAR_1->context;

 FUNC_0("conn %p\n", VAR_2);

 FUNC_3(&VAR_2->mutex);
 VAR_2->state = VAR_0;
 FUNC_1(&VAR_2->kref);
 FUNC_4(&VAR_2->mutex);

 FUNC_3(&VAR_3->mutex);
 FUNC_2(&VAR_2->node, &VAR_3->pending);
 FUNC_4(&VAR_3->mutex);

 FUNC_0("np %p: Allow accept_np to continue\n", VAR_3);
 FUNC_5(&VAR_3->sem);
}
