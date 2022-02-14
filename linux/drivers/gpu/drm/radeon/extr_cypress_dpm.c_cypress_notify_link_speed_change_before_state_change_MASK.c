
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
typedef enum radeon_pcie_gen { ____Placeholder_radeon_pcie_gen } radeon_pcie_gen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,int ,int) ;

void FUNC_2(struct radeon_device *VAR_5,
         struct radeon_ps *VAR_6,
         struct radeon_ps *VAR_7)
{
 enum radeon_pcie_gen VAR_8 =
  FUNC_0(VAR_6);
 enum radeon_pcie_gen VAR_9 =
  FUNC_0(VAR_7);
 u8 VAR_10;

 if (VAR_8 > VAR_9) {
  if (VAR_8 == VAR_3)
   VAR_10 = VAR_0;
  else if (VAR_8 == VAR_4)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_2;

  FUNC_1(VAR_5, VAR_10, 0);
 }
}
