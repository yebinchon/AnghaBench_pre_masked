
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore_box {TYPE_1__* pmu; int flags; } ;
struct TYPE_4__ {int event_ctl; scalar_t__ pair_ctr_ctl; } ;
struct TYPE_3__ {TYPE_2__* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct intel_uncore_box*) ;

__attribute__((used)) static inline
unsigned FUNC_2(struct intel_uncore_box *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_1, &VAR_2->flags)) {
  return VAR_0 +
         (VAR_2->pmu->type->pair_ctr_ctl ? 2 * VAR_3 : VAR_3);
 } else {
  return VAR_2->pmu->type->event_ctl +
         (VAR_2->pmu->type->pair_ctr_ctl ? 2 * VAR_3 : VAR_3) +
         FUNC_1(VAR_2);
 }
}
