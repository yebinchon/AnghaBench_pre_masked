
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct malidp_crtc_state {int gamma_coeffs; } ;
struct drm_crtc_state {int mode_changed; TYPE_5__* gamma_lut; int state; int color_mgmt_changed; } ;
struct drm_crtc {int dev; TYPE_3__* state; } ;
struct drm_color_lut {scalar_t__ red; scalar_t__ green; scalar_t__ blue; } ;
struct TYPE_9__ {scalar_t__ id; } ;
struct TYPE_10__ {int length; scalar_t__ data; TYPE_4__ base; } ;
struct TYPE_8__ {TYPE_2__* gamma_lut; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_7__ {TYPE_1__ base; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 struct malidp_crtc_state* FUNC_2 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_2,
       struct drm_crtc_state *VAR_3)
{
 struct malidp_crtc_state *VAR_4 = FUNC_2(VAR_3);
 struct drm_color_lut *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (!VAR_3->color_mgmt_changed || !VAR_3->gamma_lut)
  return 0;

 if (VAR_2->state->gamma_lut &&
     (VAR_2->state->gamma_lut->base.id == VAR_3->gamma_lut->base.id))
  return 0;

 if (VAR_3->gamma_lut->length % sizeof(struct drm_color_lut))
  return -VAR_0;

 VAR_6 = VAR_3->gamma_lut->length / sizeof(struct drm_color_lut);
 if (VAR_6 != VAR_1)
  return -VAR_0;

 VAR_5 = (struct drm_color_lut *)VAR_3->gamma_lut->data;
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
  if (!((VAR_5[VAR_7].red == VAR_5[VAR_7].green) &&
        (VAR_5[VAR_7].red == VAR_5[VAR_7].blue)))
   return -VAR_0;

 if (!VAR_3->mode_changed) {
  int VAR_8;

  VAR_3->mode_changed = 1;






  VAR_8 = FUNC_0(VAR_2->dev, VAR_3->state);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_1(VAR_3->gamma_lut, VAR_4->gamma_coeffs);
 return 0;
}
