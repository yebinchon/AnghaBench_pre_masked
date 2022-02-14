
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* level; void* max; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_connector {struct intel_panel panel; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 void* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct intel_connector *VAR_1,
          enum pipe VAR_2)
{
 struct intel_panel *VAR_3 = &VAR_1->panel;

 VAR_3->backlight.max = VAR_0;
 VAR_3->backlight.level = VAR_0;

 return 0;
}
