
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int is_nb_dpm_enabled; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 int VAR_3 = 0;

 struct smu8_hwmgr *VAR_4 = VAR_2->backend;
 unsigned long VAR_5 = 0;

 if (!VAR_4->is_nb_dpm_enabled) {
  FUNC_0("enabling ALL SMU features.\n");
  VAR_5 |= VAR_0;
  VAR_3 = FUNC_1(
         VAR_2,
         VAR_1,
         VAR_5);
  if (VAR_3 == 0)
   VAR_4->is_nb_dpm_enabled = 1;
 }

 return VAR_3;
}
