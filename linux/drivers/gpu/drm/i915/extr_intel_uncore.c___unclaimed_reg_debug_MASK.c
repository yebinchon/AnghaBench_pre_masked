
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {int mmio_debug; } ;


 scalar_t__ FUNC_0 (int,char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct intel_uncore*) ;
 int FUNC_2 (int const) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct intel_uncore *VAR_1,
        const i915_reg_t VAR_2,
        const bool VAR_3,
        const bool VAR_4)
{
 if (FUNC_0(FUNC_1(VAR_1) && !VAR_4,
   "Unclaimed %s register 0x%x\n",
   VAR_3 ? "read from" : "write to",
   FUNC_2(VAR_2)))

  VAR_0.mmio_debug--;
}
