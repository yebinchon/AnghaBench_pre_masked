
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int task; void* state; } ;
struct TYPE_5__ {int task; } ;
struct TYPE_7__ {int task; void* state; } ;
struct TYPE_8__ {int qp_state; } ;
struct rxe_qp {TYPE_2__ req; TYPE_1__ comp; TYPE_3__ resp; TYPE_4__ attr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct rxe_qp*) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct rxe_qp *VAR_3)
{
 VAR_3->req.state = VAR_2;
 VAR_3->resp.state = VAR_2;
 VAR_3->attr.qp_state = VAR_0;


 FUNC_2(&VAR_3->resp.task, 1);

 if (FUNC_1(VAR_3) == VAR_1)
  FUNC_2(&VAR_3->comp.task, 1);
 else
  FUNC_0(&VAR_3->comp.task);
 FUNC_2(&VAR_3->req.task, 1);
}
