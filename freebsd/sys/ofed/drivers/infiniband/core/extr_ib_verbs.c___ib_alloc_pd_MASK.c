
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {unsigned int flags; int need_inval; int rkey; struct ib_pd* __internal_mr; int unsafe_global_rkey; int lkey; int local_dma_lkey; int * uobject; struct ib_pd* pd; struct ib_device* device; int usecnt; } ;
struct ib_mr {unsigned int flags; int need_inval; int rkey; struct ib_mr* __internal_mr; int unsafe_global_rkey; int lkey; int local_dma_lkey; int * uobject; struct ib_mr* pd; struct ib_device* device; int usecnt; } ;
struct TYPE_2__ {int device_cap_flags; } ;
struct ib_device {TYPE_1__ attrs; struct ib_pd* (* get_dma_mr ) (struct ib_pd*,int) ;int local_dma_lkey; struct ib_pd* (* alloc_pd ) (struct ib_device*,int *,int *) ;} ;


 struct ib_pd* FUNC_0 (struct ib_pd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (struct ib_pd*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ib_pd*) ;
 int FUNC_4 (char*,char const*) ;
 struct ib_pd* FUNC_5 (struct ib_device*,int *,int *) ;
 struct ib_pd* FUNC_6 (struct ib_pd*,int) ;

struct ib_pd *FUNC_7(struct ib_device *VAR_5, unsigned int VAR_6,
  const char *VAR_7)
{
 struct ib_pd *VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_5->alloc_pd(VAR_5, ((void*)0), ((void*)0));
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_8->device = VAR_5;
 VAR_8->uobject = ((void*)0);
 VAR_8->__internal_mr = ((void*)0);
 FUNC_2(&VAR_8->usecnt, 0);
 VAR_8->flags = VAR_6;

 if (VAR_5->attrs.device_cap_flags & VAR_3)
  VAR_8->local_dma_lkey = VAR_5->local_dma_lkey;
 else
  VAR_9 |= VAR_0;

 if (VAR_6 & VAR_4) {
  FUNC_4("%s: enabling unsafe global rkey\n", VAR_7);
  VAR_9 |= VAR_1 | VAR_2;
 }

 if (VAR_9) {
  struct ib_mr *VAR_10;

  VAR_10 = VAR_8->device->get_dma_mr(VAR_8, VAR_9);
  if (FUNC_1(VAR_10)) {
   FUNC_3(VAR_8);
   return FUNC_0(VAR_10);
  }

  VAR_10->device = VAR_8->device;
  VAR_10->pd = VAR_8;
  VAR_10->uobject = ((void*)0);
  VAR_10->need_inval = 0;

  VAR_8->__internal_mr = VAR_10;

  if (!(VAR_5->attrs.device_cap_flags & VAR_3))
   VAR_8->local_dma_lkey = VAR_8->__internal_mr->lkey;

  if (VAR_6 & VAR_4)
   VAR_8->unsafe_global_rkey = VAR_8->__internal_mr->rkey;
 }

 return VAR_8;
}
