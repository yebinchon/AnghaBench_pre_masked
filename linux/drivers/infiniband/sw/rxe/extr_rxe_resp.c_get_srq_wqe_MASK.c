
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int srq_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct TYPE_8__ {int consumer_lock; struct rxe_queue* queue; } ;
struct rxe_srq {scalar_t__ limit; TYPE_5__ ibsrq; TYPE_2__ rq; scalar_t__ error; } ;
struct rxe_recv_wqe {int dummy; } ;
struct rxe_queue {int dummy; } ;
struct TYPE_10__ {int srq; int device; } ;
struct TYPE_12__ {int wqe; } ;
struct TYPE_7__ {TYPE_6__ srq_wqe; int * wqe; } ;
struct rxe_qp {TYPE_4__ ibqp; TYPE_1__ resp; struct rxe_srq* srq; } ;
struct TYPE_9__ {int srq; } ;
struct ib_event {int event; TYPE_3__ element; int device; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rxe_queue*) ;
 int FUNC_1 (TYPE_6__*,struct rxe_recv_wqe*,int) ;
 scalar_t__ FUNC_2 (struct rxe_queue*) ;
 struct rxe_recv_wqe* FUNC_3 (struct rxe_queue*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ib_event*,int ) ;

__attribute__((used)) static enum resp_states FUNC_7(struct rxe_qp *VAR_3)
{
 struct rxe_srq *VAR_4 = VAR_3->srq;
 struct rxe_queue *VAR_5 = VAR_4->rq.queue;
 struct rxe_recv_wqe *VAR_6;
 struct ib_event VAR_7;

 if (VAR_4->error)
  return VAR_2;

 FUNC_4(&VAR_4->rq.consumer_lock);

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6) {
  FUNC_5(&VAR_4->rq.consumer_lock);
  return VAR_2;
 }


 FUNC_1(&VAR_3->resp.srq_wqe, VAR_6, sizeof(VAR_3->resp.srq_wqe));

 VAR_3->resp.wqe = &VAR_3->resp.srq_wqe.wqe;
 FUNC_0(VAR_5);

 if (VAR_4->limit && VAR_4->ibsrq.event_handler &&
     (FUNC_2(VAR_5) < VAR_4->limit)) {
  VAR_4->limit = 0;
  goto event;
 }

 FUNC_5(&VAR_4->rq.consumer_lock);
 return VAR_1;

event:
 FUNC_5(&VAR_4->rq.consumer_lock);
 VAR_7.device = VAR_3->ibqp.device;
 VAR_7.element.srq = VAR_3->ibqp.srq;
 VAR_7.event = VAR_0;
 VAR_4->ibsrq.event_handler(&VAR_7, VAR_4->ibsrq.srq_context);
 return VAR_1;
}
