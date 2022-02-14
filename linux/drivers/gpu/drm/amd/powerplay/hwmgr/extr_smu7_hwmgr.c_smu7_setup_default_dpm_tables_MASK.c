
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_vddc; } ;
struct smu7_hwmgr {TYPE_1__ odn_dpm_table; int dpm_table; int golden_dpm_table; } ;
struct smu7_dpm_table {int dummy; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; scalar_t__ od_enabled; scalar_t__ backend; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_2->backend);

 FUNC_3(VAR_2);

 if (VAR_2->pp_table_version == VAR_1)
  FUNC_6(VAR_2);
 else if (VAR_2->pp_table_version == VAR_0)
  FUNC_5(VAR_2);

 FUNC_4(VAR_2);


 FUNC_0(&(VAR_3->golden_dpm_table), &(VAR_3->dpm_table),
   sizeof(struct smu7_dpm_table));


 if (VAR_2->od_enabled) {
  if (VAR_3->odn_dpm_table.max_vddc) {
   FUNC_1(VAR_2);
  } else {
   FUNC_7(VAR_2);
   FUNC_2(VAR_2);
  }
 }
 return 0;
}
