
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {struct drm_crtc* crtc; } ;
struct gma_encoder {TYPE_2__ base; struct cdv_intel_dp* dev_priv; } ;
struct drm_psb_private {struct drm_property* broadcast_rgb_property; struct drm_property* force_audio_property; } ;
struct drm_property {int dummy; } ;
struct drm_crtc {TYPE_3__* primary; int y; int x; int mode; } ;
struct drm_connector {int base; TYPE_1__* dev; } ;
struct cdv_intel_dp {int force_audio; int has_audio; int color_range; } ;
struct TYPE_6__ {int fb; } ;
struct TYPE_4__ {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_crtc*,int *,int ,int ,int ) ;
 int FUNC_2 (int *,struct drm_property*,int) ;
 struct gma_encoder* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_2,
        struct drm_property *VAR_3,
        uint64_t VAR_4)
{
 struct drm_psb_private *VAR_5 = VAR_2->dev->dev_private;
 struct gma_encoder *VAR_6 = FUNC_3(VAR_2);
 struct cdv_intel_dp *VAR_7 = VAR_6->dev_priv;
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_2->base, VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;

 if (VAR_3 == VAR_5->force_audio_property) {
  int VAR_9 = VAR_4;
  bool VAR_10;

  if (VAR_9 == VAR_7->force_audio)
   return 0;

  VAR_7->force_audio = VAR_9;

  if (VAR_9 == 0)
   VAR_10 = FUNC_0(VAR_2);
  else
   VAR_10 = VAR_9 > 0;

  if (VAR_10 == VAR_7->has_audio)
   return 0;

  VAR_7->has_audio = VAR_10;
  goto done;
 }

 if (VAR_3 == VAR_5->broadcast_rgb_property) {
  if (VAR_4 == !!VAR_7->color_range)
   return 0;

  VAR_7->color_range = VAR_4 ? VAR_0 : 0;
  goto done;
 }

 return -VAR_1;

done:
 if (VAR_6->base.crtc) {
  struct drm_crtc *VAR_11 = VAR_6->base.crtc;
  FUNC_1(VAR_11, &VAR_11->mode,
      VAR_11->x, VAR_11->y,
      VAR_11->primary->fb);
 }

 return 0;
}
