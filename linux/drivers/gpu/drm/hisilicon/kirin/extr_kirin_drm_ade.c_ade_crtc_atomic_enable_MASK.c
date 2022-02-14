
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_crtc {int enable; struct ade_hw_ctx* hw_ctx; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct ade_hw_ctx {int base; int power_on; } ;


 int FUNC_0 (struct ade_hw_ctx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ade_hw_ctx*) ;
 int FUNC_3 (struct ade_hw_ctx*) ;
 int FUNC_4 (struct drm_crtc*) ;
 struct kirin_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct kirin_crtc *VAR_2 = FUNC_5(VAR_0);
 struct ade_hw_ctx *VAR_3 = VAR_2->hw_ctx;
 int VAR_4;

 if (VAR_2->enable)
  return;

 if (!VAR_3->power_on) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   return;
 }

 FUNC_3(VAR_3);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3->base);
 FUNC_4(VAR_0);
 VAR_2->enable = 1;
}
