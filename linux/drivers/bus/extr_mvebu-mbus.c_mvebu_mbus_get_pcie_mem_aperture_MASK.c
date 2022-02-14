
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {struct resource pcie_mem_aperture; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(struct resource *VAR_1)
{
 if (!VAR_1)
  return;
 *VAR_1 = VAR_0.pcie_mem_aperture;
}
