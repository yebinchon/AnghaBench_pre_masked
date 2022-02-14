
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rxe_cqe {int dummy; } ;
struct TYPE_4__ {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rxe_cq {scalar_t__ notify; int comp_task; int cq_lock; int queue; TYPE_2__ ibcq; } ;
struct TYPE_3__ {TYPE_2__* cq; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct rxe_cqe*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct ib_event*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct rxe_cq *VAR_4, struct rxe_cqe *VAR_5, int VAR_6)
{
 struct ib_event VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_4->cq_lock, VAR_8);

 if (FUNC_9(FUNC_3(VAR_4->queue))) {
  FUNC_6(&VAR_4->cq_lock, VAR_8);
  if (VAR_4->ibcq.event_handler) {
   VAR_7.device = VAR_4->ibcq.device;
   VAR_7.element.cq = &VAR_4->ibcq;
   VAR_7.event = VAR_3;
   VAR_4->ibcq.event_handler(&VAR_7, VAR_4->ibcq.cq_context);
  }

  return -VAR_0;
 }

 FUNC_1(FUNC_2(VAR_4->queue), VAR_5, sizeof(*VAR_5));




 FUNC_4();

 FUNC_0(VAR_4->queue);
 FUNC_6(&VAR_4->cq_lock, VAR_8);

 if ((VAR_4->notify == VAR_1) ||
     (VAR_4->notify == VAR_2 && VAR_6)) {
  VAR_4->notify = 0;
  FUNC_8(&VAR_4->comp_task);
 }

 return 0;
}
