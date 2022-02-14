
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct amd_pp_simple_clock_info {int dummy; } ;
struct TYPE_2__ {int (* get_max_high_clocks ) (struct pp_hwmgr*,struct amd_pp_simple_clock_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,struct amd_pp_simple_clock_info*) ;

int FUNC_2(struct pp_hwmgr *VAR_1, struct amd_pp_simple_clock_info *VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_1->hwmgr_func->get_max_high_clocks == ((void*)0))
  return -VAR_0;

 return VAR_1->hwmgr_func->get_max_high_clocks(VAR_1, VAR_2);
}
