
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {int delayed_hotplug; int lock; int client; int deferred_setup; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_fb_helper*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_fb_helper *VAR_2)
{
 bool VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 if (FUNC_0(VAR_2->deferred_setup))
  return 0;

 FUNC_3(&VAR_2->lock);
 VAR_4 = FUNC_1(&VAR_2->client);

 VAR_3 = VAR_2->delayed_hotplug;
 if (VAR_3)
  VAR_2->delayed_hotplug = 0;
 FUNC_4(&VAR_2->lock);

 if (VAR_3)
  FUNC_2(VAR_2);

 return VAR_4;
}
