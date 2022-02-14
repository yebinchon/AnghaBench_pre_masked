
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int task; } ;
struct TYPE_7__ {int task; } ;
struct TYPE_6__ {scalar_t__ queue; } ;
struct TYPE_5__ {int task; } ;
struct rxe_qp {TYPE_4__ req; TYPE_3__ comp; TYPE_2__ sq; int rnr_nak_timer; int retrans_timer; TYPE_1__ resp; scalar_t__ qp_timeout_jiffies; scalar_t__ valid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct rxe_qp*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rxe_qp *VAR_1)
{
 VAR_1->valid = 0;
 VAR_1->qp_timeout_jiffies = 0;
 FUNC_3(&VAR_1->resp.task);

 if (FUNC_2(VAR_1) == VAR_0) {
  FUNC_1(&VAR_1->retrans_timer);
  FUNC_1(&VAR_1->rnr_nak_timer);
 }

 FUNC_3(&VAR_1->req.task);
 FUNC_3(&VAR_1->comp.task);


 FUNC_0(&VAR_1->req.task);
 if (VAR_1->sq.queue) {
  FUNC_0(&VAR_1->comp.task);
  FUNC_0(&VAR_1->req.task);
 }
}
