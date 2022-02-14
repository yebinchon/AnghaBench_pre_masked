
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore_box {int flags; TYPE_1__* pmu; } ;
struct TYPE_2__ {int pmu_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_4)
{
 if (VAR_4->pmu->pmu_idx == 0) {
  FUNC_1(VAR_1,
   VAR_2 | VAR_0);
 }


 if (VAR_4->pmu->pmu_idx == 7)
  FUNC_0(VAR_3, &VAR_4->flags);
}
