
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vblank_crtc {int disable_timer; int refcount; int queue; int enabled; } ;
struct drm_device {unsigned int num_crtcs; int event_lock; scalar_t__ vblank_disable_immediate; int vblank_time_lock; struct drm_vblank_crtc* vblank; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 (struct drm_device*,unsigned int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

bool FUNC_11(struct drm_device *VAR_1, unsigned int VAR_2)
{
 struct drm_vblank_crtc *VAR_3 = &VAR_1->vblank[VAR_2];
 unsigned long VAR_4;
 bool VAR_5;

 if (FUNC_1(!VAR_1->num_crtcs))
  return 0;

 if (FUNC_0(VAR_2 >= VAR_1->num_crtcs))
  return 0;

 FUNC_6(&VAR_1->event_lock, VAR_4);





 FUNC_5(&VAR_1->vblank_time_lock);


 if (!VAR_3->enabled) {
  FUNC_7(&VAR_1->vblank_time_lock);
  FUNC_8(&VAR_1->event_lock, VAR_4);
  return 0;
 }

 FUNC_4(VAR_1, VAR_2, 1);

 FUNC_7(&VAR_1->vblank_time_lock);

 FUNC_10(&VAR_3->queue);






 VAR_5 = (VAR_1->vblank_disable_immediate &&
         VAR_0 > 0 &&
         !FUNC_2(&VAR_3->refcount));

 FUNC_3(VAR_1, VAR_2);

 FUNC_8(&VAR_1->event_lock, VAR_4);

 if (VAR_5)
  FUNC_9(&VAR_3->disable_timer);

 return 1;
}
