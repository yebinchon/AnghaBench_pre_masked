
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rv7xx_ps {TYPE_1__ high; } ;
struct radeon_ps {int dummy; } ;
typedef enum radeon_pcie_gen { ____Placeholder_radeon_pcie_gen } radeon_pcie_gen ;


 int VAR_0 ;
 struct rv7xx_ps* FUNC_0 (struct radeon_ps*) ;

__attribute__((used)) static enum radeon_pcie_gen FUNC_1(struct radeon_ps *VAR_1)
{
 struct rv7xx_ps *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->high.flags & VAR_0)
  return 1;
 return 0;
}
