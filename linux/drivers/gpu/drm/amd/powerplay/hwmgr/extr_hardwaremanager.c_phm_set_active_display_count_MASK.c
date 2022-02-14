
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct TYPE_2__ {int (* set_active_display_count ) (struct pp_hwmgr*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_1);

 if (!VAR_1->hwmgr_func->set_active_display_count)
  return -VAR_0;

 return VAR_1->hwmgr_func->set_active_display_count(VAR_1, VAR_2);
}
