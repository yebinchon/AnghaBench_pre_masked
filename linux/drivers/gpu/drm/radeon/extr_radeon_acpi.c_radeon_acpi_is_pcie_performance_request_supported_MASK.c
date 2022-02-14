
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pcie_dev_rdy; scalar_t__ pcie_perf_req; } ;
struct radeon_atcs {TYPE_1__ functions; } ;
struct radeon_device {struct radeon_atcs atcs; } ;



bool FUNC_0(struct radeon_device *VAR_0)
{
 struct radeon_atcs *VAR_1 = &VAR_0->atcs;

 if (VAR_1->functions.pcie_perf_req && VAR_1->functions.pcie_dev_rdy)
  return 1;

 return 0;
}
