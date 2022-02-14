
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_crtc_state {scalar_t__ cmd_mode; } ;
struct drm_crtc {int state; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_2 (int ) ;

void FUNC_3(struct drm_crtc *VAR_0)
{
 struct mdp5_crtc_state *VAR_1 = FUNC_2(VAR_0->state);

 if (VAR_1->cmd_mode)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
}
