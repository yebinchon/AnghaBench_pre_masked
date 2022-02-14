
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {TYPE_1__* debug; } ;
struct TYPE_2__ {scalar_t__ suspend_count; int lock; } ;


 int FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (struct intel_uncore*) ;
 scalar_t__ FUNC_2 (struct intel_uncore*) ;
 scalar_t__ FUNC_3 (struct intel_uncore*) ;
 scalar_t__ FUNC_4 (struct intel_uncore*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct intel_uncore*) ;

__attribute__((used)) static bool
FUNC_7(struct intel_uncore *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_5(&VAR_0->debug->lock);

 if (VAR_0->debug->suspend_count)
  return 0;

 if (FUNC_4(VAR_0))
  VAR_1 |= FUNC_0(VAR_0);

 if (FUNC_2(VAR_0))
  VAR_1 |= FUNC_6(VAR_0);

 if (FUNC_3(VAR_0))
  VAR_1 |= FUNC_1(VAR_0);

 return VAR_1;
}
