
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {scalar_t__ crtc_x; scalar_t__ crtc_y; scalar_t__ crtc_w; scalar_t__ crtc_h; scalar_t__ rotation; int fb; int crtc; int state; } ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_1__ adjusted_mode; int enable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_2,
       struct drm_plane_state *VAR_3)
{
 struct drm_crtc_state *VAR_4;

 if (!VAR_3->fb)
  return 0;


 if (FUNC_0(!VAR_3->crtc))
  return 0;

 VAR_4 = FUNC_1(VAR_3->state, VAR_3->crtc);

 if (FUNC_0(!VAR_4))
  return 0;

 if (!VAR_4->enable)
  return 0;

 if (VAR_3->crtc_x < 0 || VAR_3->crtc_y < 0)
  return -VAR_1;

 if (VAR_3->crtc_x + VAR_3->crtc_w > VAR_4->adjusted_mode.hdisplay)
  return -VAR_1;

 if (VAR_3->crtc_y + VAR_3->crtc_h > VAR_4->adjusted_mode.vdisplay)
  return -VAR_1;

 if (VAR_3->rotation != VAR_0 &&
     !FUNC_2(VAR_3->fb))
  return -VAR_1;

 return 0;
}
