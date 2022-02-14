
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct fb_info* fbdev; } ;
struct nouveau_fbdev {TYPE_2__ helper; } ;
struct TYPE_6__ {int yres_virtual; int xres_virtual; } ;
struct fb_info {TYPE_1__* fbops; TYPE_3__ var; } ;
struct fb_fillrect {int rop; scalar_t__ color; int height; int width; scalar_t__ dy; scalar_t__ dx; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int (* fb_fillrect ) (struct fb_info*,struct fb_fillrect*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect*) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_1, struct nouveau_fbdev *VAR_2)
{
 struct fb_info *VAR_3 = VAR_2->helper.fbdev;
 struct fb_fillrect VAR_4;





 VAR_4.dx = VAR_4.dy = 0;
 VAR_4.width = VAR_3->var.xres_virtual;
 VAR_4.height = VAR_3->var.yres_virtual;
 VAR_4.color = 0;
 VAR_4.rop = VAR_0;
 VAR_3->fbops->fb_fillrect(VAR_3, &VAR_4);
}
