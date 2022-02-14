
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {int dummy; } ;
struct omap_fbdev {struct drm_fb_helper base; int work; } ;
struct omap_drm_private {struct drm_fb_helper* fbdev; int num_pipes; } ;
struct drm_device {int dev; struct omap_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct drm_fb_helper*) ;
 int FUNC_3 (struct drm_device*,struct drm_fb_helper*,int ) ;
 int FUNC_4 (struct drm_fb_helper*,int) ;
 int FUNC_5 (struct drm_device*,struct drm_fb_helper*,int *) ;
 int FUNC_6 (struct drm_fb_helper*) ;
 int FUNC_7 (struct omap_fbdev*) ;
 struct omap_fbdev* FUNC_8 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_9(struct drm_device *VAR_3)
{
 struct omap_drm_private *VAR_4 = VAR_3->dev_private;
 struct omap_fbdev *VAR_5 = ((void*)0);
 struct drm_fb_helper *VAR_6;
 int VAR_7 = 0;

 if (!VAR_4->num_pipes)
  return;

 VAR_5 = FUNC_8(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto fail;

 FUNC_0(&VAR_5->work, VAR_2);

 VAR_6 = &VAR_5->base;

 FUNC_5(VAR_3, VAR_6, &VAR_1);

 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_4->num_pipes);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7)
  goto fini;

 VAR_7 = FUNC_4(VAR_6, 32);
 if (VAR_7)
  goto fini;

 VAR_4->fbdev = VAR_6;

 return;

fini:
 FUNC_2(VAR_6);
fail:
 FUNC_7(VAR_5);

 FUNC_1(VAR_3->dev, "omap_fbdev_init failed\n");
}
