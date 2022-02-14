
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {int sram_end; int smc_powertune_table; scalar_t__ caps_power_containment; } ;
typedef int SMU7_Discrete_PmFuses ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ,int *,int,int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;
 int VAR_6;

 if (VAR_4->caps_power_containment) {
  VAR_6 = FUNC_10(VAR_3,
          VAR_1 +
          FUNC_11(VAR_2, VAR_0),
          &VAR_5, VAR_4->sram_end);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_9(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_7(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_8(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_5(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_6(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_2(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_3(VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_0(VAR_3, VAR_5,
        (u8 *)&VAR_4->smc_powertune_table,
        sizeof(SMU7_Discrete_PmFuses), VAR_4->sram_end);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
