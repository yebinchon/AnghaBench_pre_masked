
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct at91_adc_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct at91_adc_state {int touchscreen_type; struct at91_adc_caps* caps; int * registers; int trigger_list; int trigger_number; int startup_time; int num_channels; int channels_mask; int vref_mv; int use_external; } ;
struct at91_adc_data {int touchscreen_type; int trigger_list; int trigger_number; int startup_time; int channels_used; int vref; int use_external_triggers; } ;
struct at91_adc_caps {int registers; int num_channels; } ;
struct TYPE_4__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static int FUNC_1(struct at91_adc_state *VAR_1,
    struct platform_device *VAR_2)
{
 struct at91_adc_data *VAR_3 = VAR_2->dev.platform_data;

 if (!VAR_3)
  return -VAR_0;

 VAR_1->caps = (struct at91_adc_caps *)
   FUNC_0(VAR_2)->driver_data;

 VAR_1->use_external = VAR_3->use_external_triggers;
 VAR_1->vref_mv = VAR_3->vref;
 VAR_1->channels_mask = VAR_3->channels_used;
 VAR_1->num_channels = VAR_1->caps->num_channels;
 VAR_1->startup_time = VAR_3->startup_time;
 VAR_1->trigger_number = VAR_3->trigger_number;
 VAR_1->trigger_list = VAR_3->trigger_list;
 VAR_1->registers = &VAR_1->caps->registers;
 VAR_1->touchscreen_type = VAR_3->touchscreen_type;

 return 0;
}
