
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct malidp_hw_device {TYPE_6__* hw; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct malidp_crtc_state {int * coloradj_coeffs; } ;
struct drm_crtc_state {TYPE_4__* ctm; } ;
struct drm_crtc {TYPE_7__* state; } ;
struct TYPE_14__ {TYPE_2__* ctm; int color_mgmt_changed; } ;
struct TYPE_12__ {scalar_t__ coeffs_base; } ;
struct TYPE_13__ {TYPE_5__ map; } ;
struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_11__ {TYPE_3__ base; } ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_9__ {TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct malidp_drm* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct malidp_hw_device*,int ,int ) ;
 int FUNC_2 (struct malidp_hw_device*,int ,int ) ;
 int FUNC_3 (struct malidp_hw_device*,int ,scalar_t__) ;
 struct malidp_crtc_state* FUNC_4 (TYPE_7__*) ;

__attribute__((used)) static
void FUNC_5(struct drm_crtc *VAR_4,
       struct drm_crtc_state *VAR_5)
{
 struct malidp_drm *VAR_6 = FUNC_0(VAR_4);
 struct malidp_hw_device *VAR_7 = VAR_6->dev;
 int VAR_8;

 if (!VAR_4->state->color_mgmt_changed)
  return;

 if (!VAR_4->state->ctm) {
  FUNC_1(VAR_7, VAR_3,
        VAR_2);
 } else {
  struct malidp_crtc_state *VAR_9 =
   FUNC_4(VAR_4->state);

  if (!VAR_5->ctm || (VAR_4->state->ctm->base.id !=
     VAR_5->ctm->base.id))
   for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
    FUNC_3(VAR_7,
      VAR_9->coloradj_coeffs[VAR_8],
      VAR_7->hw->map.coeffs_base +
      VAR_1 + 4 * VAR_8);

  FUNC_2(VAR_7, VAR_3,
      VAR_2);
 }
}
