
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct vc4_crtc {void** lut_b; void** lut_g; void** lut_r; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct drm_color_lut {int blue; int green; int red; } ;
struct TYPE_4__ {struct drm_color_lut* data; } ;
struct TYPE_3__ {TYPE_2__* gamma_lut; } ;


 void* FUNC_0 (int ,int) ;
 size_t FUNC_1 (TYPE_2__*) ;
 struct vc4_crtc* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_4(struct drm_crtc *VAR_0)
{
 struct vc4_crtc *VAR_1 = FUNC_2(VAR_0);
 struct drm_color_lut *VAR_2 = VAR_0->state->gamma_lut->data;
 u32 VAR_3 = FUNC_1(VAR_0->state->gamma_lut);
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1->lut_r[VAR_4] = FUNC_0(VAR_2[VAR_4].red, 8);
  VAR_1->lut_g[VAR_4] = FUNC_0(VAR_2[VAR_4].green, 8);
  VAR_1->lut_b[VAR_4] = FUNC_0(VAR_2[VAR_4].blue, 8);
 }

 FUNC_3(VAR_0);
}
