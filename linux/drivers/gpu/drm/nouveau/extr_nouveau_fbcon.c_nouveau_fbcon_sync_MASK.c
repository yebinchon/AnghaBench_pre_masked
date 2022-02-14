
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct nouveau_fbdev {TYPE_2__ helper; } ;
struct TYPE_3__ {int mutex; } ;
struct nouveau_drm {TYPE_1__ client; struct nouveau_channel* channel; } ;
struct nouveau_channel {int accel_done; } ;
struct fb_info {scalar_t__ state; int flags; struct nouveau_fbdev* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_channel*) ;
 struct nouveau_drm* FUNC_4 (int ) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static int
FUNC_6(struct fb_info *VAR_2)
{
 struct nouveau_fbdev *VAR_3 = VAR_2->par;
 struct nouveau_drm *VAR_4 = FUNC_4(VAR_3->helper.dev);
 struct nouveau_channel *VAR_5 = VAR_4->channel;
 int VAR_6;

 if (!VAR_5 || !VAR_5->accel_done || FUNC_0() ||
     VAR_2->state != VAR_1 ||
     VAR_2->flags & VAR_0)
  return 0;

 if (!FUNC_1(&VAR_4->client.mutex))
  return 0;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_2(&VAR_4->client.mutex);
 if (VAR_6) {
  FUNC_5(VAR_2);
  return 0;
 }

 VAR_5->accel_done = 0;
 return 0;
}
