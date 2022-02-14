
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct udl_framebuffer {int active_16; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc {TYPE_1__* primary; struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct udl_framebuffer* FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (struct udl_framebuffer*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_crtc *VAR_0,
         struct drm_framebuffer *VAR_1,
         struct drm_pending_vblank_event *VAR_2,
         uint32_t VAR_3,
         struct drm_modeset_acquire_ctx *VAR_4)
{
 struct udl_framebuffer *VAR_5 = FUNC_3(VAR_1);
 struct drm_device *VAR_6 = VAR_0->dev;

 struct drm_framebuffer *VAR_7 = VAR_0->primary->fb;
 if (VAR_7) {
  struct udl_framebuffer *VAR_8 = FUNC_3(VAR_7);
  VAR_8->active_16 = 0;
 }
 VAR_5->active_16 = 1;

 FUNC_4(VAR_5, 0, 0, VAR_1->width, VAR_1->height);

 FUNC_1(&VAR_6->event_lock);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_2);
 FUNC_2(&VAR_6->event_lock);
 VAR_0->primary->fb = VAR_1;

 return 0;
}
