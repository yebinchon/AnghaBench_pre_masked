
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {TYPE_2__ thermal_controller; } ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;

int FUNC_2(struct pp_hwmgr *VAR_0)
{
 if (!VAR_0->thermal_controller.fanInfo.bNoFan) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }
 return 0;
}
