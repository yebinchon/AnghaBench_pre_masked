
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_interface {scalar_t__ type; int mode; } ;
struct mdp5_encoder {struct mdp5_interface* intf; } ;
struct drm_encoder {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct mdp5_encoder* FUNC_1 (struct drm_encoder*) ;

void FUNC_2(struct drm_encoder *VAR_4, bool VAR_5)
{
 struct mdp5_encoder *VAR_6 = FUNC_1(VAR_4);
 struct mdp5_interface *VAR_7 = VAR_6->intf;


 if (VAR_5) {
  FUNC_0(VAR_7->type != VAR_0);
  VAR_7->mode = VAR_1;
 } else {
  if (VAR_7->type == VAR_0)
   VAR_7->mode = VAR_2;
  else
   VAR_7->mode = VAR_3;
 }
}
