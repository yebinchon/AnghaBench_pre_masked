
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int state; } ;
struct dm_crtc_state {struct drm_crtc_state base; int cm_is_degamma_srgb; int cm_has_degamma; int crc_src; int freesync_config; int vrr_supported; int abm_level; int vrr_infopacket; int vrr_params; int interrupts_enabled; int active_planes; scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;
 int FUNC_2 (scalar_t__) ;
 struct dm_crtc_state* FUNC_3 (int,int ) ;
 struct dm_crtc_state* FUNC_4 (int ) ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_5(struct drm_crtc *VAR_1)
{
 struct dm_crtc_state *VAR_2, *VAR_3;

 VAR_3 = FUNC_4(VAR_1->state);

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_2->base);

 if (VAR_3->stream) {
  VAR_2->stream = VAR_3->stream;
  FUNC_2(VAR_2->stream);
 }

 VAR_2->active_planes = VAR_3->active_planes;
 VAR_2->interrupts_enabled = VAR_3->interrupts_enabled;
 VAR_2->vrr_params = VAR_3->vrr_params;
 VAR_2->vrr_infopacket = VAR_3->vrr_infopacket;
 VAR_2->abm_level = VAR_3->abm_level;
 VAR_2->vrr_supported = VAR_3->vrr_supported;
 VAR_2->freesync_config = VAR_3->freesync_config;
 VAR_2->crc_src = VAR_3->crc_src;
 VAR_2->cm_has_degamma = VAR_3->cm_has_degamma;
 VAR_2->cm_is_degamma_srgb = VAR_3->cm_is_degamma_srgb;



 return &VAR_2->base;
}
