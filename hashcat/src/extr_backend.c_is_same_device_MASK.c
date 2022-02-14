
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pcie_bus; scalar_t__ pcie_device; scalar_t__ pcie_function; } ;
typedef TYPE_1__ hc_device_param_t ;



__attribute__((used)) static bool FUNC_0 (const hc_device_param_t *VAR_0, const hc_device_param_t *VAR_1)
{
  if (VAR_0->pcie_bus != VAR_1->pcie_bus) return 0;
  if (VAR_0->pcie_device != VAR_1->pcie_device) return 0;
  if (VAR_0->pcie_function != VAR_1->pcie_function) return 0;

  return 1;
}
