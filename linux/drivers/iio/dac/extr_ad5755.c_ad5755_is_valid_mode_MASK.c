
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5755_state {TYPE_1__* chip_info; } ;
typedef enum ad5755_mode { ____Placeholder_ad5755_mode } ad5755_mode ;
struct TYPE_2__ {int has_voltage_out; } ;
__attribute__((used)) static bool FUNC_0(struct ad5755_state *VAR_0, enum ad5755_mode VAR_1)
{
 switch (VAR_1) {
 case 130:
 case 131:
 case 128:
 case 129:
  return VAR_0->chip_info->has_voltage_out;
 case 132:
 case 134:
 case 133:
  return 1;
 default:
  return 0;
 }
}
