
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int htc_hyst_lmt; } ;
struct trinity_power_info {int thermal_auto_throttling; TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 struct trinity_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_3)
{
 struct trinity_power_info *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_2);

 VAR_5 &= ~(VAR_0 | VAR_1);
 VAR_5 |= FUNC_0((VAR_4->thermal_auto_throttling + 49) * 8);
 VAR_5 |= FUNC_1((VAR_4->thermal_auto_throttling + 49 - VAR_4->sys_info.htc_hyst_lmt) * 8);
 FUNC_3(VAR_2, VAR_5);
}
