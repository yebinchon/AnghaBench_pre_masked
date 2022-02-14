
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rxe_send_wqe {scalar_t__ state; int last_psn; } ;
struct TYPE_3__ {int task; scalar_t__ wait_psn; } ;
struct TYPE_4__ {int psn; int opcode; } ;
struct rxe_qp {TYPE_1__ req; TYPE_2__ comp; } ;
struct rxe_pkt_info {int dummy; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rxe_qp*,struct rxe_send_wqe*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline enum comp_state FUNC_3(struct rxe_qp *VAR_3,
        struct rxe_pkt_info *VAR_4,
        struct rxe_send_wqe *VAR_5)
{
 if (VAR_4 && VAR_5->state == VAR_2) {
  if (FUNC_1(VAR_5->last_psn, VAR_3->comp.psn) >= 0) {
   VAR_3->comp.psn = (VAR_5->last_psn + 1) & VAR_0;
   VAR_3->comp.opcode = -1;
  }

  if (VAR_3->req.wait_psn) {
   VAR_3->req.wait_psn = 0;
   FUNC_2(&VAR_3->req.task, 1);
  }
 }

 FUNC_0(VAR_3, VAR_5);

 return VAR_1;
}
