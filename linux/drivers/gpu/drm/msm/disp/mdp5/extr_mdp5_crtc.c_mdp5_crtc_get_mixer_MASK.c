
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_hw_mixer {int dummy; } ;
struct TYPE_2__ {struct mdp5_hw_mixer* mixer; } ;
struct mdp5_crtc_state {TYPE_1__ pipeline; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 struct mdp5_hw_mixer* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct mdp5_crtc_state* FUNC_2 (int ) ;

struct mdp5_hw_mixer *FUNC_3(struct drm_crtc *VAR_1)
{
 struct mdp5_crtc_state *VAR_2;

 if (FUNC_1(!VAR_1))
  return FUNC_0(-VAR_0);

 VAR_2 = FUNC_2(VAR_1->state);

 return FUNC_1(!VAR_2->pipeline.mixer) ?
  FUNC_0(-VAR_0) : VAR_2->pipeline.mixer;
}
