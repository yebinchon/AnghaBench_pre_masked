
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore {TYPE_1__* debug; int lock; } ;
typedef int i915_reg_t ;
struct TYPE_4__ {int mmio_debug; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (struct intel_uncore*,int const,int const,int const) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(struct intel_uncore *VAR_1,
      const i915_reg_t VAR_2,
      const bool VAR_3,
      const bool VAR_4)
{
 if (FUNC_1(!VAR_0.mmio_debug))
  return;


 FUNC_2(&VAR_1->lock);

 if (VAR_4)
  FUNC_3(&VAR_1->debug->lock);

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 if (!VAR_4)
  FUNC_4(&VAR_1->debug->lock);
}
