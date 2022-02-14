
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,unsigned long*) ;
 int FUNC_1 (struct pp_hwmgr*,unsigned long) ;

int FUNC_2(struct pp_hwmgr *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = -VAR_0;

 if (!VAR_2->ps)
  return 0;

 if (!FUNC_0(VAR_2, VAR_1,
     &VAR_3))
  VAR_4 = FUNC_1(VAR_2, VAR_3);

 return VAR_4;
}
