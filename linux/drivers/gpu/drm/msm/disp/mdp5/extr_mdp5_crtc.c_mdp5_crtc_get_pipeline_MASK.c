
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {int dummy; } ;
struct mdp5_crtc_state {struct mdp5_pipeline pipeline; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 struct mdp5_pipeline* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct mdp5_crtc_state* FUNC_2 (int ) ;

struct mdp5_pipeline *FUNC_3(struct drm_crtc *VAR_1)
{
 struct mdp5_crtc_state *VAR_2;

 if (FUNC_1(!VAR_1))
  return FUNC_0(-VAR_0);

 VAR_2 = FUNC_2(VAR_1->state);

 return &VAR_2->pipeline;
}
