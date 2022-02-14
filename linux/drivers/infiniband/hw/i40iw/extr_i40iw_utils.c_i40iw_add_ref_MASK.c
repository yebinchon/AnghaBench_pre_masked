
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp {int dummy; } ;
struct i40iw_qp {int refcount; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ib_qp *VAR_0)
{
 struct i40iw_qp *VAR_1 = (struct i40iw_qp *)VAR_0;

 FUNC_0(&VAR_1->refcount);
}
