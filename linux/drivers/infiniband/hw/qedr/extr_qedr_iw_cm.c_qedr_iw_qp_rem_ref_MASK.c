
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_qp {int qp_id; TYPE_1__* dev; int refcnt; } ;
struct ib_qp {int dummy; } ;
struct TYPE_2__ {int qps; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct qedr_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (struct qedr_qp*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct ib_qp *VAR_0)
{
 struct qedr_qp *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(&VAR_1->refcnt)) {
  FUNC_3(&VAR_1->dev->qps, VAR_1->qp_id);
  FUNC_2(VAR_1);
 }
}
