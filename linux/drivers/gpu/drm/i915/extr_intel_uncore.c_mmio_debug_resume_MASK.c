
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_mmio_debug {int saved_mmio_check; int unclaimed_mmio_check; int suspend_count; int lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_mmio_debug *VAR_0)
{
 FUNC_0(&VAR_0->lock);

 if (!--VAR_0->suspend_count)
  VAR_0->unclaimed_mmio_check = VAR_0->saved_mmio_check;
}
