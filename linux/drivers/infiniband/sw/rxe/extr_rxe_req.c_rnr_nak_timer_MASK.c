
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int task; } ;
struct rxe_qp {TYPE_1__ req; } ;


 struct rxe_qp* FUNC_0 (int ,struct timer_list*,void (*) (struct timer_list*)) ;
 int FUNC_1 (char*,int ) ;
 struct rxe_qp* VAR_0 ;
 int FUNC_2 (struct rxe_qp*) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct timer_list *VAR_1)
{
 struct rxe_qp *VAR_2 = FUNC_0(VAR_2, VAR_1, FUNC_4);

 FUNC_1("qp#%d rnr nak timer fired\n", FUNC_2(VAR_2));
 FUNC_3(&VAR_2->req.task, 1);
}
