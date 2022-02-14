
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_mob {int * pt_bo; } ;


 int FUNC_0 (struct vmw_mob*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vmw_mob *VAR_0)
{
 if (VAR_0->pt_bo) {
  FUNC_1(VAR_0->pt_bo);
  VAR_0->pt_bo = ((void*)0);
 }
 FUNC_0(VAR_0);
}
