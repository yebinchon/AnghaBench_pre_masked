
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fbdev {int hotplug_waiting; int hotplug_lock; int helper; } ;
struct nouveau_drm {TYPE_1__* dev; struct nouveau_fbdev* fbcon; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_drm*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_5(VAR_1);
 struct nouveau_fbdev *VAR_3 = VAR_2->fbcon;
 int VAR_4;

 if (!VAR_3)
  return;

 FUNC_3(&VAR_3->hotplug_lock);

 VAR_4 = FUNC_6(VAR_1->dev);
 if (VAR_4 == 1 || VAR_4 == -VAR_0) {
  FUNC_2(&VAR_3->helper);

  FUNC_7(VAR_1->dev);
  FUNC_8(VAR_1->dev);
 } else if (VAR_4 == 0) {






  FUNC_1(VAR_2, "fbcon HPD event deferred until runtime resume\n");
  VAR_3->hotplug_waiting = 1;
  FUNC_9(VAR_2->dev->dev);
 } else {
  FUNC_0("fbcon HPD event lost due to RPM failure: %d\n",
    VAR_4);
 }

 FUNC_4(&VAR_3->hotplug_lock);
}
