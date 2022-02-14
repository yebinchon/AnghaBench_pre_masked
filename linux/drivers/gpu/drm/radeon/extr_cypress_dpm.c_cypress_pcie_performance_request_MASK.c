
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {int pcie_performance_request_registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_5,
         u8 VAR_6, bool VAR_7)
{



 u32 VAR_8;

 FUNC_3(10);
 VAR_8 = FUNC_0(VAR_1);
 if ((VAR_6 == VAR_2) && (VAR_8 & VAR_0))
  return 0;
 return 0;
}
