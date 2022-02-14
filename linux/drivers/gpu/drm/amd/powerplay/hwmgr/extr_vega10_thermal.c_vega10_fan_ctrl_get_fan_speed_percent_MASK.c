
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int usMaxFanRPM; } ;
struct TYPE_4__ {scalar_t__ bNoFan; } ;
struct TYPE_5__ {TYPE_3__ advanceFanControlParameters; TYPE_1__ fanInfo; } ;
struct pp_hwmgr {TYPE_2__ thermal_controller; } ;


 scalar_t__ FUNC_0 (struct pp_hwmgr*,int*) ;

int FUNC_1(struct pp_hwmgr *VAR_0,
  uint32_t *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3 = 0;

 if (VAR_0->thermal_controller.fanInfo.bNoFan)
  return 0;

 if (FUNC_0(VAR_0, &VAR_2))
  return -1;

 if (VAR_0->thermal_controller.
   advanceFanControlParameters.usMaxFanRPM != 0)
  VAR_3 = VAR_2 * 100 /
   VAR_0->thermal_controller.
   advanceFanControlParameters.usMaxFanRPM;

 *VAR_1 = VAR_3 > 100 ? 100 : VAR_3;

 return 0;
}
