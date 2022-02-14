
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_pending_event {int dummy; } ;
struct drm_device {int event_lock; } ;


 int FUNC_0 (struct drm_device*,struct drm_pending_event*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct drm_device *VAR_0, struct drm_pending_event *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->event_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->event_lock, VAR_2);
}
