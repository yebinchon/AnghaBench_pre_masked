
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {struct ib_cq* (* create_cq ) (struct ib_device*,struct ib_cq_init_attr const*,int *,int *) ;} ;
struct ib_cq_init_attr {int dummy; } ;
struct ib_cq {void (* event_handler ) (struct ib_event*,void*) ;int usecnt; void* cq_context; int comp_handler; int * uobject; struct ib_device* device; } ;
typedef int ib_comp_handler ;


 int FUNC_0 (struct ib_cq*) ;
 int FUNC_1 (int *,int ) ;
 struct ib_cq* FUNC_2 (struct ib_device*,struct ib_cq_init_attr const*,int *,int *) ;

struct ib_cq *FUNC_3(struct ib_device *VAR_0,
      ib_comp_handler VAR_1,
      void (*VAR_2)(struct ib_event *, void *),
      void *VAR_3,
      const struct ib_cq_init_attr *VAR_4)
{
 struct ib_cq *VAR_5;

 VAR_5 = VAR_0->create_cq(VAR_0, VAR_4, ((void*)0), ((void*)0));

 if (!FUNC_0(VAR_5)) {
  VAR_5->device = VAR_0;
  VAR_5->uobject = ((void*)0);
  VAR_5->comp_handler = VAR_1;
  VAR_5->event_handler = VAR_2;
  VAR_5->cq_context = VAR_3;
  FUNC_1(&VAR_5->usecnt, 0);
 }

 return VAR_5;
}
