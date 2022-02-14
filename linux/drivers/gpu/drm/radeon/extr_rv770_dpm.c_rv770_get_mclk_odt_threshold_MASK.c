
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv7xx_power_info {int mclk_odt_threshold; } ;
struct radeon_device {scalar_t__ family; } ;
struct atom_memory_info {scalar_t__ mem_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,struct atom_memory_info*) ;
 int FUNC_1 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_2(VAR_4);
 u8 VAR_6;
 struct atom_memory_info VAR_7;

 VAR_5->mclk_odt_threshold = 0;

 if ((VAR_4->family == VAR_1) || (VAR_4->family == VAR_0)) {
  VAR_6 = FUNC_1(VAR_4);

  if (FUNC_0(VAR_4, VAR_6, &VAR_7))
   return;

  if (VAR_7.mem_type == VAR_2 ||
      VAR_7.mem_type == VAR_3)
   VAR_5->mclk_odt_threshold = 30000;
 }
}
