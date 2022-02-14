
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv7xx_power_info {int mem_gddr5; } ;
struct radeon_device {int dummy; } ;
struct atom_memory_clock_range_table {int member_0; } ;


 int FUNC_0 (struct radeon_device*,struct atom_memory_clock_range_table*) ;
 int FUNC_1 (struct radeon_device*,int ,int ,struct atom_memory_clock_range_table*) ;
 int FUNC_2 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_3(VAR_0);
 u8 VAR_2 = FUNC_2(VAR_0);
 struct atom_memory_clock_range_table VAR_3 = { 0 };
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0,
            VAR_1->mem_gddr5,
            VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_0, &VAR_3);

 return 0;
}
