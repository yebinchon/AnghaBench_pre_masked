
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_kms {int dummy; } ;
struct mdp5_encoder {TYPE_1__* intf; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int) ;
 struct mdp5_kms* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct mdp5_kms*,int ) ;
 struct mdp5_encoder* FUNC_3 (struct drm_encoder*) ;

int FUNC_4(struct drm_encoder *VAR_0)
{
 struct mdp5_encoder *VAR_1 = FUNC_3(VAR_0);
 struct mdp5_kms *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_1->intf->num;

 return FUNC_2(VAR_2, FUNC_0(VAR_3));
}
