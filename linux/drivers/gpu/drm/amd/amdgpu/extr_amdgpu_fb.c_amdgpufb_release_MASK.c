
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct fb_info *VAR_0, int VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_0->par;

 FUNC_0(VAR_2->dev->dev);
 FUNC_1(VAR_2->dev->dev);
 return 0;
}
