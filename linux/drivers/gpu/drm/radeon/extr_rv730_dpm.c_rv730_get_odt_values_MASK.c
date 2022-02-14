
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct rv7xx_power_info {void** odt_value_1; void** odt_value_0; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_3->odt_value_0[0] = (u8)0;
 VAR_3->odt_value_1[0] = (u8)0x80;

 VAR_4 = FUNC_0(VAR_0);
 VAR_3->odt_value_0[1] = (u8)(VAR_4 & 0xff);

 VAR_4 = FUNC_0(VAR_1);
 VAR_3->odt_value_1[1] = (u8)(VAR_4 & 0xff);
}
