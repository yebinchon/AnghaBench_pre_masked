
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {struct mdp5_interface* intf; } ;
struct mdp5_kms {int dummy; } ;
struct mdp5_interface {int type; } ;
struct mdp5_ctl {int ctlm; } ;


 struct mdp5_kms* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mdp5_ctl*,struct mdp5_pipeline*) ;
 int FUNC_3 (struct mdp5_kms*,struct mdp5_interface*) ;

int FUNC_4(struct mdp5_ctl *VAR_0, struct mdp5_pipeline *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_0(VAR_0->ctlm);
 struct mdp5_interface *VAR_3 = VAR_1->intf;


 if (!FUNC_1(VAR_3->type))
  FUNC_3(VAR_2, VAR_3);

 FUNC_2(VAR_0, VAR_1);

 return 0;
}
