
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* update_dpm_settings ) (struct pp_hwmgr*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,void*) ;

int FUNC_1(struct pp_hwmgr *VAR_1, void *VAR_2)
{
 if (VAR_1->smumgr_funcs->update_dpm_settings)
  return VAR_1->smumgr_funcs->update_dpm_settings(VAR_1, VAR_2);

 return -VAR_0;
}
