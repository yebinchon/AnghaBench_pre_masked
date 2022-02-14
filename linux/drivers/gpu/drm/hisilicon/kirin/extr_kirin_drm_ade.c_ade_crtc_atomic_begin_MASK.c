
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kirin_crtc {struct ade_hw_ctx* hw_ctx; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct ade_hw_ctx {int power_on; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; struct drm_display_mode mode; } ;


 int FUNC_0 (struct ade_hw_ctx*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_1 (struct ade_hw_ctx*) ;
 struct kirin_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
      struct drm_crtc_state *VAR_1)
{
 struct kirin_crtc *VAR_2 = FUNC_2(VAR_0);
 struct ade_hw_ctx *VAR_3 = VAR_2->hw_ctx;
 struct drm_display_mode *VAR_4 = &VAR_0->state->mode;
 struct drm_display_mode *VAR_5 = &VAR_0->state->adjusted_mode;

 if (!VAR_3->power_on)
  (void)FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_4, VAR_5);
}
