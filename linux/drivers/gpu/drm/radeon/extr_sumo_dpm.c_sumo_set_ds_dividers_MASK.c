
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_power_info {scalar_t__ enable_sclk_ds; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 struct sumo_power_info *VAR_4 = FUNC_2(VAR_1);

 if (VAR_4->enable_sclk_ds) {
  u32 VAR_5 = FUNC_0(VAR_0);

  VAR_5 &= ~(0x7 << (VAR_2 * 3));
  VAR_5 |= (VAR_3 << (VAR_2 * 3));
  FUNC_1(VAR_0, VAR_5);
 }
}
