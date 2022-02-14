
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* smu_fini ) (struct pp_hwmgr*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;

int FUNC_1(struct pp_hwmgr *VAR_0)
{
 if (VAR_0 && VAR_0->smumgr_funcs && VAR_0->smumgr_funcs->smu_fini)
  VAR_0->smumgr_funcs->smu_fini(VAR_0);

 return 0;
}
