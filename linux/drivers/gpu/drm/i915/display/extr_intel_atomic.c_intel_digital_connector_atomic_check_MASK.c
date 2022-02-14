
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ colorspace; scalar_t__ picture_aspect_ratio; scalar_t__ content_type; scalar_t__ scaling_mode; int hdr_output_metadata; } ;
struct intel_digital_connector_state {scalar_t__ force_audio; scalar_t__ broadcast_rgb; TYPE_1__ base; } ;
struct drm_crtc_state {int mode_changed; } ;
struct drm_connector_state {int crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct drm_connector_state* FUNC_1 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,int ) ;
 struct drm_connector_state* FUNC_3 (struct drm_atomic_state*,struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,struct drm_connector_state*,struct drm_connector_state*) ;
 struct intel_digital_connector_state* FUNC_5 (struct drm_connector_state*) ;

int FUNC_6(struct drm_connector *VAR_0,
      struct drm_atomic_state *VAR_1)
{
 struct drm_connector_state *VAR_2 =
  FUNC_1(VAR_1, VAR_0);
 struct intel_digital_connector_state *VAR_3 =
  FUNC_5(VAR_2);
 struct drm_connector_state *VAR_4 =
  FUNC_3(VAR_1, VAR_0);
 struct intel_digital_connector_state *VAR_5 =
  FUNC_5(VAR_4);
 struct drm_crtc_state *VAR_6;

 FUNC_4(VAR_0, VAR_4, VAR_2);

 if (!VAR_2->crtc)
  return 0;

 VAR_6 = FUNC_2(VAR_1, VAR_2->crtc);





 if (VAR_3->force_audio != VAR_5->force_audio ||
     VAR_3->broadcast_rgb != VAR_5->broadcast_rgb ||
     VAR_3->base.colorspace != VAR_5->base.colorspace ||
     VAR_3->base.picture_aspect_ratio != VAR_5->base.picture_aspect_ratio ||
     VAR_3->base.content_type != VAR_5->base.content_type ||
     VAR_3->base.scaling_mode != VAR_5->base.scaling_mode ||
     !FUNC_0(VAR_3->base.hdr_output_metadata,
   VAR_5->base.hdr_output_metadata))
  VAR_6->mode_changed = 1;

 return 0;
}
