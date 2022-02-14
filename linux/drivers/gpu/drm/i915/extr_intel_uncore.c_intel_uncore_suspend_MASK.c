
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int fw_domains_saved; int pmic_bus_access_nb; } ;


 int FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (struct intel_uncore*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void FUNC_5(struct intel_uncore *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;

 FUNC_2();
 FUNC_4(
  &VAR_0->pmic_bus_access_nb);
 VAR_0->fw_domains_saved = FUNC_0(VAR_0);
 FUNC_3();
}
