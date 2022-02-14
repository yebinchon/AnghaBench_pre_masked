
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_ops {int dummy; } ;
struct drm_fb_helper {scalar_t__ fb; TYPE_1__* fbdev; } ;
struct drm_device {struct drm_fb_helper* fb_helper; } ;
struct TYPE_2__ {struct fb_ops* fbops; struct fb_ops* fbdefio; scalar_t__ dev; } ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct fb_ops*) ;

void FUNC_5(struct drm_device *VAR_0)
{
 struct drm_fb_helper *VAR_1 = VAR_0->fb_helper;
 struct fb_ops *VAR_2 = ((void*)0);

 if (!VAR_1)
  return;


 if (VAR_1->fbdev && VAR_1->fbdev->dev)
  FUNC_1(VAR_1);

 if (VAR_1->fbdev && VAR_1->fbdev->fbdefio) {
  FUNC_3(VAR_1->fbdev);
  FUNC_4(VAR_1->fbdev->fbdefio);
  VAR_2 = VAR_1->fbdev->fbops;
 }

 FUNC_0(VAR_1);
 FUNC_4(VAR_2);

 if (VAR_1->fb)
  FUNC_2(VAR_1->fb);
}
