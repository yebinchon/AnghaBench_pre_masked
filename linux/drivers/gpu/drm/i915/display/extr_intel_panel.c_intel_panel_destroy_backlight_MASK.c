
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int present; scalar_t__ pwm; } ;
struct intel_panel {TYPE_1__ backlight; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct intel_panel *VAR_0)
{

 if (VAR_0->backlight.pwm)
  FUNC_0(VAR_0->backlight.pwm);

 VAR_0->backlight.present = 0;
}
