
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
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct drm_crtc_state* FUNC_2 (int ,struct drm_crtc*) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_1,
        struct drm_plane_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_2->fb;
 struct drm_crtc *VAR_4 = VAR_2->crtc;
 struct drm_crtc_state *VAR_5;
 int VAR_6 = FUNC_0(1, 8);
 int VAR_7 = FUNC_0(8, 1);

 if (!VAR_4 || !VAR_3)
  return 0;

 VAR_5 = FUNC_2(VAR_2->state,
       VAR_4);
 if (FUNC_1(!VAR_5))
  return -VAR_0;


 if (!VAR_5->enable)
  return 0;


 if (!VAR_2->crtc)
  return -VAR_0;

 return FUNC_3(VAR_2, VAR_5,
         VAR_6, VAR_7,
         1, 1);
}
