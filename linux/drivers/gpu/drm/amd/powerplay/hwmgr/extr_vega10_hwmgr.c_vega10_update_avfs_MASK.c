
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega10_hwmgr {int need_update_dpm_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega10_hwmgr *VAR_2 = VAR_1->backend;

 if (VAR_2->need_update_dpm_table & VAR_0) {
  FUNC_0(VAR_1, 0);
 } else if (VAR_2->need_update_dpm_table) {
  FUNC_0(VAR_1, 0);
  FUNC_0(VAR_1, 1);
 } else {
  FUNC_0(VAR_1, 1);
 }

 return 0;
}
