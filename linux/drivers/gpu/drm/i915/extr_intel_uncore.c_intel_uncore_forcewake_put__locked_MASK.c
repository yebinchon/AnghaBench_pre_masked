
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int force_wake_put; } ;
struct intel_uncore {TYPE_1__ funcs; int lock; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int FUNC_0 (struct intel_uncore*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct intel_uncore *VAR_0,
     enum forcewake_domains VAR_1)
{
 FUNC_1(&VAR_0->lock);

 if (!VAR_0->funcs.force_wake_put)
  return;

 FUNC_0(VAR_0, VAR_1);
}
