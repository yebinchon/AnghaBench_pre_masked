
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj {int dummy; } ;
struct drm_i915_gem_execbuffer2 {int num_cliprects; } ;


 int FUNC_0 (struct drm_syncobj**,int ) ;

__attribute__((used)) static void
FUNC_1(struct drm_i915_gem_execbuffer2 *VAR_0,
  struct drm_syncobj **VAR_1)
{
 if (VAR_1)
  FUNC_0(VAR_1, VAR_0->num_cliprects);
}
