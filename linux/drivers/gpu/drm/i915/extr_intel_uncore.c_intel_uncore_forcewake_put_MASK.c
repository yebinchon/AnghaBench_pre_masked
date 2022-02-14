
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int force_wake_put; } ;
struct intel_uncore {int lock; TYPE_1__ funcs; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int FUNC_0 (struct intel_uncore*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct intel_uncore *VAR_0,
    enum forcewake_domains VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_0->funcs.force_wake_put)
  return;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
}
