
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {scalar_t__ (* start_smu ) (struct pp_hwmgr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct pp_hwmgr *VAR_2 = VAR_1;

 if (!VAR_2 || !VAR_2->smumgr_funcs || !VAR_2->smumgr_funcs->start_smu)
  return -VAR_0;

 if (VAR_2->smumgr_funcs->start_smu(VAR_2)) {
  FUNC_0("fw load failed\n");
  return -VAR_0;
 }

 return 0;
}
