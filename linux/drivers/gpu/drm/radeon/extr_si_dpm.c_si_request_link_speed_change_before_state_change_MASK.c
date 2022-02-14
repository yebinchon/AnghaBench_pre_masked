
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {scalar_t__ force_pcie_gen; int pspp_notify_required; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
typedef enum radeon_pcie_gen { ____Placeholder_radeon_pcie_gen } radeon_pcie_gen ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;
 struct si_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3,
            struct radeon_ps *VAR_4,
            struct radeon_ps *VAR_5)
{
 struct si_power_info *VAR_6 = FUNC_3(VAR_3);
 enum radeon_pcie_gen VAR_7 = FUNC_2(VAR_3, VAR_4);
 enum radeon_pcie_gen VAR_8;

 if (VAR_6->force_pcie_gen == VAR_2)
  VAR_8 = FUNC_2(VAR_3, VAR_5);
 else
  VAR_8 = VAR_6->force_pcie_gen;

 VAR_6->force_pcie_gen = VAR_2;
 VAR_6->pspp_notify_required = 0;
 if (VAR_7 > VAR_8) {
  switch (VAR_7) {
  default:
   VAR_6->force_pcie_gen = FUNC_1(VAR_3);
   break;
  }
 } else {
  if (VAR_7 < VAR_8)
   VAR_6->pspp_notify_required = 1;
 }
}
