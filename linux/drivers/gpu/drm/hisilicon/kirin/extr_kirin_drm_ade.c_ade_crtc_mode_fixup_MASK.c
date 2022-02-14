
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_crtc {struct ade_hw_ctx* hw_ctx; } ;
struct drm_display_mode {int clock; } ;
struct drm_crtc {int dummy; } ;
struct ade_hw_ctx {int ade_pix_clk; } ;


 int FUNC_0 (int ,int) ;
 struct kirin_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_2(struct drm_crtc *VAR_0,
    const struct drm_display_mode *VAR_1,
    struct drm_display_mode *VAR_2)
{
 struct kirin_crtc *VAR_3 = FUNC_1(VAR_0);
 struct ade_hw_ctx *VAR_4 = VAR_3->hw_ctx;

 VAR_2->clock =
  FUNC_0(VAR_4->ade_pix_clk, VAR_1->clock * 1000) / 1000;
 return 1;
}
