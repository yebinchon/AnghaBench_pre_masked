
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_runtime_pm {int dummy; } ;
struct intel_engine_cs {int wakeref; TYPE_1__* i915; } ;
struct TYPE_2__ {struct intel_runtime_pm runtime_pm; } ;


 int FUNC_0 (int *,struct intel_runtime_pm*,int *) ;
 int VAR_0 ;

void FUNC_1(struct intel_engine_cs *VAR_1)
{
 struct intel_runtime_pm *VAR_2 = &VAR_1->i915->runtime_pm;

 FUNC_0(&VAR_1->wakeref, VAR_2, &VAR_0);
}
