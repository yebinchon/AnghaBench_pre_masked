
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {struct i915_vma* vma; int flags; int view; TYPE_3__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {scalar_t__ id; TYPE_1__ base; } ;
struct i915_vma {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_6__ {scalar_t__ cursor_needs_physical; } ;
struct TYPE_8__ {TYPE_2__ display; } ;


 TYPE_4__* FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct drm_i915_gem_object*,int const) ;
 int FUNC_4 (struct drm_i915_private*) ;
 struct drm_i915_gem_object* FUNC_5 (struct drm_framebuffer*) ;
 struct i915_vma* FUNC_6 (struct drm_framebuffer*,int *,int ,int *) ;
 int FUNC_7 (struct intel_plane_state*) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_plane* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct intel_plane_state *VAR_1)
{
 struct intel_plane *VAR_2 = FUNC_9(VAR_1->base.plane);
 struct drm_i915_private *VAR_3 = FUNC_8(VAR_2->base.dev);
 struct drm_framebuffer *VAR_4 = VAR_1->base.fb;
 struct i915_vma *VAR_5;

 if (VAR_2->id == VAR_0 &&
     FUNC_0(VAR_3)->display.cursor_needs_physical) {
  struct drm_i915_gem_object *VAR_6 = FUNC_5(VAR_4);
  const int VAR_7 = FUNC_4(VAR_3);
  int VAR_8;

  VAR_8 = FUNC_3(VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 VAR_5 = FUNC_6(VAR_4,
      &VAR_1->view,
      FUNC_7(VAR_1),
      &VAR_1->flags);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_1->vma = VAR_5;

 return 0;
}
