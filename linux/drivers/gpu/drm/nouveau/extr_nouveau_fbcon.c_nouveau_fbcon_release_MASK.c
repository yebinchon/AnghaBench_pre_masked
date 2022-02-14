
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


 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct fb_info *VAR_0, int VAR_1)
{
 struct nouveau_fbdev *VAR_2 = VAR_0->par;
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_2->helper.dev);
 FUNC_1(VAR_3->dev->dev);
 return 0;
}
