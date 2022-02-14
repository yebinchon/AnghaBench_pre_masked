
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ family; } ;
struct nvif_device {TYPE_2__ info; } ;
struct TYPE_4__ {int dev; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct TYPE_6__ {int mutex; struct nvif_device device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct fb_info {scalar_t__ state; int flags; struct nouveau_fbdev* par; } ;
struct fb_fillrect {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nouveau_drm* FUNC_4 (int ) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_7 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_8 (struct fb_info*,struct fb_fillrect const*) ;

__attribute__((used)) static void
FUNC_9(struct fb_info *VAR_5, const struct fb_fillrect *VAR_6)
{
 struct nouveau_fbdev *VAR_7 = VAR_5->par;
 struct nouveau_drm *VAR_8 = FUNC_4(VAR_7->helper.dev);
 struct nvif_device *VAR_9 = &VAR_8->client.device;
 int VAR_10;

 if (VAR_5->state != VAR_2)
  return;

 VAR_10 = -VAR_0;
 if (!FUNC_1() && !(VAR_5->flags & VAR_1) &&
     FUNC_2(&VAR_8->client.mutex)) {
  if (VAR_9->info.family < VAR_4)
   VAR_10 = FUNC_6(VAR_5, VAR_6);
  else
  if (VAR_9->info.family < VAR_3)
   VAR_10 = FUNC_7(VAR_5, VAR_6);
  else
   VAR_10 = FUNC_8(VAR_5, VAR_6);
  FUNC_3(&VAR_8->client.mutex);
 }

 if (VAR_10 == 0)
  return;

 if (VAR_10 != -VAR_0)
  FUNC_5(VAR_5);
 FUNC_0(VAR_5, VAR_6);
}
