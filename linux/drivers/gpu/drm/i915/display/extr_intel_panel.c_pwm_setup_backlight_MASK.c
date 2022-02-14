
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max; scalar_t__ level; int enabled; int * pwm; scalar_t__ min; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_device {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct intel_connector *VAR_2,
          enum pipe VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct intel_panel *VAR_5 = &VAR_2->panel;
 int VAR_6;


 VAR_5->backlight.pwm = FUNC_5(VAR_4->dev, "pwm_backlight");
 if (FUNC_2(VAR_5->backlight.pwm)) {
  FUNC_1("Failed to own the pwm chip\n");
  VAR_5->backlight.pwm = ((void*)0);
  return -VAR_1;
 }





 FUNC_3(VAR_5->backlight.pwm);

 VAR_6 = FUNC_4(VAR_5->backlight.pwm, VAR_0,
       VAR_0);
 if (VAR_6 < 0) {
  FUNC_1("Failed to configure the pwm chip\n");
  FUNC_7(VAR_5->backlight.pwm);
  VAR_5->backlight.pwm = ((void*)0);
  return VAR_6;
 }

 VAR_5->backlight.min = 0;
 VAR_5->backlight.max = 100;
 VAR_5->backlight.level = FUNC_0(
     FUNC_6(VAR_5->backlight.pwm) * 100,
     VAR_0);
 VAR_5->backlight.enabled = VAR_5->backlight.level != 0;

 return 0;
}
