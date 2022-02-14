
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {int* odt_value_0; int* odt_value_1; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

void FUNC_3(struct radeon_device *VAR_4, bool VAR_5)
{
 struct rv7xx_power_info *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = VAR_5 ? 0 : 1;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_0);
 VAR_8 &= 0xFFFFFF00;
 VAR_8 |= VAR_6->odt_value_0[VAR_7];
 FUNC_1(VAR_0, VAR_8);
 FUNC_1(VAR_1, VAR_8);

 VAR_8 = FUNC_0(VAR_2);
 VAR_8 &= 0xFFFFFF00;
 VAR_8 |= VAR_6->odt_value_1[VAR_7];
 FUNC_1(VAR_2, VAR_8);
 FUNC_1(VAR_3, VAR_8);
}
