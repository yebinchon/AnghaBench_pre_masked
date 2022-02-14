
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; int pm_en; } ;
typedef enum pp_mp1_state { ____Placeholder_pp_mp1_state } pp_mp1_state ;
struct TYPE_2__ {int (* set_mp1_state ) (struct pp_hwmgr*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, enum pp_mp1_state VAR_2)
{
 struct pp_hwmgr *VAR_3 = VAR_1;

 if (!VAR_3 || !VAR_3->pm_en)
  return -VAR_0;

 if (VAR_3->hwmgr_func->set_mp1_state)
  return VAR_3->hwmgr_func->set_mp1_state(VAR_3, VAR_2);

 return 0;
}
