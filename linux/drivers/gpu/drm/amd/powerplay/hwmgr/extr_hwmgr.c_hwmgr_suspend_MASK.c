
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int pm_en; } ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int,int *) ;
 int FUNC_3 (struct pp_hwmgr*) ;

int FUNC_4(struct pp_hwmgr *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0 || !VAR_0->pm_en)
  return 0;

 FUNC_0(VAR_0);
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_2(VAR_0, 1, ((void*)0));
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
