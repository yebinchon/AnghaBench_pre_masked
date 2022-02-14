
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {struct mdp5_interface* intf; } ;
struct mdp5_interface {int num; } ;
struct mdp5_ctl {int encoder_enabled; } ;


 int FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mdp5_ctl*) ;
 scalar_t__ FUNC_3 (struct mdp5_ctl*,struct mdp5_pipeline*) ;

int FUNC_4(struct mdp5_ctl *VAR_1,
          struct mdp5_pipeline *VAR_2,
          bool VAR_3)
{
 struct mdp5_interface *VAR_4 = VAR_2->intf;

 if (FUNC_1(!VAR_1))
  return -VAR_0;

 VAR_1->encoder_enabled = VAR_3;
 FUNC_0("intf_%d: %s", VAR_4->num, VAR_3 ? "on" : "off");

 if (FUNC_3(VAR_1, VAR_2)) {
  FUNC_2(VAR_1);
 }

 return 0;
}
