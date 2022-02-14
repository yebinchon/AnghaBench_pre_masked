
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_type {int num_boxes; struct intel_uncore_pmu* events_group; struct intel_uncore_pmu* pmus; } ;
struct intel_uncore_pmu {int dummy; } ;


 int FUNC_0 (struct intel_uncore_pmu*) ;
 int FUNC_1 (struct intel_uncore_pmu*) ;
 int FUNC_2 (struct intel_uncore_pmu*) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_type *VAR_0)
{
 struct intel_uncore_pmu *VAR_1 = VAR_0->pmus;
 int VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_boxes; VAR_2++, VAR_1++) {
   FUNC_2(VAR_1);
   FUNC_1(VAR_1);
  }
  FUNC_0(VAR_0->pmus);
  VAR_0->pmus = ((void*)0);
 }
 FUNC_0(VAR_0->events_group);
 VAR_0->events_group = ((void*)0);
}
