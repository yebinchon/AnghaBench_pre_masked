
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct i40iw_sc_qp {int dummy; } ;
struct i40iw_qp {int ibqp; int sc_qp; } ;


 struct i40iw_qp* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i40iw_sc_qp*,int) ;
 struct i40iw_qp* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct i40iw_qp *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct i40iw_sc_qp *VAR_4 = (struct i40iw_sc_qp *)&VAR_3->sc_qp;

 FUNC_2(VAR_4, 1);
 FUNC_1(&VAR_3->ibqp);
}
