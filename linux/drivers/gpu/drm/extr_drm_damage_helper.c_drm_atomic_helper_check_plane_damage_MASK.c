
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int * fb_damage_clips; scalar_t__ crtc; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_atomic_state *VAR_0,
       struct drm_plane_state *VAR_1)
{
 struct drm_crtc_state *VAR_2;

 if (VAR_1->crtc) {
  VAR_2 = FUNC_2(VAR_0,
          VAR_1->crtc);

  if (FUNC_0(!VAR_2))
   return;

  if (FUNC_1(VAR_2)) {
   FUNC_3(VAR_1->fb_damage_clips);
   VAR_1->fb_damage_clips = ((void*)0);
  }
 }
}
