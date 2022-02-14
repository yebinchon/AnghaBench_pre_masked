
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct TYPE_2__ {int (* set_watermarks_for_clocks_ranges ) (struct pp_hwmgr*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,void*) ;

int FUNC_2(struct pp_hwmgr *VAR_1,
     void *VAR_2)
{
 FUNC_0(VAR_1);

 if (!VAR_1->hwmgr_func->set_watermarks_for_clocks_ranges)
  return -VAR_0;

 return VAR_1->hwmgr_func->set_watermarks_for_clocks_ranges(VAR_1,
        VAR_2);
}
