
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i40iw_sc_qp {scalar_t__ back_qp; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct i40iw_qp {TYPE_1__ terminate_timer; int ibqp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

void FUNC_3(struct i40iw_sc_qp *VAR_3)
{
 struct i40iw_qp *VAR_4;

 VAR_4 = (struct i40iw_qp *)VAR_3->back_qp;
 FUNC_1(&VAR_4->ibqp);
 FUNC_2(&VAR_4->terminate_timer, VAR_1, 0);
 VAR_4->terminate_timer.expires = VAR_2 + VAR_0;
 FUNC_0(&VAR_4->terminate_timer);
}
