
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_ctl {int dummy; } ;
struct mdp5_crtc_state {struct mdp5_ctl* ctl; } ;
struct drm_crtc {int state; } ;


 struct mdp5_crtc_state* FUNC_0 (int ) ;

struct mdp5_ctl *FUNC_1(struct drm_crtc *VAR_0)
{
 struct mdp5_crtc_state *VAR_1 = FUNC_0(VAR_0->state);

 return VAR_1->ctl;
}
