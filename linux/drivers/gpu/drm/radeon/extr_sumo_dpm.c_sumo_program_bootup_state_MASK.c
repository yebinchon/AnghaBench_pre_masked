
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_power_info {int boot_pl; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int,int) ;
 int FUNC_4 (struct radeon_device*,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_1)
{
 struct sumo_power_info *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;

 FUNC_4(VAR_1, &VAR_2->boot_pl, 0);

 VAR_3 &= 0xFFFFFF00;
 FUNC_1(VAR_0, VAR_3);

 for (VAR_4 = 1; VAR_4 < 8; VAR_4++)
  FUNC_3(VAR_1, VAR_4, 0);
}
