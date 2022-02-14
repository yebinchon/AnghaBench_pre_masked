
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_pending_event {TYPE_1__* file_priv; int link; int pending_link; scalar_t__ fence; int * completion; int (* completion_release ) (int *) ;} ;
struct drm_device {int event_lock; } ;
struct TYPE_2__ {int event_wait; int event_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct drm_pending_event*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct drm_device *VAR_0, struct drm_pending_event *VAR_1)
{
 FUNC_0(&VAR_0->event_lock);

 if (VAR_1->completion) {
  FUNC_1(VAR_1->completion);
  VAR_1->completion_release(VAR_1->completion);
  VAR_1->completion = ((void*)0);
 }

 if (VAR_1->fence) {
  FUNC_3(VAR_1->fence);
  FUNC_2(VAR_1->fence);
 }

 if (!VAR_1->file_priv) {
  FUNC_4(VAR_1);
  return;
 }

 FUNC_6(&VAR_1->pending_link);
 FUNC_5(&VAR_1->link,
        &VAR_1->file_priv->event_list);
 FUNC_8(&VAR_1->file_priv->event_wait);
}
