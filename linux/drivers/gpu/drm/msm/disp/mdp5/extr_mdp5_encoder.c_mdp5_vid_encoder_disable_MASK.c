
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {int dummy; } ;
struct mdp5_kms {int base; } ;
struct mdp5_interface {int num; } ;
struct mdp5_hw_mixer {int dummy; } ;
struct mdp5_encoder {int enabled; int intf_lock; struct mdp5_interface* intf; struct mdp5_ctl* ctl; } ;
struct mdp5_ctl {int dummy; } ;
struct drm_encoder {int crtc; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mdp5_encoder*,int ) ;
 struct mdp5_kms* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct mdp5_hw_mixer*,struct mdp5_interface*) ;
 struct mdp5_hw_mixer* FUNC_5 (int ) ;
 struct mdp5_pipeline* FUNC_6 (int ) ;
 int FUNC_7 (struct mdp5_ctl*,struct mdp5_pipeline*,int ,int) ;
 int FUNC_8 (struct mdp5_ctl*,struct mdp5_pipeline*,int) ;
 int FUNC_9 (struct mdp5_kms*,int ,int ) ;
 int FUNC_10 (struct mdp5_interface*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct mdp5_encoder* FUNC_14 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_15(struct drm_encoder *VAR_0)
{
 struct mdp5_encoder *VAR_1 = FUNC_14(VAR_0);
 struct mdp5_kms *VAR_2 = FUNC_3(VAR_0);
 struct mdp5_ctl *VAR_3 = VAR_1->ctl;
 struct mdp5_pipeline *VAR_4 = FUNC_6(VAR_0->crtc);
 struct mdp5_hw_mixer *VAR_5 = FUNC_5(VAR_0->crtc);
 struct mdp5_interface *VAR_6 = VAR_1->intf;
 int VAR_7 = VAR_1->intf->num;
 unsigned long VAR_8;

 if (FUNC_1(!VAR_1->enabled))
  return;

 FUNC_8(VAR_3, VAR_4, 0);

 FUNC_12(&VAR_1->intf_lock, VAR_8);
 FUNC_9(VAR_2, FUNC_0(VAR_7), 0);
 FUNC_13(&VAR_1->intf_lock, VAR_8);
 FUNC_7(VAR_3, VAR_4, FUNC_10(VAR_6), 1);
 FUNC_11(&VAR_2->base, FUNC_4(VAR_5, VAR_6));

 FUNC_2(VAR_1, 0);

 VAR_1->enabled = 0;
}
