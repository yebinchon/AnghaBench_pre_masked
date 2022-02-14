
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int crtc; int state; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_1,
      struct drm_plane_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_2->fb;
 struct drm_crtc_state *VAR_4;

 if (!VAR_3)
  return 0;

 if (!VAR_2->crtc)
  return 0;

 VAR_4 = FUNC_2(VAR_2->state, VAR_2->crtc);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(VAR_2, VAR_4,
         VAR_0,
         VAR_0,
         1, 1);
}
