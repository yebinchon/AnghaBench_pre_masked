
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct ci_power_info {int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_11, bool VAR_12)
{
 struct ci_power_info *VAR_13 = FUNC_2(VAR_11);
 PPSMC_Result VAR_14;

 if (VAR_12) {
  if (!VAR_13->sclk_dpm_key_disabled) {
   VAR_14 = FUNC_3(VAR_11, VAR_7);
   if (VAR_14 != VAR_10)
    return -VAR_1;
  }

  if (!VAR_13->mclk_dpm_key_disabled) {
   VAR_14 = FUNC_3(VAR_11, VAR_9);
   if (VAR_14 != VAR_10)
    return -VAR_1;

   FUNC_0(VAR_5, VAR_0, ~VAR_0);

   FUNC_1(VAR_3, 0x05);
   FUNC_1(VAR_4, 0x05);
   FUNC_1(VAR_2, 0x100005);

   FUNC_4(10);

   FUNC_1(VAR_3, 0x400005);
   FUNC_1(VAR_4, 0x400005);
   FUNC_1(VAR_2, 0x500005);
  }
 } else {
  if (!VAR_13->sclk_dpm_key_disabled) {
   VAR_14 = FUNC_3(VAR_11, VAR_6);
   if (VAR_14 != VAR_10)
    return -VAR_1;
  }

  if (!VAR_13->mclk_dpm_key_disabled) {
   VAR_14 = FUNC_3(VAR_11, VAR_8);
   if (VAR_14 != VAR_10)
    return -VAR_1;
  }
 }

 return 0;
}
