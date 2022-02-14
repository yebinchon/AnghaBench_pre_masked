
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* smu_init ) (struct pp_hwmgr*) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct pp_hwmgr*) ;

int FUNC_3(struct pp_hwmgr *VAR_1)
{
 if (!VAR_1|| !VAR_1->smumgr_funcs || !VAR_1->smumgr_funcs->smu_init)
  return -VAR_0;

 FUNC_0(VAR_1);
 FUNC_1("hwmgr_sw_init smu backed is %s\n", VAR_1->smumgr_funcs->name);

 return VAR_1->smumgr_funcs->smu_init(VAR_1);
}
