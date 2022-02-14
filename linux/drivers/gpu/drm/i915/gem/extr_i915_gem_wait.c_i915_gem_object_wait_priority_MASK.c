
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_sched_attr {int dummy; } ;
struct TYPE_2__ {int resv; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct dma_fence {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 struct dma_fence* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct dma_fence**,unsigned int*,struct dma_fence***) ;
 int FUNC_3 (struct dma_fence*,struct i915_sched_attr const*) ;
 int FUNC_4 (struct dma_fence**) ;

int
FUNC_5(struct drm_i915_gem_object *VAR_1,
         unsigned int VAR_2,
         const struct i915_sched_attr *VAR_3)
{
 struct dma_fence *VAR_4;

 if (VAR_2 & VAR_0) {
  struct dma_fence **VAR_5;
  unsigned int VAR_6, VAR_7;
  int VAR_8;

  VAR_8 = FUNC_2(VAR_1->base.resv,
       &VAR_4, &VAR_6, &VAR_5);
  if (VAR_8)
   return VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   FUNC_3(VAR_5[VAR_7], VAR_3);
   FUNC_0(VAR_5[VAR_7]);
  }

  FUNC_4(VAR_5);
 } else {
  VAR_4 = FUNC_1(VAR_1->base.resv);
 }

 if (VAR_4) {
  FUNC_3(VAR_4, VAR_3);
  FUNC_0(VAR_4);
 }
 return 0;
}
