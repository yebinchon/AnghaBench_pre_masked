
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int state; struct drm_crtc* crtc; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (int ,struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc_state*,struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_1,
       struct drm_plane_state *VAR_2)
{
 struct drm_crtc *VAR_3;
 struct drm_crtc_state *VAR_4;

 VAR_3 = VAR_2->crtc ? VAR_2->crtc : VAR_1->state->crtc;
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_2->state, VAR_3);
 if (FUNC_0(!VAR_4))
  return -VAR_0;

 return FUNC_2(VAR_4, VAR_2);
}
