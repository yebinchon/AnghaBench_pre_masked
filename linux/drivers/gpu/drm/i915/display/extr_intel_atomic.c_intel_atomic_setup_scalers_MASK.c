
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_plane_state {int scaler_id; } ;
struct intel_plane {scalar_t__ pipe; } ;
struct TYPE_9__ {int planes_changed; struct drm_atomic_state* state; } ;
struct intel_crtc_scaler_state {int scaler_users; int scaler_id; } ;
struct intel_crtc_state {TYPE_4__ base; struct intel_crtc_scaler_state scaler_state; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct intel_crtc {int num_scalers; scalar_t__ pipe; TYPE_2__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_plane_state {int dummy; } ;
struct TYPE_10__ {int id; } ;
struct drm_plane {TYPE_5__ base; } ;
struct drm_i915_private {int drm; } ;
struct drm_atomic_state {TYPE_3__* planes; } ;
struct TYPE_8__ {struct drm_plane* ptr; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_plane_state*) ;
 int FUNC_2 (struct drm_plane_state*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 struct drm_plane_state* FUNC_4 (struct drm_atomic_state*,struct drm_plane*) ;
 struct drm_plane* FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 struct intel_plane_state* FUNC_7 (struct intel_atomic_state*,struct intel_plane*) ;
 int FUNC_8 (struct intel_crtc_scaler_state*,int,struct intel_crtc*,char const*,int,struct intel_plane_state*,int*) ;
 struct intel_atomic_state* FUNC_9 (struct drm_atomic_state*) ;
 struct intel_plane* FUNC_10 (struct drm_plane*) ;

int FUNC_11(struct drm_i915_private *VAR_2,
          struct intel_crtc *VAR_3,
          struct intel_crtc_state *VAR_4)
{
 struct drm_plane *VAR_5 = ((void*)0);
 struct intel_plane *VAR_6;
 struct intel_plane_state *VAR_7 = ((void*)0);
 struct intel_crtc_scaler_state *VAR_8 =
  &VAR_4->scaler_state;
 struct drm_atomic_state *VAR_9 = VAR_4->base.state;
 struct intel_atomic_state *VAR_10 = FUNC_9(VAR_9);
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(VAR_8->scaler_users);
 if (VAR_11 > VAR_3->num_scalers){
  FUNC_0("Too many scaling requests %d > %d\n",
   VAR_11, VAR_3->num_scalers);
  return -VAR_0;
 }


 for (VAR_12 = 0; VAR_12 < sizeof(VAR_8->scaler_users) * 8; VAR_12++) {
  int *VAR_13;
  const char *VAR_14;
  int VAR_15;


  if (!(VAR_8->scaler_users & (1 << VAR_12)))
   continue;

  if (VAR_12 == VAR_1) {
   VAR_14 = "CRTC";
   VAR_15 = VAR_3->base.base.id;


   VAR_13 = &VAR_8->scaler_id;
  } else {
   VAR_14 = "PLANE";



   VAR_5 = VAR_9->planes[VAR_12].ptr;





   if (!VAR_5) {
    struct drm_plane_state *VAR_16;
    VAR_5 = FUNC_5(&VAR_2->drm, VAR_12);
    VAR_16 = FUNC_4(VAR_9, VAR_5);
    if (FUNC_1(VAR_16)) {
     FUNC_0("Failed to add [PLANE:%d] to drm_state\n",
      VAR_5->base.id);
     return FUNC_2(VAR_16);
    }






    VAR_4->base.planes_changed = 1;
   }

   VAR_6 = FUNC_10(VAR_5);
   VAR_15 = VAR_5->base.id;


   if (FUNC_3(VAR_6->pipe != VAR_3->pipe))
    continue;

   VAR_7 = FUNC_7(VAR_10,
               VAR_6);
   VAR_13 = &VAR_7->scaler_id;
  }

  FUNC_8(VAR_8, VAR_11,
       VAR_3, VAR_14, VAR_15,
       VAR_7, VAR_13);
 }

 return 0;
}
