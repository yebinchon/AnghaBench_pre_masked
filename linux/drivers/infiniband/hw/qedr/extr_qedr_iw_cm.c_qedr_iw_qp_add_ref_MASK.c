
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp {int refcnt; } ;
struct ib_qp {int dummy; } ;


 int FUNC_0 (int *) ;
 struct qedr_qp* FUNC_1 (struct ib_qp*) ;

void FUNC_2(struct ib_qp *VAR_0)
{
 struct qedr_qp *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->refcnt);
}
