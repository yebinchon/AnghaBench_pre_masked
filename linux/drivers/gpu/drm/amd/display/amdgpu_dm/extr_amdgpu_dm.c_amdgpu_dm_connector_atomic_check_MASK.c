
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int mode_changed; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector_state {int hdr_output_metadata; struct drm_crtc* crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct dc_info_packet {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_2 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_connector_state* FUNC_3 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_connector_state* FUNC_4 (struct drm_atomic_state*,struct drm_connector*) ;
 int FUNC_5 (struct drm_connector_state*,struct dc_info_packet*) ;
 scalar_t__ FUNC_6 (struct drm_connector_state*,struct drm_connector_state*) ;

__attribute__((used)) static int
FUNC_7(struct drm_connector *VAR_0,
     struct drm_atomic_state *VAR_1)
{
 struct drm_connector_state *VAR_2 =
  FUNC_3(VAR_1, VAR_0);
 struct drm_connector_state *VAR_3 =
  FUNC_4(VAR_1, VAR_0);
 struct drm_crtc *VAR_4 = VAR_2->crtc;
 struct drm_crtc_state *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return 0;

 if (FUNC_6(VAR_3, VAR_2)) {
  struct dc_info_packet VAR_7;

  VAR_6 = FUNC_5(VAR_2, &VAR_7);
  if (VAR_6)
   return VAR_6;

  VAR_5 = FUNC_2(VAR_1, VAR_4);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  VAR_5->mode_changed =
   !VAR_3->hdr_output_metadata ||
   !VAR_2->hdr_output_metadata;
 }

 return 0;
}
