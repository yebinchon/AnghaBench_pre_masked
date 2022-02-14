
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rv7xx_power_info {int state_table_start; int sram_end; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
typedef int NISLANDS_SMC_SWSTATE ;
typedef int NISLANDS_SMC_HW_PERFORMANCE_LEVEL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct radeon_device*,int,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_5,
         struct radeon_ps *VAR_6)
{
 struct rv7xx_power_info *VAR_7 = FUNC_5(VAR_5);
 u16 VAR_8 = VAR_7->state_table_start +
  FUNC_3(VAR_3, VAR_4);
 u16 VAR_9 = sizeof(NISLANDS_SMC_SWSTATE) +
  ((VAR_2 - 1) * sizeof(NISLANDS_SMC_HW_PERFORMANCE_LEVEL));
 int VAR_10;
 NISLANDS_SMC_SWSTATE *VAR_11 = FUNC_1(VAR_9, VAR_1);

 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_11);
 if (VAR_10)
  goto done;

 VAR_10 = FUNC_4(VAR_5, VAR_8, (u8 *)VAR_11, VAR_9, VAR_7->sram_end);

done:
 FUNC_0(VAR_11);

 return VAR_10;
}
