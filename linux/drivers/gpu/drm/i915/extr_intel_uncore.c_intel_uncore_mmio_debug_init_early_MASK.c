
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_mmio_debug {int unclaimed_mmio_check; int lock; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct intel_uncore_mmio_debug *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->unclaimed_mmio_check = 1;
}
