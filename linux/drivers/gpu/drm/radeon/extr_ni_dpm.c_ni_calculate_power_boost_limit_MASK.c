
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct ni_power_info {scalar_t__ use_power_boost_limit; scalar_t__ enable_power_containment; } ;
struct evergreen_power_info {int vddc_voltage_table; } ;
struct TYPE_2__ {int vddc; } ;
typedef int NISLANDS_SMC_VOLTAGE_VALUE ;


 int FUNC_0 (int,int) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 struct ni_power_info* FUNC_2 (struct radeon_device*) ;
 struct ni_ps* FUNC_3 (struct radeon_ps*) ;
 int FUNC_4 (struct radeon_device*,int *,scalar_t__*) ;
 int FUNC_5 (struct radeon_device*,int *,int ,int *) ;

__attribute__((used)) static u32 FUNC_6(struct radeon_device *VAR_0,
       struct radeon_ps *VAR_1,
       u32 VAR_2)
{
 struct ni_ps *VAR_3 = FUNC_3(VAR_1);
 struct evergreen_power_info *VAR_4 = FUNC_1(VAR_0);
 struct ni_power_info *VAR_5 = FUNC_2(VAR_0);
 u32 VAR_6 = 0;
 int VAR_7;

 if (VAR_5->enable_power_containment &&
     VAR_5->use_power_boost_limit) {
  NISLANDS_SMC_VOLTAGE_VALUE VAR_8;
  u16 VAR_9;
  u16 VAR_10;
  u64 VAR_11, VAR_12, VAR_13;

  if (VAR_3->performance_level_count < 3)
   return 0;

  VAR_7 = FUNC_5(VAR_0, &VAR_4->vddc_voltage_table,
      VAR_3->performance_levels[VAR_3->performance_level_count - 2].vddc,
      &VAR_8);
  if (VAR_7)
   return 0;

  VAR_7 = FUNC_4(VAR_0, &VAR_8, &VAR_9);
  if (VAR_7)
   return 0;

  VAR_7 = FUNC_5(VAR_0, &VAR_4->vddc_voltage_table,
      VAR_3->performance_levels[VAR_3->performance_level_count - 1].vddc,
      &VAR_8);
  if (VAR_7)
   return 0;

  VAR_7 = FUNC_4(VAR_0, &VAR_8, &VAR_10);
  if (VAR_7)
   return 0;

  VAR_12 = ((u64)VAR_2 * ((u64)VAR_9 * (u64)VAR_9) * 90);
  VAR_13 = ((u64)VAR_10 * (u64)VAR_10 * 100);
  VAR_11 = FUNC_0(VAR_12, VAR_13);

  if (VAR_11 >> 32)
   return 0;
  VAR_6 = (u32)VAR_11;
 }

 return VAR_6;
}
