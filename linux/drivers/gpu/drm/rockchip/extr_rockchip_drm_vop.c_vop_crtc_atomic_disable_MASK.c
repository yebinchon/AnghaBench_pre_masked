
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop {int is_enabled; int vop_lock; int dev; int dclk; int drm_dev; int dsp_hold_completion; int reg_lock; int event; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* state; TYPE_1__* dev; } ;
struct TYPE_4__ {int * event; int active; scalar_t__ self_refresh_active; } ;
struct TYPE_3__ {int event_lock; } ;


 int FUNC_0 (struct vop*,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_crtc*,int *) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct drm_crtc*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_1 ;
 struct vop* FUNC_15 (struct drm_crtc*) ;
 int FUNC_16 (struct vop*) ;
 int FUNC_17 (struct vop*) ;
 int FUNC_18 (struct vop*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(struct drm_crtc *VAR_2,
        struct drm_crtc_state *VAR_3)
{
 struct vop *VAR_4 = FUNC_15(VAR_2);

 FUNC_1(VAR_4->event);

 if (VAR_2->state->self_refresh_active)
  FUNC_10(VAR_2, 0);

 FUNC_5(&VAR_4->vop_lock);

 FUNC_4(VAR_2);

 if (VAR_2->state->self_refresh_active)
  goto out;
 FUNC_8(&VAR_4->dsp_hold_completion);
 FUNC_18(VAR_4);

 FUNC_11(&VAR_4->reg_lock);

 FUNC_0(VAR_4, VAR_0, VAR_1, 1);

 FUNC_13(&VAR_4->reg_lock);

 FUNC_19(&VAR_4->dsp_hold_completion);

 FUNC_17(VAR_4);

 VAR_4->is_enabled = 0;




 FUNC_9(VAR_4->drm_dev, VAR_4->dev);

 FUNC_2(VAR_4->dclk);
 FUNC_16(VAR_4);
 FUNC_7(VAR_4->dev);

out:
 FUNC_6(&VAR_4->vop_lock);

 if (VAR_2->state->event && !VAR_2->state->active) {
  FUNC_12(&VAR_2->dev->event_lock);
  FUNC_3(VAR_2, VAR_2->state->event);
  FUNC_14(&VAR_2->dev->event_lock);

  VAR_2->state->event = ((void*)0);
 }
}
