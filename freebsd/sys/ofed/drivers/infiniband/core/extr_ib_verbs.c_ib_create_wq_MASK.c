
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_wq_init_attr {TYPE_2__* cq; int wq_type; int wq_context; int event_handler; } ;
struct ib_wq {int usecnt; int * uobject; struct ib_pd* pd; TYPE_1__* device; TYPE_2__* cq; int wq_type; int wq_context; int event_handler; } ;
struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct TYPE_4__ {int usecnt; } ;
struct TYPE_3__ {struct ib_wq* (* create_wq ) (struct ib_pd*,struct ib_wq_init_attr*,int *) ;} ;


 int VAR_0 ;
 struct ib_wq* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_wq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ib_wq* FUNC_4 (struct ib_pd*,struct ib_wq_init_attr*,int *) ;

struct ib_wq *FUNC_5(struct ib_pd *VAR_1,
      struct ib_wq_init_attr *VAR_2)
{
 struct ib_wq *VAR_3;

 if (!VAR_1->device->create_wq)
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_1->device->create_wq(VAR_1, VAR_2, ((void*)0));
 if (!FUNC_1(VAR_3)) {
  VAR_3->event_handler = VAR_2->event_handler;
  VAR_3->wq_context = VAR_2->wq_context;
  VAR_3->wq_type = VAR_2->wq_type;
  VAR_3->cq = VAR_2->cq;
  VAR_3->device = VAR_1->device;
  VAR_3->pd = VAR_1;
  VAR_3->uobject = ((void*)0);
  FUNC_2(&VAR_1->usecnt);
  FUNC_2(&VAR_2->cq->usecnt);
  FUNC_3(&VAR_3->usecnt, 0);
 }
 return VAR_3;
}
