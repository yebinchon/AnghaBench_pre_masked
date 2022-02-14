
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ r_mixer; } ;
struct mdp5_crtc_state {TYPE_1__ pipeline; } ;
struct drm_plane_state {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum mdp_mixer_stage_id { ____Placeholder_mdp_mixer_stage_id } mdp_mixer_stage_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc_state*,struct drm_plane_state*) ;
 struct mdp5_crtc_state* FUNC_1 (struct drm_crtc_state*) ;

__attribute__((used)) static enum mdp_mixer_stage_id FUNC_2(struct drm_crtc *VAR_2,
     struct drm_crtc_state *VAR_3,
     struct drm_plane_state *VAR_4)
{
 struct mdp5_crtc_state *VAR_5 =
   FUNC_1(VAR_3);





 if (VAR_5->pipeline.r_mixer)
  return VAR_0;




 if (!FUNC_0(VAR_3, VAR_4))
  return VAR_0;

 return VAR_1;
}
