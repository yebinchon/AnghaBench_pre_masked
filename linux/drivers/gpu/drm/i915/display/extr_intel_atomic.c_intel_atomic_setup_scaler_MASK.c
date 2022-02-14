
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int plane; TYPE_3__* fb; } ;
struct intel_plane_state {TYPE_5__* linked_plane; TYPE_4__ base; } ;
struct intel_plane {int id; } ;
struct intel_crtc_scaler_state {TYPE_6__* scalers; } ;
struct TYPE_7__ {int dev; } ;
struct intel_crtc {int num_scalers; int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_12__ {int in_use; int mode; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_9__ {TYPE_2__* format; } ;
struct TYPE_8__ {int num_planes; scalar_t__ is_yuv; } ;


 int FUNC_0 (char*,int ,int,char const*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,char*,char const*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_plane* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_crtc_scaler_state *VAR_5,
          int VAR_6, struct intel_crtc *VAR_7,
          const char *VAR_8, int VAR_9,
          struct intel_plane_state *VAR_10,
          int *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_7(VAR_7->base.dev);
 int VAR_13;
 u32 VAR_14;

 if (*VAR_11 < 0) {

  for (VAR_13 = 0; VAR_13 < VAR_7->num_scalers; VAR_13++) {
   if (VAR_5->scalers[VAR_13].in_use)
    continue;

   *VAR_11 = VAR_13;
   VAR_5->scalers[*VAR_11].in_use = 1;
   break;
  }
 }

 if (FUNC_5(*VAR_11 < 0, "Cannot find scaler for %s:%d\n", VAR_8, VAR_9))
  return;


 if (VAR_10 && VAR_10->base.fb &&
     VAR_10->base.fb->format->is_yuv &&
     VAR_10->base.fb->format->num_planes > 1) {
  struct intel_plane *VAR_15 = FUNC_8(VAR_10->base.plane);
  if (FUNC_3(VAR_12, 9) &&
      !FUNC_2(VAR_12)) {
   VAR_14 = VAR_4;
  } else if (FUNC_6(VAR_12, VAR_15->id)) {





   VAR_14 = VAR_0;
  } else {
   VAR_14 = VAR_1;

   if (VAR_10->linked_plane)
    VAR_14 |= FUNC_4(VAR_10->linked_plane->id);
  }
 } else if (FUNC_1(VAR_12) > 9 || FUNC_2(VAR_12)) {
  VAR_14 = VAR_0;
 } else if (VAR_6 == 1 && VAR_7->num_scalers > 1) {





  VAR_5->scalers[*VAR_11].in_use = 0;
  *VAR_11 = 0;
  VAR_5->scalers[0].in_use = 1;
  VAR_14 = VAR_3;
 } else {
  VAR_14 = VAR_2;
 }

 FUNC_0("Attached scaler id %u.%u to %s:%d\n",
        VAR_7->pipe, *VAR_11, VAR_8, VAR_9);
 VAR_5->scalers[*VAR_11].mode = VAR_14;
}
