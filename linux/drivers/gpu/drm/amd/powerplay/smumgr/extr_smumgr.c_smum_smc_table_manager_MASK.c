
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* smc_table_manager ) (struct pp_hwmgr*,int *,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int *,int ,int) ;

int FUNC_1(struct pp_hwmgr *VAR_1, uint8_t *VAR_2, uint16_t VAR_3, bool VAR_4)
{
 if (VAR_1->smumgr_funcs->smc_table_manager)
  return VAR_1->smumgr_funcs->smc_table_manager(VAR_1, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
