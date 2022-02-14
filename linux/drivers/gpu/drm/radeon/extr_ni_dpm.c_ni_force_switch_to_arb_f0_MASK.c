
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {int sram_end; } ;
struct radeon_device {int dummy; } ;
struct ni_power_info {int arb_table_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int,int) ;
 struct ni_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_2(VAR_1);
 struct ni_power_info *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_3->arb_table_start,
     &VAR_4, VAR_2->sram_end);
 if (VAR_5)
  return VAR_5;

 VAR_4 = (VAR_4 >> 24) & 0xff;

 if (VAR_4 == VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_4, VAR_0);
}
