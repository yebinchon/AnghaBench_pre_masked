
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ lane_count; } ;
struct link_training_settings {TYPE_2__* lane_settings; TYPE_1__ link_settings; } ;
struct TYPE_4__ {scalar_t__ VOLTAGE_SWING; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(
 const struct link_training_settings *VAR_1)
{
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 <
  (uint32_t)(VAR_1->link_settings.lane_count);
  VAR_2++) {
  if (VAR_1->lane_settings[VAR_2].VOLTAGE_SWING
   == VAR_0)
   return 1;
 }
 return 0;

}
