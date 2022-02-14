
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp {int srq; } ;


 int FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;

void FUNC_2(struct ib_qp *VAR_0)
{
 FUNC_1(VAR_0);
 if (!VAR_0->srq)
  FUNC_0(VAR_0);
}
