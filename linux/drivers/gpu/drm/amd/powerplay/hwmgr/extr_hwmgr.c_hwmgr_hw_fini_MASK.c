
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {TYPE_2__* pptable_func; TYPE_1__* hwmgr_func; int pm_en; } ;
struct TYPE_4__ {int (* pptable_fini ) (struct pp_hwmgr*) ;} ;
struct TYPE_3__ {int (* backend_fini ) (struct pp_hwmgr*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int,int *) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;

int FUNC_8(struct pp_hwmgr *VAR_0)
{
 if (!VAR_0 || !VAR_0->pm_en)
  return 0;

 FUNC_2(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0, 1, ((void*)0));
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 if (VAR_0->hwmgr_func->backend_fini)
  VAR_0->hwmgr_func->backend_fini(VAR_0);
 if (VAR_0->pptable_func->pptable_fini)
  VAR_0->pptable_func->pptable_fini(VAR_0);
 return FUNC_4(VAR_0);
}
