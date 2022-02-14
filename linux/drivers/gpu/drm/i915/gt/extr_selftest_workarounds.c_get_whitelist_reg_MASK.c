
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int count; TYPE_1__* list; } ;
struct intel_engine_cs {int mmio_base; TYPE_2__ whitelist; } ;
typedef int i915_reg_t ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32
FUNC_2(const struct intel_engine_cs *VAR_0, unsigned int VAR_1)
{
 i915_reg_t VAR_2 = VAR_1 < VAR_0->whitelist.count ?
    VAR_0->whitelist.list[VAR_1].reg :
    FUNC_0(VAR_0->mmio_base);

 return FUNC_1(VAR_2);
}
