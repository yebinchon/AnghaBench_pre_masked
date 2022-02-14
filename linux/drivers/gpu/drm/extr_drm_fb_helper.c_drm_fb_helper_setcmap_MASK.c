
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ visual; } ;
struct fb_info {TYPE_1__ fix; struct drm_fb_helper* par; } ;
struct fb_cmap {int dummy; } ;
struct TYPE_4__ {int modeset_mutex; } ;
struct drm_fb_helper {int lock; TYPE_2__ client; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct fb_cmap*,struct fb_info*) ;
 int FUNC_6 (struct fb_cmap*,struct fb_info*) ;
 int FUNC_7 (struct fb_cmap*,struct fb_info*) ;

int FUNC_8(struct fb_cmap *VAR_3, struct fb_info *VAR_4)
{
 struct drm_fb_helper *VAR_5 = VAR_4->par;
 struct drm_device *VAR_6 = VAR_5->dev;
 int VAR_7;

 if (VAR_2)
  return -VAR_0;

 FUNC_3(&VAR_5->lock);

 if (!FUNC_1(VAR_6)) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 FUNC_3(&VAR_5->client.modeset_mutex);
 if (VAR_4->fix.visual == VAR_1)
  VAR_7 = FUNC_7(VAR_3, VAR_4);
 else if (FUNC_0(VAR_5->dev))
  VAR_7 = FUNC_5(VAR_3, VAR_4);
 else
  VAR_7 = FUNC_6(VAR_3, VAR_4);
 FUNC_4(&VAR_5->client.modeset_mutex);

 FUNC_2(VAR_6);
unlock:
 FUNC_4(&VAR_5->lock);

 return VAR_7;
}
