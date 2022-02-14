
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_pmu {int registered; int pmu; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_pmu *VAR_0)
{
 if (!VAR_0->registered)
  return;
 FUNC_0(&VAR_0->pmu);
 VAR_0->registered = 0;
}
