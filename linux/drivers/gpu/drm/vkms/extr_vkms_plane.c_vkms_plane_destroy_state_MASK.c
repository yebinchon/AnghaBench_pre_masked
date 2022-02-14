
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_crtc* crtc; } ;
struct vkms_plane_state {struct vkms_plane_state* composer; int fb; TYPE_1__ base; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_plane_state*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct vkms_plane_state*) ;
 struct vkms_plane_state* FUNC_4 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct vkms_plane_state *VAR_2 = FUNC_4(VAR_1);
 struct drm_crtc *VAR_3 = VAR_2->base.crtc;

 if (VAR_3) {



  if (FUNC_2(&VAR_2->composer->fb))
   FUNC_1(&VAR_2->composer->fb);
 }

 FUNC_3(VAR_2->composer);
 VAR_2->composer = ((void*)0);

 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
}
