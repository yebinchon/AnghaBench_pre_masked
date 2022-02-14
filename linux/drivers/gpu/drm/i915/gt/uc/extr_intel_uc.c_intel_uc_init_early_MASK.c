
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc {int huc; int guc; } ;


 int FUNC_0 (struct intel_uc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_uc *VAR_0)
{
 FUNC_1(&VAR_0->guc);
 FUNC_2(&VAR_0->huc);

 FUNC_0(VAR_0);
}
