
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int dentist_vco_freq; } ;
struct trinity_power_info {TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;


 struct trinity_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static u32 FUNC_1(struct radeon_device *VAR_0, u8 VAR_1)
{
 struct trinity_power_info *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 if (VAR_1 >= 8 && VAR_1 <= 0x3f)
  VAR_3 = VAR_1 * 25;
 else if (VAR_1 > 0x3f && VAR_1 <= 0x5f)
  VAR_3 = (VAR_1 - 64) * 50 + 1600;
 else if (VAR_1 > 0x5f && VAR_1 <= 0x7e)
  VAR_3 = (VAR_1 - 96) * 100 + 3200;
 else if (VAR_1 == 0x7f)
  VAR_3 = 128 * 100;
 else
  return 10000;

 return ((VAR_2->sys_info.dentist_vco_freq * 100) + (VAR_3 - 1)) / VAR_3;
}
