
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* update_sclk_threshold ) (struct pp_hwmgr*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;

int FUNC_1(struct pp_hwmgr *VAR_0)
{

 if (((void*)0) != VAR_0->smumgr_funcs->update_sclk_threshold)
  return VAR_0->smumgr_funcs->update_sclk_threshold(VAR_0);

 return 0;
}
