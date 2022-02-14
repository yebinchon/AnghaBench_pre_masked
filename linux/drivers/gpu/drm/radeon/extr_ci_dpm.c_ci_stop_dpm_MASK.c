
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {int pcie_dpm_key_disabled; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*,int) ;
 struct ci_power_info* FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_8)
{
 struct ci_power_info *VAR_9 = FUNC_3(VAR_8);
 PPSMC_Result VAR_10;
 int VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_2);
 VAR_12 &= ~VAR_3;
 FUNC_1(VAR_2, VAR_12);

 VAR_12 = FUNC_0(VAR_7);
 VAR_12 &= ~VAR_0;
 FUNC_1(VAR_7, VAR_12);

 if (!VAR_9->pcie_dpm_key_disabled) {
  VAR_10 = FUNC_4(VAR_8, VAR_4);
  if (VAR_10 != VAR_6)
   return -VAR_1;
 }

 VAR_11 = FUNC_2(VAR_8, 0);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if (VAR_10 != VAR_6)
  return -VAR_1;

 return 0;
}
