
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_kms {int base; } ;
struct mdp5_crtc_state {int pipeline; int ctl; } ;
struct drm_crtc {int state; } ;


 struct mdp5_kms* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct mdp5_crtc_state* FUNC_3 (int ) ;

void FUNC_4(struct drm_crtc *VAR_0)
{
 struct mdp5_crtc_state *VAR_1 = FUNC_3(VAR_0->state);
 struct mdp5_kms *VAR_2 = FUNC_0(VAR_0);


 FUNC_2(&VAR_2->base);

 FUNC_1(VAR_1->ctl, &VAR_1->pipeline);
}
