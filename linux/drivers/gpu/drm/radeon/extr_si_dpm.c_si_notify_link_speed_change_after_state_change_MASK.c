
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct si_power_info {scalar_t__ pspp_notify_required; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
typedef enum radeon_pcie_gen { ____Placeholder_radeon_pcie_gen } radeon_pcie_gen ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct radeon_device*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;
 struct si_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5,
          struct radeon_ps *VAR_6,
          struct radeon_ps *VAR_7)
{
 struct si_power_info *VAR_8 = FUNC_3(VAR_5);
 enum radeon_pcie_gen VAR_9 = FUNC_2(VAR_5, VAR_6);
 u8 VAR_10;

 if (VAR_8->pspp_notify_required) {
  if (VAR_9 == VAR_4)
   VAR_10 = VAR_2;
  else if (VAR_9 == VAR_3)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_0;

  if ((VAR_10 == VAR_0) &&
      (FUNC_1(VAR_5) > 0))
   return;




 }
}
