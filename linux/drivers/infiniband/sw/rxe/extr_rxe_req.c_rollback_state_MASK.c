
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rxe_send_wqe {int last_psn; int first_psn; int state; } ;
struct TYPE_2__ {int psn; } ;
struct rxe_qp {TYPE_1__ req; } ;



__attribute__((used)) static void FUNC_0(struct rxe_send_wqe *VAR_0,
      struct rxe_qp *VAR_1,
      struct rxe_send_wqe *VAR_2,
      u32 VAR_3)
{
 VAR_0->state = VAR_2->state;
 VAR_0->first_psn = VAR_2->first_psn;
 VAR_0->last_psn = VAR_2->last_psn;
 VAR_1->req.psn = VAR_3;
}
