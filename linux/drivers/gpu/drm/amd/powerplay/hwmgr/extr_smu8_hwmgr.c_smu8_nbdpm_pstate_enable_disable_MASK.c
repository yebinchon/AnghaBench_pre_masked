
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {scalar_t__ is_nb_dpm_enabled; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2, bool VAR_3, bool VAR_4)
{
 struct smu8_hwmgr *VAR_5 = VAR_2->backend;

 if (VAR_5->is_nb_dpm_enabled) {
  if (VAR_3) {
   FUNC_0("enable Low Memory PState.\n");

   return FUNC_1(VAR_2,
      VAR_1,
      (VAR_4 ? 1 : 0));
  } else {
   FUNC_0("disable Low Memory PState.\n");

   return FUNC_1(VAR_2,
      VAR_0,
      (VAR_4 ? 1 : 0));
  }
 }

 return 0;
}
