
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int skip_vt_switch; int cmap; int apertures; } ;
struct drm_fb_helper {struct fb_info* fbdev; TYPE_1__* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 struct fb_info* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 struct fb_info* FUNC_4 (int ,struct device*) ;
 int FUNC_5 (struct fb_info*) ;

struct fb_info *FUNC_6(struct drm_fb_helper *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev->dev;
 struct fb_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(0, VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(&VAR_3->cmap, 256, 0);
 if (VAR_4)
  goto err_release;

 VAR_3->apertures = FUNC_1(1);
 if (!VAR_3->apertures) {
  VAR_4 = -VAR_0;
  goto err_free_cmap;
 }

 VAR_1->fbdev = VAR_3;
 VAR_3->skip_vt_switch = 1;

 return VAR_3;

err_free_cmap:
 FUNC_3(&VAR_3->cmap);
err_release:
 FUNC_5(VAR_3);
 return FUNC_0(VAR_4);
}
