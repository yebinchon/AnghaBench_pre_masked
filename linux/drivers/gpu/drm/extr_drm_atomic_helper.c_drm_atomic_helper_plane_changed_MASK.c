
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc_state {int planes_changed; } ;
struct drm_atomic_state {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (struct drm_atomic_state*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct drm_atomic_state *VAR_0,
    struct drm_plane_state *VAR_1,
    struct drm_plane_state *VAR_2,
    struct drm_plane *VAR_3)
{
 struct drm_crtc_state *VAR_4;

 if (VAR_1->crtc) {
  VAR_4 = FUNC_1(VAR_0,
          VAR_1->crtc);

  if (FUNC_0(!VAR_4))
   return;

  VAR_4->planes_changed = 1;
 }

 if (VAR_2->crtc) {
  VAR_4 = FUNC_1(VAR_0, VAR_2->crtc);

  if (FUNC_0(!VAR_4))
   return;

  VAR_4->planes_changed = 1;
 }
}
