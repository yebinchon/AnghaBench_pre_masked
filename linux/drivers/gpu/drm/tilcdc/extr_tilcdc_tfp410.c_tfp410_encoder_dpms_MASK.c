
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tfp410_encoder {int dpms; TYPE_1__* mod; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int gpio; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 struct tfp410_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_1, int VAR_2)
{
 struct tfp410_encoder *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->dpms == VAR_2)
  return;

 if (VAR_2 == VAR_0) {
  FUNC_0("Power on");
  FUNC_1(VAR_3->mod->gpio, 1);
 } else {
  FUNC_0("Power off");
  FUNC_1(VAR_3->mod->gpio, 0);
 }

 VAR_3->dpms = VAR_2;
}
