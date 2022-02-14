
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {struct drm_crtc* crtc; int state; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int enable; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (int ,struct drm_crtc*) ;
 int FUNC_2 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_2,
        struct drm_plane_state *VAR_3)
{
 struct drm_framebuffer *VAR_4 = VAR_3->fb;
 struct drm_crtc *VAR_5 = VAR_3->crtc;
 struct drm_crtc_state *VAR_6;

 if (!VAR_5 || !VAR_4)
  return 0;

 VAR_6 = FUNC_1(VAR_3->state,
       VAR_5);
 if (FUNC_0(!VAR_6))
  return -VAR_1;


 if (!VAR_6->enable)
  return 0;


 if (!VAR_3->crtc)
  return -VAR_1;

 return FUNC_2(VAR_3, VAR_6,
         VAR_0,
         VAR_0,
         0, 1);
}
