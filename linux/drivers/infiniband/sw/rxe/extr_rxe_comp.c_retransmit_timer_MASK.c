
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int timeout; int task; } ;
struct rxe_qp {TYPE_1__ comp; scalar_t__ valid; } ;


 struct rxe_qp* FUNC_0 (int ,struct timer_list*,int ) ;
 struct rxe_qp* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct rxe_qp *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 if (VAR_3->valid) {
  VAR_3->comp.timeout = 1;
  FUNC_1(&VAR_3->comp.task, 1);
 }
}
