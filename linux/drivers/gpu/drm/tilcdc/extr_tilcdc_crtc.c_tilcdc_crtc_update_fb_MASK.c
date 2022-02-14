
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_crtc {int enable_lock; int irq_lock; struct drm_framebuffer* next_fb; int hvtotal_us; int last_vblank; scalar_t__ enabled; struct drm_pending_vblank_event* event; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int dev; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_crtc*,struct drm_framebuffer*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct tilcdc_crtc* FUNC_10 (struct drm_crtc*) ;

int FUNC_11(struct drm_crtc *VAR_2,
  struct drm_framebuffer *VAR_3,
  struct drm_pending_vblank_event *VAR_4)
{
 struct tilcdc_crtc *VAR_5 = FUNC_10(VAR_2);
 struct drm_device *VAR_6 = VAR_2->dev;

 if (VAR_5->event) {
  FUNC_0(VAR_6->dev, "already pending page flip!\n");
  return -VAR_0;
 }

 VAR_5->event = VAR_4;

 FUNC_5(&VAR_5->enable_lock);

 if (VAR_5->enabled) {
  unsigned long VAR_7;
  ktime_t VAR_8;
  s64 VAR_9;

  FUNC_8(&VAR_5->irq_lock, VAR_7);

  VAR_8 = FUNC_1(VAR_5->last_vblank,
        VAR_5->hvtotal_us);
  VAR_9 = FUNC_4(FUNC_3(VAR_8, FUNC_2()));

  if (VAR_9 < VAR_1)
   VAR_5->next_fb = VAR_3;
  else
   FUNC_7(VAR_2, VAR_3);

  FUNC_9(&VAR_5->irq_lock, VAR_7);
 }

 FUNC_6(&VAR_5->enable_lock);

 return 0;
}
