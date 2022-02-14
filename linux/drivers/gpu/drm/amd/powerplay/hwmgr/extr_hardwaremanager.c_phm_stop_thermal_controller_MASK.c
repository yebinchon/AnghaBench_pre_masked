
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct TYPE_2__ {int (* stop_thermal_controller ) (struct pp_hwmgr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;

int FUNC_2(struct pp_hwmgr *VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1->hwmgr_func->stop_thermal_controller == ((void*)0))
  return -VAR_0;

 return VAR_1->hwmgr_func->stop_thermal_controller(VAR_1);
}
