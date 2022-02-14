
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct shmob_drm_crtc {struct drm_pending_vblank_event* event; TYPE_2__ crtc; } ;
struct drm_pending_vblank_event {scalar_t__ pipe; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc {TYPE_1__* primary; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct shmob_drm_crtc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct shmob_drm_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_5(struct drm_crtc *VAR_1,
        struct drm_framebuffer *VAR_2,
        struct drm_pending_vblank_event *VAR_3,
        uint32_t VAR_4,
        struct drm_modeset_acquire_ctx *VAR_5)
{
 struct shmob_drm_crtc *VAR_6 = FUNC_4(VAR_1);
 struct drm_device *VAR_7 = VAR_6->crtc.dev;
 unsigned long VAR_8;

 FUNC_2(&VAR_7->event_lock, VAR_8);
 if (VAR_6->event != ((void*)0)) {
  FUNC_3(&VAR_7->event_lock, VAR_8);
  return -VAR_0;
 }
 FUNC_3(&VAR_7->event_lock, VAR_8);

 VAR_1->primary->fb = VAR_2;
 FUNC_1(VAR_6);

 if (VAR_3) {
  VAR_3->pipe = 0;
  FUNC_0(&VAR_6->crtc);
  FUNC_2(&VAR_7->event_lock, VAR_8);
  VAR_6->event = VAR_3;
  FUNC_3(&VAR_7->event_lock, VAR_8);
 }

 return 0;
}
