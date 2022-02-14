
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_crtc {TYPE_3__* state; } ;
struct drm_color_lut {int red; int green; int blue; } ;
struct TYPE_4__ {struct drm_crtc* crtc; } ;
struct atmel_hlcdc_plane_state {TYPE_1__ base; } ;
struct atmel_hlcdc_plane {int layer; } ;
struct TYPE_6__ {TYPE_2__* gamma_lut; int color_mgmt_changed; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct atmel_hlcdc_plane *VAR_1,
       struct atmel_hlcdc_plane_state *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_2->base.crtc;
 struct drm_color_lut *VAR_4;
 int VAR_5;

 if (!VAR_3 || !VAR_3->state)
  return;

 if (!VAR_3->state->color_mgmt_changed || !VAR_3->state->gamma_lut)
  return;

 VAR_4 = (struct drm_color_lut *)VAR_3->state->gamma_lut->data;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_4++) {
  u32 VAR_6 = ((VAR_4->red << 8) & 0xff0000) |
   (VAR_4->green & 0xff00) |
   (VAR_4->blue >> 8);

  FUNC_0(&VAR_1->layer, VAR_5, VAR_6);
 }
}
