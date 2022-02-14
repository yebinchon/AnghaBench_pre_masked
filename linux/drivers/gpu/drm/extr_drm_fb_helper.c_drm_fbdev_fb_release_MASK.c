
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {TYPE_1__* fops; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, int VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_0->par;

 if (VAR_1)
  FUNC_0(VAR_2->dev->driver->fops->owner);

 return 0;
}
