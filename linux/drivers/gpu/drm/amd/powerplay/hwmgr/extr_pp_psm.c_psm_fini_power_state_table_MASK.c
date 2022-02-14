
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int * current_ps; int * ps; int * request_ps; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct pp_hwmgr *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return -VAR_0;

 if (!VAR_1->ps)
  return 0;

 FUNC_0(VAR_1->current_ps);
 FUNC_0(VAR_1->request_ps);
 FUNC_0(VAR_1->ps);
 VAR_1->request_ps = ((void*)0);
 VAR_1->ps = ((void*)0);
 VAR_1->current_ps = ((void*)0);
 return 0;
}
