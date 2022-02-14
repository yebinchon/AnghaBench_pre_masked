
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int image; } ;
struct vmw_surface {TYPE_1__ snooper; } ;
struct drm_plane_state {int crtc_w; int crtc_h; scalar_t__ crtc; int state; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_6__ {int bo; } ;
struct TYPE_5__ {struct vmw_surface* surface; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_crtc_state* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;
 TYPE_3__* FUNC_3 (struct drm_framebuffer*) ;
 TYPE_2__* FUNC_4 (struct drm_framebuffer*) ;

int FUNC_5(struct drm_plane *VAR_2,
         struct drm_plane_state *VAR_3)
{
 int VAR_4 = 0;
 struct drm_crtc_state *VAR_5 = ((void*)0);
 struct vmw_surface *VAR_6 = ((void*)0);
 struct drm_framebuffer *VAR_7 = VAR_3->fb;

 if (VAR_3->crtc)
  VAR_5 = FUNC_1(VAR_3->state,
          VAR_3->crtc);

 VAR_4 = FUNC_2(VAR_3, VAR_5,
        VAR_0,
        VAR_0,
        1, 1);
 if (VAR_4)
  return VAR_4;


 if (!VAR_7)
  return 0;


 if (VAR_3->crtc_w != 64 || VAR_3->crtc_h != 64) {
  FUNC_0("Invalid cursor dimensions (%d, %d)\n",
     VAR_3->crtc_w, VAR_3->crtc_h);
  VAR_4 = -VAR_1;
 }

 if (!FUNC_3(VAR_7)->bo)
  VAR_6 = FUNC_4(VAR_7)->surface;

 if (VAR_6 && !VAR_6->snooper.image) {
  FUNC_0("surface not suitable for cursor\n");
  VAR_4 = -VAR_1;
 }

 return VAR_4;
}
