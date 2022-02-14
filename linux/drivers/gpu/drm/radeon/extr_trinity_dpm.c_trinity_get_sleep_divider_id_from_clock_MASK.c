
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct trinity_power_info {int enable_sclk_ds; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static u8 FUNC_2(struct radeon_device *VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct trinity_power_info *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8 = (VAR_4 > VAR_1) ?
  VAR_4 : VAR_1;

 if (VAR_3 < VAR_8)
  return 0;

 if (!VAR_5->enable_sclk_ds)
  return 0;

 for (VAR_6 = VAR_0; ; VAR_6--) {
  VAR_7 = VAR_3 / FUNC_0(VAR_6);
  if (VAR_7 >= VAR_8 || VAR_6 == 0)
   break;
 }

 return (u8)VAR_6;
}
