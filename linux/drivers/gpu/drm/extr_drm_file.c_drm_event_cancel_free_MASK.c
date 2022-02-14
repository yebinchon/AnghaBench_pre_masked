
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_pending_event {scalar_t__ fence; int pending_link; TYPE_2__* event; TYPE_1__* file_priv; } ;
struct drm_device {int event_lock; } ;
struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_3__ {int event_space; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_pending_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct drm_device *VAR_0,
      struct drm_pending_event *VAR_1)
{
 unsigned long VAR_2;
 FUNC_3(&VAR_0->event_lock, VAR_2);
 if (VAR_1->file_priv) {
  VAR_1->file_priv->event_space += VAR_1->event->length;
  FUNC_2(&VAR_1->pending_link);
 }
 FUNC_4(&VAR_0->event_lock, VAR_2);

 if (VAR_1->fence)
  FUNC_0(VAR_1->fence);

 FUNC_1(VAR_1);
}
