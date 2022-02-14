
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
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct ci_power_info* FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*,int ) ;
 int FUNC_6 (struct radeon_device*,int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_12)
{
 struct ci_power_info *VAR_13 = FUNC_4(VAR_12);
 PPSMC_Result VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_16 = FUNC_0(VAR_3);
 VAR_16 |= VAR_4;
 FUNC_2(VAR_3, VAR_16);

 VAR_16 = FUNC_0(VAR_9);
 VAR_16 |= VAR_1;
 FUNC_2(VAR_9, VAR_16);

 FUNC_6(VAR_12, FUNC_7(VAR_10, VAR_11), 0x1000);

 FUNC_1(VAR_0, 0, ~VAR_8);

 VAR_14 = FUNC_5(VAR_12, VAR_6);
 if (VAR_14 != VAR_7)
  return -VAR_2;

 VAR_15 = FUNC_3(VAR_12, 1);
 if (VAR_15)
  return VAR_15;

 if (!VAR_13->pcie_dpm_key_disabled) {
  VAR_14 = FUNC_5(VAR_12, VAR_5);
  if (VAR_14 != VAR_7)
   return -VAR_2;
 }

 return 0;
}
