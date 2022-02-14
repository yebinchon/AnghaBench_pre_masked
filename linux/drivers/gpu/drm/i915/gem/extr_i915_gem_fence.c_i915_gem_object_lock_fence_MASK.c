
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_7__ {TYPE_1__ wait; } ;
struct stub_fence {struct dma_fence dma; TYPE_3__ chain; } ;
struct TYPE_6__ {int resv; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct dma_fence*,int *,int *,int ,int ) ;
 int FUNC_2 (int ,struct dma_fence*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int *,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 struct stub_fence* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct dma_fence*) ;

struct dma_fence *
FUNC_7(struct drm_i915_gem_object *VAR_5)
{
 struct stub_fence *VAR_6;

 FUNC_0(VAR_5);

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_4(&VAR_6->chain, VAR_4);
 FUNC_1(&VAR_6->dma, &VAR_3, &VAR_6->chain.wait.lock,
         0, 0);

 if (FUNC_3(&VAR_6->chain,
         VAR_5->base.resv, ((void*)0),
         1, VAR_2,
         VAR_1) < 0)
  goto err;

 FUNC_2(VAR_5->base.resv, &VAR_6->dma);

 return &VAR_6->dma;

err:
 FUNC_6(&VAR_6->dma);
 return ((void*)0);
}
