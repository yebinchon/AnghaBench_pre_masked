
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_engine_cs {int dummy; } ;
struct TYPE_3__ {int resv; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct dma_fence {int dummy; } ;
struct TYPE_4__ {struct intel_engine_cs* engine; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 struct dma_fence* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (struct dma_fence*) ;

__attribute__((used)) static inline struct intel_engine_cs *
FUNC_7(struct drm_i915_gem_object *VAR_0)
{
 struct intel_engine_cs *VAR_1 = ((void*)0);
 struct dma_fence *VAR_2;

 FUNC_4();
 VAR_2 = FUNC_3(VAR_0->base.resv);
 FUNC_5();

 if (VAR_2 && FUNC_0(VAR_2) && !FUNC_1(VAR_2))
  VAR_1 = FUNC_6(VAR_2)->engine;
 FUNC_2(VAR_2);

 return VAR_1;
}
