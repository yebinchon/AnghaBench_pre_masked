
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int rotation; int crtc_h; int crtc_w; struct drm_framebuffer* fb; TYPE_1__* plane; } ;
struct intel_plane_state {TYPE_5__ base; TYPE_4__* color_plane; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {TYPE_3__* phys_handle; } ;
struct drm_framebuffer {TYPE_6__* format; } ;
struct TYPE_9__ {scalar_t__ cursor_needs_physical; } ;
struct TYPE_14__ {TYPE_2__ display; } ;
struct TYPE_13__ {int* cpp; } ;
struct TYPE_11__ {scalar_t__ offset; } ;
struct TYPE_10__ {int busaddr; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 TYPE_7__* FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_framebuffer const*) ;
 int FUNC_3 (struct intel_plane_state const*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(const struct intel_plane_state *VAR_1)
{
 struct drm_i915_private *VAR_2 =
  FUNC_4(VAR_1->base.plane->dev);
 const struct drm_framebuffer *VAR_3 = VAR_1->base.fb;
 const struct drm_i915_gem_object *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;

 if (FUNC_1(VAR_2)->display.cursor_needs_physical)
  VAR_5 = VAR_4->phys_handle->busaddr;
 else
  VAR_5 = FUNC_3(VAR_1);

 VAR_5 += VAR_1->color_plane[0].offset;


 if (FUNC_0(VAR_2) &&
     VAR_1->base.rotation & VAR_0)
  VAR_5 += (VAR_1->base.crtc_h *
    VAR_1->base.crtc_w - 1) * VAR_3->format->cpp[0];

 return VAR_5;
}
