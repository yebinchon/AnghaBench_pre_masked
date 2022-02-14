
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_power_info {scalar_t__ driver_nbps_policy_disable; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct sumo_power_info *VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7 = VAR_5;
 u32 VAR_8;

 if (VAR_6->driver_nbps_policy_disable)
  VAR_7 = 1;

 VAR_8 = FUNC_0(VAR_0);
 VAR_8 &= ~(VAR_1 << VAR_4);
 VAR_8 |= (VAR_7 << (VAR_2 + VAR_4));

 FUNC_1(VAR_0, VAR_8);
}
