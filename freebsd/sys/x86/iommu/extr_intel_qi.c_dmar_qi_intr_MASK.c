
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int qi_task; int qi_taskqueue; int unit; int qi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;

int
FUNC_2(void *VAR_1)
{
 struct dmar_unit *VAR_2;

 VAR_2 = VAR_1;
 FUNC_0(VAR_2->qi_enabled, ("dmar%d: QI is not enabled", VAR_2->unit));
 FUNC_1(VAR_2->qi_taskqueue, &VAR_2->qi_task);
 return (VAR_0);
}
