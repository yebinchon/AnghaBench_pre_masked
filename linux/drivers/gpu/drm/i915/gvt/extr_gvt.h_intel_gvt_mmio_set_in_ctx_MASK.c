
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mmio_attribute; } ;
struct intel_gvt {TYPE_1__ mmio; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(
   struct intel_gvt *VAR_1, unsigned int VAR_2)
{
 VAR_1->mmio.mmio_attribute[VAR_2 >> 2] |= VAR_0;
}
