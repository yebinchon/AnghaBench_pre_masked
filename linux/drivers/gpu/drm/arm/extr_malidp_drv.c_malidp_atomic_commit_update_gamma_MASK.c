
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct malidp_hw_device {int dummy; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct malidp_crtc_state {int gamma_coeffs; } ;
struct drm_crtc_state {TYPE_4__* gamma_lut; } ;
struct drm_crtc {TYPE_5__* state; } ;
struct TYPE_10__ {TYPE_2__* gamma_lut; int color_mgmt_changed; } ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_9__ {TYPE_3__ base; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_7__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct malidp_drm* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct malidp_hw_device*,int ,int ) ;
 int FUNC_2 (struct malidp_hw_device*,int ,int ) ;
 int FUNC_3 (struct malidp_hw_device*,int ) ;
 struct malidp_crtc_state* FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_2,
           struct drm_crtc_state *VAR_3)
{
 struct malidp_drm *VAR_4 = FUNC_0(VAR_2);
 struct malidp_hw_device *VAR_5 = VAR_4->dev;

 if (!VAR_2->state->color_mgmt_changed)
  return;

 if (!VAR_2->state->gamma_lut) {
  FUNC_1(VAR_5,
        VAR_1,
        VAR_0);
 } else {
  struct malidp_crtc_state *VAR_6 =
   FUNC_4(VAR_2->state);

  if (!VAR_3->gamma_lut || (VAR_2->state->gamma_lut->base.id !=
           VAR_3->gamma_lut->base.id))
   FUNC_3(VAR_5, VAR_6->gamma_coeffs);

  FUNC_2(VAR_5, VAR_1,
      VAR_0);
 }
}
