
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pages; } ;
struct TYPE_4__ {int resv; } ;
struct drm_i915_gem_object {int cache_dirty; int cache_coherent; scalar_t__ write_domain; TYPE_2__ mm; TYPE_1__ base; } ;
struct TYPE_6__ {int dma; int chain; } ;
struct clflush {TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 struct clflush* FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (int *,int ,int *,int,int ,int ) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;

bool FUNC_9(struct drm_i915_gem_object *VAR_6,
        unsigned int VAR_7)
{
 struct clflush *VAR_8;

 FUNC_2(VAR_6);
 if (!FUNC_6(VAR_6)) {
  VAR_6->cache_dirty = 0;
  return 0;
 }
 if (!(VAR_7 & VAR_1) &&
     VAR_6->cache_coherent & VAR_0)
  return 0;

 FUNC_8(VAR_6);

 VAR_8 = ((void*)0);
 if (!(VAR_7 & VAR_2))
  VAR_8 = FUNC_3(VAR_6);
 if (VAR_8) {
  FUNC_7(&VAR_8->base.chain,
      VAR_6->base.resv, ((void*)0), 1,
      VAR_4,
      VAR_3);
  FUNC_5(VAR_6->base.resv, &VAR_8->base.dma);
  FUNC_4(&VAR_8->base);
 } else if (VAR_6->mm.pages) {
  FUNC_1(VAR_6);
 } else {
  FUNC_0(VAR_6->write_domain != VAR_5);
 }

 VAR_6->cache_dirty = 0;
 return 1;
}
