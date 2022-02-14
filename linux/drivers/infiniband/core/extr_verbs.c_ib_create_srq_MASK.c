
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* xrcd; } ;
struct TYPE_10__ {TYPE_1__ xrc; TYPE_6__* cq; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; TYPE_2__ ext; int srq_context; int event_handler; } ;
struct TYPE_13__ {TYPE_4__* xrcd; } ;
struct TYPE_15__ {TYPE_6__* cq; TYPE_5__ xrc; } ;
struct ib_srq {scalar_t__ srq_type; TYPE_7__ ext; struct ib_pd* pd; int srq_context; int event_handler; TYPE_8__* device; } ;
struct ib_pd {int usecnt; TYPE_8__* device; } ;
struct TYPE_11__ {int (* create_srq ) (struct ib_srq*,struct ib_srq_init_attr*,int *) ;} ;
struct TYPE_16__ {TYPE_3__ ops; } ;
struct TYPE_14__ {int usecnt; } ;
struct TYPE_12__ {int usecnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_srq* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ib_srq*) ;
 struct ib_srq* FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (struct ib_srq*,struct ib_srq_init_attr*,int *) ;

struct ib_srq *FUNC_7(struct ib_pd *VAR_4,
        struct ib_srq_init_attr *VAR_5)
{
 struct ib_srq *VAR_6;
 int VAR_7;

 if (!VAR_4->device->ops.create_srq)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_5(VAR_4->device, VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->device = VAR_4->device;
 VAR_6->pd = VAR_4;
 VAR_6->event_handler = VAR_5->event_handler;
 VAR_6->srq_context = VAR_5->srq_context;
 VAR_6->srq_type = VAR_5->srq_type;

 if (FUNC_3(VAR_6->srq_type)) {
  VAR_6->ext.cq = VAR_5->ext.cq;
  FUNC_2(&VAR_6->ext.cq->usecnt);
 }
 if (VAR_6->srq_type == VAR_2) {
  VAR_6->ext.xrc.xrcd = VAR_5->ext.xrc.xrcd;
  FUNC_2(&VAR_6->ext.xrc.xrcd->usecnt);
 }
 FUNC_2(&VAR_4->usecnt);

 VAR_7 = VAR_4->device->ops.create_srq(VAR_6, VAR_5, ((void*)0));
 if (VAR_7) {
  FUNC_1(&VAR_6->pd->usecnt);
  if (VAR_6->srq_type == VAR_2)
   FUNC_1(&VAR_6->ext.xrc.xrcd->usecnt);
  if (FUNC_3(VAR_6->srq_type))
   FUNC_1(&VAR_6->ext.cq->usecnt);
  FUNC_4(VAR_6);
  return FUNC_0(VAR_7);
 }

 return VAR_6;
}
