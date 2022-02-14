
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int need_update_smu7_dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_3->backend);

 if (VAR_4->need_update_smu7_dpm_table &
  (VAR_0 +
  VAR_2 +
  VAR_1))
  return FUNC_0(VAR_3);

 return 0;
}
