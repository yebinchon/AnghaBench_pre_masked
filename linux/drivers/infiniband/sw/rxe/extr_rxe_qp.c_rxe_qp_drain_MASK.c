
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int task; } ;
struct TYPE_6__ {int task; } ;
struct TYPE_4__ {scalar_t__ queue; } ;
struct rxe_qp {TYPE_2__ req; TYPE_3__ comp; TYPE_1__ sq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct rxe_qp*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct rxe_qp *VAR_3)
{
 if (VAR_3->sq.queue) {
  if (VAR_3->req.state != VAR_2) {
   VAR_3->req.state = VAR_1;
   if (FUNC_1(VAR_3) == VAR_0)
    FUNC_2(&VAR_3->comp.task, 1);
   else
    FUNC_0(&VAR_3->comp.task);
   FUNC_2(&VAR_3->req.task, 1);
  }
 }
}
