
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* update_smc_table ) (struct pp_hwmgr*,int ) ;} ;


 int FUNC_0 (struct pp_hwmgr*,int ) ;

int FUNC_1(struct pp_hwmgr *VAR_0, uint32_t VAR_1)
{

 if (((void*)0) != VAR_0->smumgr_funcs->update_smc_table)
  return VAR_0->smumgr_funcs->update_smc_table(VAR_0, VAR_1);

 return 0;
}
