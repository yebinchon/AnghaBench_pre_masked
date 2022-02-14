
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int dev; } ;
struct vmw_fb_par {int bo_mutex; struct drm_display_mode* set_mode; int local_work; TYPE_1__* set_fb; int fb_y; int fb_x; int con; int crtc; struct vmw_private* vmw_priv; } ;
struct fb_var_screeninfo {int xres; int yoffset; int xoffset; int bits_per_pixel; int yres; } ;
struct fb_info {struct fb_var_screeninfo var; struct vmw_fb_par* par; } ;
struct drm_mode_set {int num_connectors; int * connectors; TYPE_1__* fb; struct drm_display_mode* mode; scalar_t__ y; scalar_t__ x; int crtc; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int member_0; } ;
struct TYPE_2__ {int height; int width; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_4 (int ,struct drm_display_mode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct vmw_fb_par*,int ,int ,int ,int ) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (struct drm_display_mode*) ;
 int FUNC_11 (struct vmw_private*,int,int ) ;
 int FUNC_12 (struct drm_mode_set*) ;

__attribute__((used)) static int FUNC_13(struct fb_info *VAR_5)
{
 struct vmw_fb_par *VAR_6 = VAR_5->par;
 struct vmw_private *VAR_7 = VAR_6->vmw_priv;
 struct drm_mode_set VAR_8;
 struct fb_var_screeninfo *VAR_9 = &VAR_5->var;
 struct drm_display_mode VAR_10 = { FUNC_2("fb_mode",
  VAR_2,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  VAR_0 | VAR_1)
 };
 struct drm_display_mode *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_7->dev, &VAR_10);
 if (!VAR_11) {
  FUNC_1("Could not create new fb mode.\n");
  return -VAR_4;
 }

 VAR_11->hdisplay = VAR_9->xres;
 VAR_11->vdisplay = VAR_9->yres;
 FUNC_10(VAR_11);

 if (!FUNC_11(VAR_7,
     VAR_11->hdisplay *
     FUNC_0(VAR_9->bits_per_pixel, 8),
     VAR_11->vdisplay)) {
  FUNC_3(VAR_7->dev, VAR_11);
  return -VAR_3;
 }

 FUNC_5(&VAR_6->bo_mutex);
 VAR_12 = FUNC_9(VAR_5);
 if (VAR_12)
  goto out_unlock;

 VAR_6->fb_x = VAR_9->xoffset;
 VAR_6->fb_y = VAR_9->yoffset;

 VAR_8.crtc = VAR_6->crtc;
 VAR_8.x = 0;
 VAR_8.y = 0;
 VAR_8.mode = VAR_11;
 VAR_8.fb = VAR_6->set_fb;
 VAR_8.num_connectors = 1;
 VAR_8.connectors = &VAR_6->con;

 VAR_12 = FUNC_12(&VAR_8);
 if (VAR_12)
  goto out_unlock;

 FUNC_8(VAR_6, VAR_6->fb_x, VAR_6->fb_y,
     VAR_6->set_fb->width, VAR_6->set_fb->height);




 FUNC_7(&VAR_6->local_work, 0);

out_unlock:
 if (VAR_6->set_mode)
  FUNC_3(VAR_7->dev, VAR_6->set_mode);
 VAR_6->set_mode = VAR_11;

 FUNC_6(&VAR_6->bo_mutex);

 return VAR_12;
}
