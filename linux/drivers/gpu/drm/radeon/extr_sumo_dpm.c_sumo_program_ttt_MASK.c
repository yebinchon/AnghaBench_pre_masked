
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_power_info {scalar_t__ thermal_auto_throttling; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct sumo_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_0);
 struct sumo_power_info *VAR_5 = FUNC_3(VAR_3);

 VAR_4 &= ~(VAR_2 | VAR_1);
 VAR_4 |= FUNC_0(VAR_5->thermal_auto_throttling + 49);

 FUNC_2(VAR_0, VAR_4);
}
