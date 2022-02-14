
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int pmic_bus_access_nb; } ;


 int FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (struct intel_uncore*) ;
 scalar_t__ FUNC_2 (struct intel_uncore*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct intel_uncore*) ;

void FUNC_7(struct intel_uncore *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  FUNC_3();
  FUNC_5(
   &VAR_0->pmic_bus_access_nb);
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
  FUNC_4();
 }

 FUNC_6(VAR_0);
}
