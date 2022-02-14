
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_win_data {TYPE_1__* phy; } ;
struct vop_win {struct vop_win_data* data; } ;
struct TYPE_5__ {int x1; } ;
struct drm_plane_state {int rotation; TYPE_2__ src; int visible; int state; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_6__ {scalar_t__ is_yuv; int format; } ;
struct TYPE_4__ {scalar_t__ scl; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 struct drm_crtc_state* FUNC_3 (int ,struct drm_crtc*) ;
 int FUNC_4 (struct drm_plane_state*,struct drm_crtc_state*,int,int,int,int) ;
 struct vop_win* FUNC_5 (struct drm_plane*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct drm_plane *VAR_3,
      struct drm_plane_state *VAR_4)
{
 struct drm_crtc *VAR_5 = VAR_4->crtc;
 struct drm_crtc_state *VAR_6;
 struct drm_framebuffer *VAR_7 = VAR_4->fb;
 struct vop_win *VAR_8 = FUNC_5(VAR_3);
 const struct vop_win_data *VAR_9 = VAR_8->data;
 int VAR_10;
 int VAR_11 = VAR_9->phy->scl ? FUNC_1(1, 8) :
     VAR_1;
 int VAR_12 = VAR_9->phy->scl ? FUNC_1(8, 1) :
     VAR_1;

 if (!VAR_5 || !VAR_7)
  return 0;

 VAR_6 = FUNC_3(VAR_4->state, VAR_5);
 if (FUNC_2(!VAR_6))
  return -VAR_2;

 VAR_10 = FUNC_4(VAR_4, VAR_6,
        VAR_11, VAR_12,
        1, 1);
 if (VAR_10)
  return VAR_10;

 if (!VAR_4->visible)
  return 0;

 VAR_10 = FUNC_6(VAR_7->format->format);
 if (VAR_10 < 0)
  return VAR_10;





 if (VAR_7->format->is_yuv && ((VAR_4->src.x1 >> 16) % 2)) {
  FUNC_0("Invalid Source: Yuv format not support odd xpos\n");
  return -VAR_2;
 }

 if (VAR_7->format->is_yuv && VAR_4->rotation & VAR_0) {
  FUNC_0("Invalid Source: Yuv format does not support this rotation\n");
  return -VAR_2;
 }

 return 0;
}
