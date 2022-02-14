
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_vblank_crtc {unsigned int pipe; int seqlock; int disable_timer; int queue; struct drm_device* dev; } ;
struct drm_device {unsigned int num_crtcs; int vblank_disable_immediate; TYPE_1__* driver; struct drm_vblank_crtc* vblank; int vblank_time_lock; int vbl_lock; } ;
struct TYPE_2__ {scalar_t__ get_vblank_timestamp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct drm_vblank_crtc* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_2 ;

int FUNC_6(struct drm_device *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = -VAR_0;
 unsigned int VAR_6;

 FUNC_4(&VAR_3->vbl_lock);
 FUNC_4(&VAR_3->vblank_time_lock);

 VAR_3->num_crtcs = VAR_4;

 VAR_3->vblank = FUNC_2(VAR_4, sizeof(*VAR_3->vblank), VAR_1);
 if (!VAR_3->vblank)
  goto err;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct drm_vblank_crtc *VAR_7 = &VAR_3->vblank[VAR_6];

  VAR_7->dev = VAR_3;
  VAR_7->pipe = VAR_6;
  FUNC_1(&VAR_7->queue);
  FUNC_5(&VAR_7->disable_timer, VAR_2, 0);
  FUNC_3(&VAR_7->seqlock);
 }

 FUNC_0("Supports vblank timestamp caching Rev 2 (21.10.2013).\n");


 if (VAR_3->driver->get_vblank_timestamp)
  FUNC_0("Driver supports precise vblank timestamp query.\n");
 else
  FUNC_0("No driver support for vblank timestamp query.\n");


 if (VAR_3->vblank_disable_immediate && !VAR_3->driver->get_vblank_timestamp) {
  VAR_3->vblank_disable_immediate = 0;
  FUNC_0("Setting vblank_disable_immediate to false because "
    "get_vblank_timestamp == NULL\n");
 }

 return 0;

err:
 VAR_3->num_crtcs = 0;
 return VAR_5;
}
