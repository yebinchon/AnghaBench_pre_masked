
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_crtc {int enable; struct ade_hw_ctx* hw_ctx; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct ade_hw_ctx {int dummy; } ;


 int FUNC_0 (struct ade_hw_ctx*) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct kirin_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct kirin_crtc *VAR_2 = FUNC_2(VAR_0);
 struct ade_hw_ctx *VAR_3 = VAR_2->hw_ctx;

 if (!VAR_2->enable)
  return;

 FUNC_1(VAR_0);
 FUNC_0(VAR_3);
 VAR_2->enable = 0;
}
