
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int y1; } ;
struct TYPE_18__ {int pixel_blend_mode; TYPE_10__ src; int visible; int rotation; struct drm_framebuffer* fb; } ;
struct intel_plane_state {int flags; TYPE_9__* vma; TYPE_6__ base; TYPE_5__* color_plane; } ;
struct TYPE_20__ {int stride; int format; } ;
struct TYPE_19__ {int src_w; int src_h; int y; int visible; int pixel_blend_mode; int adjusted_y; int adjusted_x; int rotation; } ;
struct TYPE_16__ {int hsw_bdw_pixel_rate; int mode_flags; } ;
struct intel_fbc_state_cache {int flags; TYPE_9__* vma; TYPE_8__ fb; TYPE_7__ plane; TYPE_4__ crtc; } ;
struct intel_fbc {struct intel_fbc_state_cache state_cache; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {TYPE_2__ adjusted_mode; } ;
struct intel_crtc_state {int pixel_rate; TYPE_3__ base; } ;
struct TYPE_13__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
struct drm_framebuffer {int * pitches; int format; } ;
struct TYPE_21__ {int fence; } ;
struct TYPE_17__ {int y; int x; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_1,
      struct intel_crtc_state *VAR_2,
      struct intel_plane_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_1->base.dev);
 struct intel_fbc *VAR_5 = &VAR_4->fbc;
 struct intel_fbc_state_cache *VAR_6 = &VAR_5->state_cache;
 struct drm_framebuffer *VAR_7 = VAR_3->base.fb;

 VAR_6->vma = ((void*)0);
 VAR_6->flags = 0;

 VAR_6->crtc.mode_flags = VAR_2->base.adjusted_mode.flags;
 if (FUNC_1(VAR_4) || FUNC_0(VAR_4))
  VAR_6->crtc.hsw_bdw_pixel_rate = VAR_2->pixel_rate;

 VAR_6->plane.rotation = VAR_3->base.rotation;





 VAR_6->plane.src_w = FUNC_4(&VAR_3->base.src) >> 16;
 VAR_6->plane.src_h = FUNC_3(&VAR_3->base.src) >> 16;
 VAR_6->plane.visible = VAR_3->base.visible;
 VAR_6->plane.adjusted_x = VAR_3->color_plane[0].x;
 VAR_6->plane.adjusted_y = VAR_3->color_plane[0].y;
 VAR_6->plane.y = VAR_3->base.src.y1 >> 16;

 VAR_6->plane.pixel_blend_mode = VAR_3->base.pixel_blend_mode;

 if (!VAR_6->plane.visible)
  return;

 VAR_6->fb.format = VAR_7->format;
 VAR_6->fb.stride = VAR_7->pitches[0];

 VAR_6->vma = VAR_3->vma;
 VAR_6->flags = VAR_3->flags;
 if (FUNC_2(VAR_6->flags & VAR_0 && !VAR_6->vma->fence))
  VAR_6->flags &= ~VAR_0;
}
