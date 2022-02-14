
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
struct ib_pd {unsigned int flags; struct ib_mr* __internal_mr; int unsafe_global_rkey; int local_dma_lkey; struct ib_device* device; TYPE_3__ res; int usecnt; int * uobject; } ;
struct ib_mr {int need_inval; int rkey; int lkey; int * uobject; int type; struct ib_pd* pd; struct ib_device* device; } ;
struct TYPE_6__ {int device_cap_flags; } ;
struct TYPE_5__ {int (* alloc_pd ) (struct ib_pd*,int *) ;struct ib_mr* (* get_dma_mr ) (struct ib_pd*,int) ;} ;
struct ib_device {TYPE_2__ attrs; TYPE_1__ ops; int local_dma_lkey; } ;


 int VAR_0 ;
 struct ib_pd* FUNC_0 (struct ib_mr*) ;
 struct ib_pd* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_2 (struct ib_mr*) ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ib_pd*) ;
 int VAR_8 ;
 int FUNC_5 (struct ib_pd*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char const*) ;
 struct ib_pd* FUNC_9 (struct ib_device*,int ) ;
 int FUNC_10 (struct ib_pd*,int *) ;
 struct ib_mr* FUNC_11 (struct ib_pd*,int) ;

struct ib_pd *FUNC_12(struct ib_device *VAR_9, unsigned int VAR_10,
  const char *VAR_11)
{
 struct ib_pd *VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 VAR_12 = FUNC_9(VAR_9, VAR_8);
 if (!VAR_12)
  return FUNC_1(-VAR_0);

 VAR_12->device = VAR_9;
 VAR_12->uobject = ((void*)0);
 VAR_12->__internal_mr = ((void*)0);
 FUNC_3(&VAR_12->usecnt, 0);
 VAR_12->flags = VAR_10;

 VAR_12->res.type = VAR_7;
 FUNC_8(&VAR_12->res, VAR_11);

 VAR_14 = VAR_9->ops.alloc_pd(VAR_12, ((void*)0));
 if (VAR_14) {
  FUNC_5(VAR_12);
  return FUNC_1(VAR_14);
 }
 FUNC_7(&VAR_12->res);

 if (VAR_9->attrs.device_cap_flags & VAR_4)
  VAR_12->local_dma_lkey = VAR_9->local_dma_lkey;
 else
  VAR_13 |= VAR_1;

 if (VAR_10 & VAR_6) {
  FUNC_6("%s: enabling unsafe global rkey\n", VAR_11);
  VAR_13 |= VAR_2 | VAR_3;
 }

 if (VAR_13) {
  struct ib_mr *VAR_15;

  VAR_15 = VAR_12->device->ops.get_dma_mr(VAR_12, VAR_13);
  if (FUNC_2(VAR_15)) {
   FUNC_4(VAR_12);
   return FUNC_0(VAR_15);
  }

  VAR_15->device = VAR_12->device;
  VAR_15->pd = VAR_12;
  VAR_15->type = VAR_5;
  VAR_15->uobject = ((void*)0);
  VAR_15->need_inval = 0;

  VAR_12->__internal_mr = VAR_15;

  if (!(VAR_9->attrs.device_cap_flags & VAR_4))
   VAR_12->local_dma_lkey = VAR_12->__internal_mr->lkey;

  if (VAR_10 & VAR_6)
   VAR_12->unsafe_global_rkey = VAR_12->__internal_mr->rkey;
 }

 return VAR_12;
}
