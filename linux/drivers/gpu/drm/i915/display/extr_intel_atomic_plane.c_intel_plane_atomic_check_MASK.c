
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int visible; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_plane {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_plane_state {int state; } ;
struct drm_plane {int dummy; } ;


 struct intel_crtc* FUNC_0 (struct intel_plane_state const*,struct intel_plane_state*) ;
 struct intel_crtc_state* FUNC_1 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc_state* FUNC_2 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_plane_state* FUNC_3 (struct intel_atomic_state*,struct intel_plane*) ;
 int FUNC_4 (struct intel_crtc_state const*,struct intel_crtc_state*,struct intel_plane_state const*,struct intel_plane_state*) ;
 struct intel_atomic_state* FUNC_5 (int ) ;
 struct intel_plane* FUNC_6 (struct drm_plane*) ;
 struct intel_plane_state* FUNC_7 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_8(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct intel_plane *VAR_2 = FUNC_6(VAR_0);
 struct intel_atomic_state *VAR_3 =
  FUNC_5(VAR_1->state);
 struct intel_plane_state *VAR_4 =
  FUNC_7(VAR_1);
 const struct intel_plane_state *VAR_5 =
  FUNC_3(VAR_3, VAR_2);
 struct intel_crtc *VAR_6 =
  FUNC_0(VAR_5, VAR_4);
 const struct intel_crtc_state *VAR_7;
 struct intel_crtc_state *VAR_8;

 VAR_4->base.visible = 0;
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_2(VAR_3, VAR_6);
 VAR_8 = FUNC_1(VAR_3, VAR_6);

 return FUNC_4(VAR_7,
         VAR_8,
         VAR_5,
         VAR_4);
}
