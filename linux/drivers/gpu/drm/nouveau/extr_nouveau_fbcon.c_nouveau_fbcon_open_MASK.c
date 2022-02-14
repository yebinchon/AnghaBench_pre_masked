
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct nouveau_drm {TYPE_2__* dev; } ;
struct fb_info {struct nouveau_fbdev* par; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct fb_info *VAR_1, int VAR_2)
{
 struct nouveau_fbdev *VAR_3 = VAR_1->par;
 struct nouveau_drm *VAR_4 = FUNC_0(VAR_3->helper.dev);
 int VAR_5 = FUNC_1(VAR_4->dev->dev);
 if (VAR_5 < 0 && VAR_5 != -VAR_0)
  return VAR_5;
 return 0;
}
