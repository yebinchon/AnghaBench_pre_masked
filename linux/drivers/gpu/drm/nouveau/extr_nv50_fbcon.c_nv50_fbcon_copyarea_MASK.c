
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct nouveau_drm {struct nouveau_channel* channel; } ;
struct nouveau_channel {int dummy; } ;
struct fb_info {struct nouveau_fbdev* par; } ;
struct fb_copyarea {int sy; int sx; int height; int width; int dy; int dx; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_0 ;
 int FUNC_2 (struct nouveau_channel*,int ) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 struct nouveau_drm* FUNC_4 (int ) ;

int
FUNC_5(struct fb_info *VAR_1, const struct fb_copyarea *VAR_2)
{
 struct nouveau_fbdev *VAR_3 = VAR_1->par;
 struct nouveau_drm *VAR_4 = FUNC_4(VAR_3->helper.dev);
 struct nouveau_channel *VAR_5 = VAR_4->channel;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, 12);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_5, VAR_0, 0x0110, 1);
 FUNC_2(VAR_5, 0);
 FUNC_0(VAR_5, VAR_0, 0x08b0, 4);
 FUNC_2(VAR_5, VAR_2->dx);
 FUNC_2(VAR_5, VAR_2->dy);
 FUNC_2(VAR_5, VAR_2->width);
 FUNC_2(VAR_5, VAR_2->height);
 FUNC_0(VAR_5, VAR_0, 0x08d0, 4);
 FUNC_2(VAR_5, 0);
 FUNC_2(VAR_5, VAR_2->sx);
 FUNC_2(VAR_5, 0);
 FUNC_2(VAR_5, VAR_2->sy);
 FUNC_1(VAR_5);
 return 0;
}
