
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct nouveau_drm {int dummy; } ;
struct fb_info {int flags; struct nouveau_fbdev* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 struct nouveau_drm* FUNC_1 (int ) ;

void FUNC_2(struct fb_info *VAR_1)
{
 struct nouveau_fbdev *VAR_2 = VAR_1->par;
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_2->helper.dev);

 FUNC_0(VAR_3, "GPU lockup - switching to software fbcon\n");
 VAR_1->flags |= VAR_0;
}
