
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int lock; int cq; } ;
struct TYPE_5__ {int num_cqs; } ;
struct mthca_dev {TYPE_4__ cq_table; int ib_dev; TYPE_1__ limits; } ;
struct TYPE_7__ {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct mthca_cq {int wait; int refcount; TYPE_3__ ibcq; } ;
struct TYPE_6__ {TYPE_3__* cq; } ;
struct ib_event {int event; TYPE_2__ element; int * device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 struct mthca_cq* FUNC_0 (int *,int) ;
 int FUNC_1 (struct mthca_dev*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_event*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mthca_dev *VAR_0, u32 VAR_1,
      enum ib_event_type VAR_2)
{
 struct mthca_cq *VAR_3;
 struct ib_event VAR_4;

 FUNC_2(&VAR_0->cq_table.lock);

 VAR_3 = FUNC_0(&VAR_0->cq_table.cq, VAR_1 & (VAR_0->limits.num_cqs - 1));
 if (VAR_3)
  ++VAR_3->refcount;

 FUNC_3(&VAR_0->cq_table.lock);

 if (!VAR_3) {
  FUNC_1(VAR_0, "Async event for bogus CQ %08x\n", VAR_1);
  return;
 }

 VAR_4.device = &VAR_0->ib_dev;
 VAR_4.event = VAR_2;
 VAR_4.element.cq = &VAR_3->ibcq;
 if (VAR_3->ibcq.event_handler)
  VAR_3->ibcq.event_handler(&VAR_4, VAR_3->ibcq.cq_context);

 FUNC_2(&VAR_0->cq_table.lock);
 if (!--VAR_3->refcount)
  FUNC_5(&VAR_3->wait);
 FUNC_3(&VAR_0->cq_table.lock);
}
