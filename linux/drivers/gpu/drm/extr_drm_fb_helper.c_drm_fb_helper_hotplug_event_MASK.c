
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper {int delayed_hotplug; int fbdev; int lock; TYPE_1__* fb; int client; int dev; int preferred_bpp; scalar_t__ deferred_setup; } ;
struct TYPE_2__ {int height; int width; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_fb_helper*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_fb_helper*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct drm_fb_helper *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0 || !VAR_1)
  return 0;

 FUNC_7(&VAR_1->lock);
 if (VAR_1->deferred_setup) {
  VAR_2 = FUNC_1(VAR_1,
    VAR_1->preferred_bpp);
  return VAR_2;
 }

 if (!VAR_1->fb || !FUNC_4(VAR_1->dev)) {
  VAR_1->delayed_hotplug = 1;
  FUNC_8(&VAR_1->lock);
  return VAR_2;
 }

 FUNC_5(VAR_1->dev);

 FUNC_0("\n");

 FUNC_2(&VAR_1->client, VAR_1->fb->width, VAR_1->fb->height);
 FUNC_6(VAR_1);
 FUNC_8(&VAR_1->lock);

 FUNC_3(VAR_1->fbdev);

 return 0;
}
