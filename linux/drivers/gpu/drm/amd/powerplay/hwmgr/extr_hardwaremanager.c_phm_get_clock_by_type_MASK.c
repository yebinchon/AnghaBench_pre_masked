
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct amd_pp_clocks {int dummy; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
struct TYPE_2__ {int (* get_clock_by_type ) (struct pp_hwmgr*,int,struct amd_pp_clocks*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int,struct amd_pp_clocks*) ;

int FUNC_2(struct pp_hwmgr *VAR_1, enum amd_pp_clock_type VAR_2, struct amd_pp_clocks *VAR_3)
{
 FUNC_0(VAR_1);

 if (VAR_1->hwmgr_func->get_clock_by_type == ((void*)0))
  return -VAR_0;

 return VAR_1->hwmgr_func->get_clock_by_type(VAR_1, VAR_2, VAR_3);

}
