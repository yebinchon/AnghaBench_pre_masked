
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int dummy; } ;
struct dma_buf {int priv; } ;


 struct drm_i915_gem_object* FUNC_0 (int ) ;

__attribute__((used)) static struct drm_i915_gem_object *FUNC_1(struct dma_buf *VAR_0)
{
 return FUNC_0(VAR_0->priv);
}
