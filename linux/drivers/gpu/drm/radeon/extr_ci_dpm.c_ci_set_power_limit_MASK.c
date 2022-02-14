
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {int power_containment_features; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_4, u32 VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->power_containment_features & VAR_1) {
  PPSMC_Result VAR_7 =
   FUNC_1(VAR_4, VAR_2, VAR_5);
  if (VAR_7 != VAR_3)
   return -VAR_0;
 }

 return 0;
}
