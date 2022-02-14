
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {int dummy; } ;
struct mdp5_kms {int dummy; } ;
struct mdp5_interface {int num; } ;
struct mdp5_encoder {int enabled; int intf_lock; struct mdp5_interface* intf; struct mdp5_ctl* ctl; } ;
struct mdp5_ctl {int dummy; } ;
struct drm_encoder {int crtc; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mdp5_encoder*,int) ;
 struct mdp5_kms* FUNC_3 (struct drm_encoder*) ;
 struct mdp5_pipeline* FUNC_4 (int ) ;
 int FUNC_5 (struct mdp5_ctl*,struct mdp5_pipeline*,int ,int) ;
 int FUNC_6 (struct mdp5_ctl*,struct mdp5_pipeline*,int) ;
 int FUNC_7 (struct mdp5_kms*,int ,int) ;
 int FUNC_8 (struct mdp5_interface*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct mdp5_encoder* FUNC_11 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_12(struct drm_encoder *VAR_0)
{
 struct mdp5_encoder *VAR_1 = FUNC_11(VAR_0);
 struct mdp5_kms *VAR_2 = FUNC_3(VAR_0);
 struct mdp5_ctl *VAR_3 = VAR_1->ctl;
 struct mdp5_interface *VAR_4 = VAR_1->intf;
 struct mdp5_pipeline *VAR_5 = FUNC_4(VAR_0->crtc);
 int VAR_6 = VAR_4->num;
 unsigned long VAR_7;

 if (FUNC_1(VAR_1->enabled))
  return;

 FUNC_2(VAR_1, 1);
 FUNC_9(&VAR_1->intf_lock, VAR_7);
 FUNC_7(VAR_2, FUNC_0(VAR_6), 1);
 FUNC_10(&VAR_1->intf_lock, VAR_7);
 FUNC_5(VAR_3, VAR_5, FUNC_8(VAR_4), 1);

 FUNC_6(VAR_3, VAR_5, 1);

 VAR_1->enabled = 1;
}
