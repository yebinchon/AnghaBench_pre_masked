
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ltdc_device {int regs; } ;
struct drm_crtc {TYPE_2__* state; } ;
struct drm_color_lut {int red; int green; int blue; } ;
struct TYPE_4__ {TYPE_1__* gamma_lut; int color_mgmt_changed; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ltdc_device* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_2)
{
 struct ltdc_device *VAR_3 = FUNC_0(VAR_2);
 struct drm_color_lut *VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!VAR_2->state->color_mgmt_changed || !VAR_2->state->gamma_lut)
  return;

 VAR_4 = (struct drm_color_lut *)VAR_2->state->gamma_lut->data;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_4++) {
  VAR_5 = ((VAR_4->red << 8) & 0xff0000) | (VAR_4->green & 0xff00) |
   (VAR_4->blue >> 8) | (VAR_6 << 24);
  FUNC_1(VAR_3->regs, VAR_1, VAR_5);
 }
}
