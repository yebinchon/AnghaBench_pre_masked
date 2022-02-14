
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int need_update_smu7_dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_2->backend);

 if (VAR_3->need_update_smu7_dpm_table &
   (VAR_1 + VAR_0))
  return FUNC_0(VAR_2);

 return 0;
}
