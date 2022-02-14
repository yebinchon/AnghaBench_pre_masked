
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore_box {TYPE_2__* pmu; int flags; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int event_ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline
unsigned FUNC_1(struct intel_uncore_box *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_0, &VAR_1->flags))
  return VAR_2 * 8 + VAR_1->pmu->type->event_ctl;

 return VAR_2 * 4 + VAR_1->pmu->type->event_ctl;
}
