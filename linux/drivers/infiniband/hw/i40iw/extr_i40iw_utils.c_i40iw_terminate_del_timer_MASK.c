
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_qp {scalar_t__ back_qp; } ;
struct i40iw_qp {int ibqp; int terminate_timer; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct i40iw_sc_qp *VAR_0)
{
 struct i40iw_qp *VAR_1;

 VAR_1 = (struct i40iw_qp *)VAR_0->back_qp;
 if (FUNC_0(&VAR_1->terminate_timer))
  FUNC_1(&VAR_1->ibqp);
}
