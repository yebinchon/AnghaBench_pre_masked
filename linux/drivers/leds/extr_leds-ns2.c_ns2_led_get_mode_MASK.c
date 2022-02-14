
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns2_led_data {int num_modes; TYPE_1__* modval; int slow; int cmd; } ;
typedef enum ns2_led_modes { ____Placeholder_ns2_led_modes } ns2_led_modes ;
struct TYPE_2__ {int cmd_level; int slow_level; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ns2_led_data *VAR_1,
       enum ns2_led_modes *VAR_2)
{
 int VAR_3;
 int VAR_4 = -VAR_0;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1->cmd);
 VAR_6 = FUNC_0(VAR_1->slow);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_modes; VAR_3++) {
  if (VAR_5 == VAR_1->modval[VAR_3].cmd_level &&
      VAR_6 == VAR_1->modval[VAR_3].slow_level) {
   *VAR_2 = VAR_1->modval[VAR_3].mode;
   VAR_4 = 0;
   break;
  }
 }

 return VAR_4;
}
