
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; } ;
struct drm_pending_vblank_event {unsigned int pipe; TYPE_1__ base; scalar_t__ sequence; } ;
struct drm_device {int vblank_event_list; int event_lock; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_crtc*) ;
 unsigned int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct drm_crtc *VAR_0,
          struct drm_pending_vblank_event *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 unsigned int VAR_3 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->event_lock);

 VAR_1->pipe = VAR_3;
 VAR_1->sequence = FUNC_1(VAR_0) + 1;
 FUNC_3(&VAR_1->base.link, &VAR_2->vblank_event_list);
}
