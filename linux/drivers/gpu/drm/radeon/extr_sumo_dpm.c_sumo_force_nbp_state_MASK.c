
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sumo_ps {int flags; } ;
struct sumo_power_info {int driver_nbps_policy_disable; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct sumo_power_info* FUNC_1 (struct radeon_device*) ;
 struct sumo_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3,
     struct radeon_ps *VAR_4)
{
 struct sumo_power_info *VAR_5 = FUNC_1(VAR_3);
 struct sumo_ps *VAR_6 = FUNC_2(VAR_4);

 if (!VAR_5->driver_nbps_policy_disable) {
  if (VAR_6->flags & VAR_2)
   FUNC_0(VAR_0, VAR_1, ~VAR_1);
  else
   FUNC_0(VAR_0, 0, ~VAR_1);
 }
}
