
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int pmic_bus_access_nb; int fw_domains_saved; } ;


 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_uncore*,unsigned int) ;
 int FUNC_3 (struct intel_uncore*) ;
 scalar_t__ FUNC_4 (struct intel_uncore*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct intel_uncore *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_4(VAR_0))
  FUNC_0("unclaimed mmio detected on resume, clearing\n");

 if (!FUNC_3(VAR_0))
  return;

 VAR_1 = FUNC_1(&VAR_0->fw_domains_saved);
 FUNC_2(VAR_0, VAR_1);

 FUNC_5(&VAR_0->pmic_bus_access_nb);
}
