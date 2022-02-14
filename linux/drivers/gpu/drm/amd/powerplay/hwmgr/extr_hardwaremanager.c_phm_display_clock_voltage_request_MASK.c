
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct pp_display_clock_request {int dummy; } ;
struct TYPE_2__ {int (* display_clock_voltage_request ) (struct pp_hwmgr*,struct pp_display_clock_request*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_display_clock_request*) ;

int FUNC_2(struct pp_hwmgr *VAR_1,
  struct pp_display_clock_request *VAR_2)
{
 FUNC_0(VAR_1);

 if (!VAR_1->hwmgr_func->display_clock_voltage_request)
  return -VAR_0;

 return VAR_1->hwmgr_func->display_clock_voltage_request(VAR_1, VAR_2);
}
