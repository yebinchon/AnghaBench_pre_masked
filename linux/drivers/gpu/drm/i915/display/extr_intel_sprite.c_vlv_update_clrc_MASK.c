
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ color_range; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_3__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_plane {int pipe; int id; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_5__ {scalar_t__ is_yuv; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_plane* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(const struct intel_plane_state *VAR_3)
{
 struct intel_plane *VAR_4 = FUNC_9(VAR_3->base.plane);
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_4->base.dev);
 const struct drm_framebuffer *VAR_6 = VAR_3->base.fb;
 enum pipe VAR_7 = VAR_4->pipe;
 enum plane_id VAR_8 = VAR_4->id;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if (VAR_6->format->is_yuv &&
     VAR_3->base.color_range == VAR_1) {






  VAR_9 = FUNC_0(255 << 6, 235 - 16);
  VAR_10 = -FUNC_0(16 * 255, 235 - 16);
  VAR_11 = FUNC_0(128 << 7, 240 - 128);
  VAR_12 = VAR_2 * VAR_11;
  VAR_13 = VAR_0 * VAR_11;
 } else {

  VAR_9 = 1 << 6;
  VAR_10 = 0;
  VAR_11 = 1 << 7;
  VAR_12 = VAR_2 * VAR_11;
  VAR_13 = VAR_0 * VAR_11;
 }


 FUNC_1(FUNC_2(VAR_7, VAR_8),
        FUNC_5(VAR_9) | FUNC_4(VAR_10));
 FUNC_1(FUNC_3(VAR_7, VAR_8),
        FUNC_7(VAR_12) | FUNC_6(VAR_13));
}
