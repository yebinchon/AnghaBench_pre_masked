
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int pm_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int,int *) ;
 int FUNC_4 (struct pp_hwmgr*) ;

int FUNC_5(struct pp_hwmgr *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return -VAR_0;

 if (!VAR_1->pm_en)
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_2(VAR_1);
 VAR_2 |= FUNC_4(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, 0, ((void*)0));

 return VAR_2;
}
