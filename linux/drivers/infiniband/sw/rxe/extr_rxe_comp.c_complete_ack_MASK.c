
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rxe_send_wqe {scalar_t__ has_rd_atomic; } ;
struct TYPE_8__ {scalar_t__ psn; scalar_t__ timeout_retry; } ;
struct TYPE_7__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ psn; int task; scalar_t__ need_rd_atomic; int rd_atomic; } ;
struct rxe_qp {TYPE_4__ comp; int state_lock; TYPE_3__ ibqp; TYPE_1__ req; } ;
struct rxe_pkt_info {int psn; } ;
struct TYPE_6__ {TYPE_3__* qp; } ;
struct ib_event {int event; TYPE_2__ element; int device; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rxe_qp*,struct rxe_send_wqe*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct ib_event*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline enum comp_state FUNC_8(struct rxe_qp *VAR_5,
        struct rxe_pkt_info *VAR_6,
        struct rxe_send_wqe *VAR_7)
{
 unsigned long VAR_8;

 if (VAR_7->has_rd_atomic) {
  VAR_7->has_rd_atomic = 0;
  FUNC_0(&VAR_5->req.rd_atomic);
  if (VAR_5->req.need_rd_atomic) {
   VAR_5->comp.timeout_retry = 0;
   VAR_5->req.need_rd_atomic = 0;
   FUNC_3(&VAR_5->req.task, 1);
  }
 }

 if (FUNC_7(VAR_5->req.state == VAR_3)) {

  FUNC_4(&VAR_5->state_lock, VAR_8);
  if ((VAR_5->req.state == VAR_3) &&
      (VAR_5->comp.psn == VAR_5->req.psn)) {
   VAR_5->req.state = VAR_4;
   FUNC_5(&VAR_5->state_lock, VAR_8);

   if (VAR_5->ibqp.event_handler) {
    struct ib_event VAR_9;

    VAR_9.device = VAR_5->ibqp.device;
    VAR_9.element.qp = &VAR_5->ibqp;
    VAR_9.event = VAR_2;
    VAR_5->ibqp.event_handler(&VAR_9,
     VAR_5->ibqp.qp_context);
   }
  } else {
   FUNC_5(&VAR_5->state_lock, VAR_8);
  }
 }

 FUNC_1(VAR_5, VAR_7);

 if (FUNC_2(VAR_6->psn, VAR_5->comp.psn) >= 0)
  return VAR_1;
 else
  return VAR_0;
}
