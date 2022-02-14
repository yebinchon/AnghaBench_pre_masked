
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dcu_drm_device {int regmap; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_device {int event_lock; struct fsl_dcu_drm_device* dev_private; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_pending_vblank_event* event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_2,
       struct drm_crtc_state *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct fsl_dcu_drm_device *VAR_5 = VAR_4->dev_private;
 struct drm_pending_vblank_event *VAR_6 = VAR_2->state->event;

 FUNC_3(VAR_5->regmap,
       VAR_0, VAR_1);

 if (VAR_6) {
  VAR_2->state->event = ((void*)0);

  FUNC_4(&VAR_2->dev->event_lock);
  if (FUNC_2(VAR_2) == 0)
   FUNC_0(VAR_2, VAR_6);
  else
   FUNC_1(VAR_2, VAR_6);
  FUNC_5(&VAR_2->dev->event_lock);
 }
}
