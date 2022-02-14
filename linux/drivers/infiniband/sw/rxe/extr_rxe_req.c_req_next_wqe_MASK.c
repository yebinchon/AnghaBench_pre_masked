
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int send_flags; int opcode; } ;
struct rxe_send_wqe {scalar_t__ state; TYPE_5__ wr; int mask; } ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ wqe_index; int wait_fence; } ;
struct TYPE_8__ {int queue; } ;
struct TYPE_7__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rxe_qp {TYPE_4__ req; TYPE_3__ sq; TYPE_2__ ibqp; int state_lock; } ;
struct TYPE_6__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rxe_send_wqe* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct rxe_send_wqe* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct ib_event*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,struct rxe_qp*) ;

__attribute__((used)) static struct rxe_send_wqe *FUNC_9(struct rxe_qp *VAR_6)
{
 struct rxe_send_wqe *VAR_7 = FUNC_3(VAR_6->sq.queue);
 unsigned long VAR_8;

 if (FUNC_7(VAR_6->req.state == VAR_2)) {



  FUNC_4(&VAR_6->state_lock, VAR_8);
  do {
   if (VAR_6->req.state != VAR_2) {

    FUNC_5(&VAR_6->state_lock,
             VAR_8);
    break;
   }

   if (VAR_7 && ((VAR_6->req.wqe_index !=
    FUNC_1(VAR_6->sq.queue)) ||
    (VAR_7->state != VAR_4))) {

    FUNC_5(&VAR_6->state_lock,
             VAR_8);
    break;
   }

   VAR_6->req.state = VAR_3;
   FUNC_5(&VAR_6->state_lock, VAR_8);

   if (VAR_6->ibqp.event_handler) {
    struct ib_event VAR_9;

    VAR_9.device = VAR_6->ibqp.device;
    VAR_9.element.qp = &VAR_6->ibqp;
    VAR_9.event = VAR_0;
    VAR_6->ibqp.event_handler(&VAR_9,
     VAR_6->ibqp.qp_context);
   }
  } while (0);
 }

 if (VAR_6->req.wqe_index == FUNC_2(VAR_6->sq.queue))
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_6->sq.queue, VAR_6->req.wqe_index);

 if (FUNC_7((VAR_6->req.state == VAR_2 ||
        VAR_6->req.state == VAR_3) &&
       (VAR_7->state != VAR_5)))
  return ((void*)0);

 if (FUNC_7((VAR_7->wr.send_flags & VAR_1) &&
       (VAR_6->req.wqe_index != FUNC_1(VAR_6->sq.queue)))) {
  VAR_6->req.wait_fence = 1;
  return ((void*)0);
 }

 VAR_7->mask = FUNC_8(VAR_7->wr.opcode, VAR_6);
 return VAR_7;
}
