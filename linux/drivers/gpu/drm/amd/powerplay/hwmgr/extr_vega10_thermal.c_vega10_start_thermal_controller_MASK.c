
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct PP_TemperatureRange {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,struct PP_TemperatureRange*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

int FUNC_5(struct pp_hwmgr *VAR_1,
    struct PP_TemperatureRange *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return -VAR_0;

 FUNC_0(VAR_1);





 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return -VAR_0;

 FUNC_4(VAR_1);

 return 0;
}
