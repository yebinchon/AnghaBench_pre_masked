
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {int dummy; } ;
struct mdp5_interface {int dummy; } ;
struct mdp5_encoder {int enabled; struct mdp5_interface* intf; struct mdp5_ctl* ctl; } ;
struct mdp5_ctl {int dummy; } ;
struct drm_encoder {int crtc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mdp5_encoder*,int) ;
 struct mdp5_pipeline* FUNC_2 (int ) ;
 int FUNC_3 (struct mdp5_ctl*,struct mdp5_pipeline*,int ,int) ;
 int FUNC_4 (struct mdp5_ctl*,struct mdp5_pipeline*,int) ;
 int FUNC_5 (struct mdp5_interface*) ;
 scalar_t__ FUNC_6 (struct drm_encoder*) ;
 struct mdp5_encoder* FUNC_7 (struct drm_encoder*) ;

void FUNC_8(struct drm_encoder *VAR_0)
{
 struct mdp5_encoder *VAR_1 = FUNC_7(VAR_0);
 struct mdp5_ctl *VAR_2 = VAR_1->ctl;
 struct mdp5_interface *VAR_3 = VAR_1->intf;
 struct mdp5_pipeline *VAR_4 = FUNC_2(VAR_0->crtc);

 if (FUNC_0(VAR_1->enabled))
  return;

 FUNC_1(VAR_1, 1);
 if (FUNC_6(VAR_0))
  return;

 FUNC_3(VAR_2, VAR_4, FUNC_5(VAR_3), 1);

 FUNC_4(VAR_2, VAR_4, 1);

 VAR_1->enabled = 1;
}
