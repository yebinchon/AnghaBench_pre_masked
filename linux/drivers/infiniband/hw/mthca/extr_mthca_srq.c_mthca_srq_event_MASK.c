
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int srq_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct mthca_srq {int wait; int refcount; TYPE_3__ ibsrq; } ;
struct TYPE_8__ {int lock; int srq; } ;
struct TYPE_5__ {int num_srqs; } ;
struct mthca_dev {TYPE_4__ srq_table; int ib_dev; TYPE_1__ limits; } ;
struct TYPE_6__ {TYPE_3__* srq; } ;
struct ib_event {int event; TYPE_2__ element; int * device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 struct mthca_srq* FUNC_0 (int *,int) ;
 int FUNC_1 (struct mthca_dev*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_event*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mthca_dev *VAR_0, u32 VAR_1,
       enum ib_event_type VAR_2)
{
 struct mthca_srq *VAR_3;
 struct ib_event VAR_4;

 FUNC_2(&VAR_0->srq_table.lock);
 VAR_3 = FUNC_0(&VAR_0->srq_table.srq, VAR_1 & (VAR_0->limits.num_srqs - 1));
 if (VAR_3)
  ++VAR_3->refcount;
 FUNC_3(&VAR_0->srq_table.lock);

 if (!VAR_3) {
  FUNC_1(VAR_0, "Async event for bogus SRQ %08x\n", VAR_1);
  return;
 }

 if (!VAR_3->ibsrq.event_handler)
  goto out;

 VAR_4.device = &VAR_0->ib_dev;
 VAR_4.event = VAR_2;
 VAR_4.element.srq = &VAR_3->ibsrq;
 VAR_3->ibsrq.event_handler(&VAR_4, VAR_3->ibsrq.srq_context);

out:
 FUNC_2(&VAR_0->srq_table.lock);
 if (!--VAR_3->refcount)
  FUNC_5(&VAR_3->wait);
 FUNC_3(&VAR_0->srq_table.lock);
}
