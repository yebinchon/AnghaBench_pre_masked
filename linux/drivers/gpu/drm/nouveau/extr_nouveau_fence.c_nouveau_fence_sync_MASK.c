
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_fence_chan {scalar_t__ (* sync ) (struct nouveau_fence*,struct nouveau_channel*,struct nouveau_channel*) ;} ;
struct nouveau_fence {int channel; } ;
struct nouveau_channel {int drm; struct nouveau_fence_chan* fence; } ;
struct TYPE_3__ {struct dma_resv* resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct dma_resv_list {int shared_count; int * shared; } ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*,int) ;
 struct dma_fence* FUNC_1 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_2 (struct dma_resv*) ;
 int FUNC_3 (struct dma_resv*) ;
 int FUNC_4 (struct dma_resv*,int) ;
 struct nouveau_fence* FUNC_5 (struct dma_fence*,int ) ;
 struct nouveau_channel* FUNC_6 (int ) ;
 struct dma_fence* FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct nouveau_fence*,struct nouveau_channel*,struct nouveau_channel*) ;
 scalar_t__ FUNC_11 (struct nouveau_fence*,struct nouveau_channel*,struct nouveau_channel*) ;

int
FUNC_12(struct nouveau_bo *VAR_0, struct nouveau_channel *VAR_1, bool VAR_2, bool VAR_3)
{
 struct nouveau_fence_chan *VAR_4 = VAR_1->fence;
 struct dma_fence *VAR_5;
 struct dma_resv *VAR_6 = VAR_0->bo.base.resv;
 struct dma_resv_list *VAR_7;
 struct nouveau_fence *VAR_8;
 int VAR_9 = 0, VAR_10;

 if (!VAR_2) {
  VAR_9 = FUNC_4(VAR_6, 1);

  if (VAR_9)
   return VAR_9;
 }

 VAR_7 = FUNC_2(VAR_6);
 VAR_5 = FUNC_1(VAR_6);

 if (VAR_5 && (!VAR_2 || !VAR_7 || !VAR_7->shared_count)) {
  struct nouveau_channel *VAR_11 = ((void*)0);
  bool VAR_12 = 1;

  VAR_8 = FUNC_5(VAR_5, VAR_1->drm);
  if (VAR_8) {
   FUNC_8();
   VAR_11 = FUNC_6(VAR_8->channel);
   if (VAR_11 && (VAR_11 == VAR_1 || VAR_4->sync(VAR_8, VAR_11, VAR_1) == 0))
    VAR_12 = 0;
   FUNC_9();
  }

  if (VAR_12)
   VAR_9 = FUNC_0(VAR_5, VAR_3);

  return VAR_9;
 }

 if (!VAR_2 || !VAR_7)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_7->shared_count && !VAR_9; ++VAR_10) {
  struct nouveau_channel *VAR_13 = ((void*)0);
  bool VAR_14 = 1;

  VAR_5 = FUNC_7(VAR_7->shared[VAR_10],
      FUNC_3(VAR_6));

  VAR_8 = FUNC_5(VAR_5, VAR_1->drm);
  if (VAR_8) {
   FUNC_8();
   VAR_13 = FUNC_6(VAR_8->channel);
   if (VAR_13 && (VAR_13 == VAR_1 || VAR_4->sync(VAR_8, VAR_13, VAR_1) == 0))
    VAR_14 = 0;
   FUNC_9();
  }

  if (VAR_14)
   VAR_9 = FUNC_0(VAR_5, VAR_3);
 }

 return VAR_9;
}
