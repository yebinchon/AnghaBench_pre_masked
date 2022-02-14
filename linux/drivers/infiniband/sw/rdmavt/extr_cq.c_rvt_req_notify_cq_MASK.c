
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_cq {int notify; int lock; TYPE_2__* kqueue; TYPE_1__* queue; } ;
struct ib_cq {int dummy; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_4__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_3__ {int tail; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct rvt_cq* FUNC_1 (struct ib_cq*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ib_cq *VAR_3, enum ib_cq_notify_flags VAR_4)
{
 struct rvt_cq *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_5->lock, VAR_6);




 if (VAR_5->notify != VAR_0)
  VAR_5->notify = VAR_4 & VAR_2;

 if (VAR_4 & VAR_1) {
  if (VAR_5->queue) {
   if (FUNC_0(VAR_5->queue->head) !=
    FUNC_0(VAR_5->queue->tail))
    VAR_7 = 1;
  } else {
   if (VAR_5->kqueue->head != VAR_5->kqueue->tail)
    VAR_7 = 1;
  }
 }

 FUNC_3(&VAR_5->lock, VAR_6);

 return VAR_7;
}
