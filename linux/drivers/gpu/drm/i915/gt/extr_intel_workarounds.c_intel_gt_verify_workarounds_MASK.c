
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {TYPE_1__* i915; int uncore; } ;
struct TYPE_2__ {int gt_wa_list; } ;


 int FUNC_0 (int ,int *,char const*) ;

bool FUNC_1(struct intel_gt *VAR_0, const char *VAR_1)
{
 return FUNC_0(VAR_0->uncore, &VAR_0->i915->gt_wa_list, VAR_1);
}
