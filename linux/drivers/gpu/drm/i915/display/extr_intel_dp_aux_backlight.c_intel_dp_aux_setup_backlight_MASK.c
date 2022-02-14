
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; scalar_t__ level; int enabled; scalar_t__ min; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_dp {int* edp_dpcd; } ;
struct intel_connector {struct intel_panel panel; TYPE_2__* encoder; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 struct intel_dp* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct intel_connector*) ;

__attribute__((used)) static int FUNC_2(struct intel_connector *VAR_1,
     enum pipe VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_0(&VAR_1->encoder->base);
 struct intel_panel *VAR_4 = &VAR_1->panel;

 if (VAR_3->edp_dpcd[2] & VAR_0)
  VAR_4->backlight.max = 0xFFFF;
 else
  VAR_4->backlight.max = 0xFF;

 VAR_4->backlight.min = 0;
 VAR_4->backlight.level = FUNC_1(VAR_1);

 VAR_4->backlight.enabled = VAR_4->backlight.level != 0;

 return 0;
}
