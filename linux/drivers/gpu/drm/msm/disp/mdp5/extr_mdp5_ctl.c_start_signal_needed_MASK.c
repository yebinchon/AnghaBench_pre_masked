
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {struct mdp5_interface* intf; } ;
struct mdp5_interface {int type; int mode; } ;
struct mdp5_ctl {int encoder_enabled; } ;




 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mdp5_ctl *VAR_1,
    struct mdp5_pipeline *VAR_2)
{
 struct mdp5_interface *VAR_3 = VAR_2->intf;

 if (!VAR_1->encoder_enabled)
  return 0;

 switch (VAR_3->type) {
 case 128:
  return 1;
 case 129:
  return VAR_3->mode == VAR_0;
 default:
  return 0;
 }
}
