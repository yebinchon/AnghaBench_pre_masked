
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore {TYPE_1__* debug; } ;
struct TYPE_4__ {int mmio_debug; } ;
struct TYPE_3__ {scalar_t__ unclaimed_mmio_check; int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_uncore*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

bool
FUNC_5(struct intel_uncore *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_2(&VAR_1->debug->lock);

 if (FUNC_4(VAR_1->debug->unclaimed_mmio_check <= 0))
  goto out;

 if (FUNC_4(FUNC_1(VAR_1))) {
  if (!VAR_0.mmio_debug) {
   FUNC_0("Unclaimed register detected, "
      "enabling oneshot unclaimed register reporting. "
      "Please use i915.mmio_debug=N for more information.\n");
   VAR_0.mmio_debug++;
  }
  VAR_1->debug->unclaimed_mmio_check--;
  VAR_2 = 1;
 }

out:
 FUNC_3(&VAR_1->debug->lock);

 return VAR_2;
}
