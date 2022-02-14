
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ alternate_pwm_increment; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_connector {struct intel_panel panel; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct intel_connector *VAR_0, u32 VAR_1)
{
 struct intel_panel *VAR_2 = &VAR_0->panel;
 u32 VAR_3;

 if (VAR_2->backlight.alternate_pwm_increment)
  VAR_3 = 128;
 else
  VAR_3 = 16;

 return FUNC_0(FUNC_1(24), VAR_1 * VAR_3);
}
