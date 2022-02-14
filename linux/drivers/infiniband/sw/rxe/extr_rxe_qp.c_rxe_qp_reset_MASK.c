
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int opcode; int task; scalar_t__ noack_pkts; scalar_t__ need_retry; void* state; } ;
struct TYPE_7__ {int task; } ;
struct TYPE_6__ {scalar_t__ queue; } ;
struct TYPE_5__ {int opcode; int task; int * mr; scalar_t__ sent_psn_nak; scalar_t__ goto_error; scalar_t__ drop_msg; scalar_t__ msn; void* state; } ;
struct rxe_qp {TYPE_4__ req; TYPE_3__ comp; TYPE_2__ sq; TYPE_1__ resp; int ssn; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct rxe_qp*) ;
 scalar_t__ FUNC_3 (struct rxe_qp*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct rxe_qp *VAR_2)
{

 FUNC_4(&VAR_2->resp.task);


 if (VAR_2->sq.queue) {
  if (FUNC_3(VAR_2) == VAR_0)
   FUNC_4(&VAR_2->comp.task);
  FUNC_4(&VAR_2->req.task);
 }


 VAR_2->req.state = VAR_1;
 VAR_2->resp.state = VAR_1;




 FUNC_0(&VAR_2->resp.task);

 if (VAR_2->sq.queue) {
  FUNC_0(&VAR_2->comp.task);
  FUNC_0(&VAR_2->req.task);
  FUNC_7(VAR_2->sq.queue);
 }


 FUNC_1(&VAR_2->ssn, 0);
 VAR_2->req.opcode = -1;
 VAR_2->req.need_retry = 0;
 VAR_2->req.noack_pkts = 0;
 VAR_2->resp.msn = 0;
 VAR_2->resp.opcode = -1;
 VAR_2->resp.drop_msg = 0;
 VAR_2->resp.goto_error = 0;
 VAR_2->resp.sent_psn_nak = 0;

 if (VAR_2->resp.mr) {
  FUNC_5(VAR_2->resp.mr);
  VAR_2->resp.mr = ((void*)0);
 }

 FUNC_2(VAR_2);


 FUNC_6(&VAR_2->resp.task);

 if (VAR_2->sq.queue) {
  if (FUNC_3(VAR_2) == VAR_0)
   FUNC_6(&VAR_2->comp.task);

  FUNC_6(&VAR_2->req.task);
 }
}
