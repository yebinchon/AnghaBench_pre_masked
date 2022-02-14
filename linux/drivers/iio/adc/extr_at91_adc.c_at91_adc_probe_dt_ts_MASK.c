
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct at91_adc_state {int touchscreen_type; int ts_pressure_threshold; TYPE_1__* caps; } ;
struct TYPE_2__ {int has_tsmr; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1,
 struct at91_adc_state *VAR_2, struct device *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_1, "atmel,adc-ts-wires", &VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_3, "ADC Touch screen is disabled.\n");
  return 0;
 }

 switch (VAR_5) {
 case 4:
 case 5:
  VAR_2->touchscreen_type = VAR_5;
  break;
 default:
  FUNC_0(VAR_3, "Unsupported number of touchscreen wires (%d). Should be 4 or 5.\n", VAR_5);
  return -VAR_0;
 }

 if (!VAR_2->caps->has_tsmr)
  return 0;
 VAR_5 = 0;
 FUNC_2(VAR_1, "atmel,adc-ts-pressure-threshold", &VAR_5);
 VAR_2->ts_pressure_threshold = VAR_5;
 if (VAR_2->ts_pressure_threshold) {
  return 0;
 } else {
  FUNC_0(VAR_3, "Invalid pressure threshold for the touchscreen\n");
  return -VAR_0;
 }
}
