
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct nouveau_fbdev {int hotplug_waiting; int hotplug_lock; TYPE_1__ helper; } ;
struct nouveau_drm {int dummy; } ;


 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nouveau_drm* FUNC_4 (int ) ;

void
FUNC_5(struct nouveau_fbdev *VAR_0)
{
 struct nouveau_drm *VAR_1;

 if (!VAR_0)
  return;
 VAR_1 = FUNC_4(VAR_0->helper.dev);

 FUNC_2(&VAR_0->hotplug_lock);
 if (VAR_0->hotplug_waiting) {
  VAR_0->hotplug_waiting = 0;

  FUNC_0(VAR_1, "Handling deferred fbcon HPD events\n");
  FUNC_1(&VAR_0->helper);
 }
 FUNC_3(&VAR_0->hotplug_lock);
}
