
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* create_cq ) (struct ib_cq*,struct ib_cq_init_attr const*,int *) ;} ;
struct ib_device {TYPE_1__ ops; } ;
struct ib_cq_init_attr {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct ib_cq {void (* event_handler ) (struct ib_event*,void*) ;TYPE_2__ res; int usecnt; void* cq_context; int comp_handler; int * uobject; struct ib_device* device; } ;
typedef int ib_comp_handler ;


 int VAR_0 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ib_cq*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 struct ib_cq* FUNC_5 (struct ib_device*,int ) ;
 int FUNC_6 (struct ib_cq*,struct ib_cq_init_attr const*,int *) ;

struct ib_cq *FUNC_7(struct ib_device *VAR_3,
        ib_comp_handler VAR_4,
        void (*VAR_5)(struct ib_event *, void *),
        void *VAR_6,
        const struct ib_cq_init_attr *VAR_7,
        const char *VAR_8)
{
 struct ib_cq *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->device = VAR_3;
 VAR_9->uobject = ((void*)0);
 VAR_9->comp_handler = VAR_4;
 VAR_9->event_handler = VAR_5;
 VAR_9->cq_context = VAR_6;
 FUNC_1(&VAR_9->usecnt, 0);
 VAR_9->res.type = VAR_1;
 FUNC_4(&VAR_9->res, VAR_8);

 VAR_10 = VAR_3->ops.create_cq(VAR_9, VAR_7, ((void*)0));
 if (VAR_10) {
  FUNC_2(VAR_9);
  return FUNC_0(VAR_10);
 }

 FUNC_3(&VAR_9->res);
 return VAR_9;
}
