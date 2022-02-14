
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {int lock; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_6 (struct fb_var_screeninfo*,struct fb_info*) ;

int FUNC_7(struct fb_var_screeninfo *VAR_2,
         struct fb_info *VAR_3)
{
 struct drm_fb_helper *VAR_4 = VAR_3->par;
 struct drm_device *VAR_5 = VAR_4->dev;
 int VAR_6;

 if (VAR_1)
  return -VAR_0;

 FUNC_3(&VAR_4->lock);
 if (!FUNC_1(VAR_5)) {
  VAR_6 = -VAR_0;
  goto unlock;
 }

 if (FUNC_0(VAR_5))
  VAR_6 = FUNC_5(VAR_2, VAR_3);
 else
  VAR_6 = FUNC_6(VAR_2, VAR_3);

 FUNC_2(VAR_5);
unlock:
 FUNC_4(&VAR_4->lock);

 return VAR_6;
}
