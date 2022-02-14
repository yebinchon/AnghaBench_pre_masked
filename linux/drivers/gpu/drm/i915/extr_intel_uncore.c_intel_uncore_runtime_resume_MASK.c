
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int pmic_bus_access_nb; } ;


 int FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct intel_uncore *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(&VAR_0->pmic_bus_access_nb);
}
