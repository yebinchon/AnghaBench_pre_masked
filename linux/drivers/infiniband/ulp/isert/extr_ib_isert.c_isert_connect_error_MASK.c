
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {TYPE_1__* qp; } ;
struct isert_conn {int * cm_id; int node; int qp; } ;
struct TYPE_2__ {struct isert_conn* qp_context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isert_conn*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct rdma_cm_id *VAR_0)
{
 struct isert_conn *VAR_1 = VAR_0->qp->qp_context;

 FUNC_0(VAR_1->qp);
 FUNC_2(&VAR_1->node);
 VAR_1->cm_id = ((void*)0);
 FUNC_1(VAR_1);

 return -1;
}
